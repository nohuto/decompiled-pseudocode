/*
 * XREFs of MiComputePageCommitment @ 0x1401085E0
 * Callers:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiCommitExistingVad @ 0x1400CE7C0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 * Callees:
 *     MI_PROTO_FORMAT_COMBINED @ 0x140073B74 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiIsPteDecommittedPage @ 0x1401087FC (MiIsPteDecommittedPage.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiComputePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        _QWORD *a5)
{
  int v6; // ebx
  _KPROCESS *Process; // r14
  __int64 v8; // r15
  unsigned __int64 NextPageTable; // r10
  unsigned __int64 v10; // rbp
  __int64 v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  __int64 PrototypePteDirect; // rdx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *CloneAddress; // rax
  unsigned __int64 v26; // r11
  int v28; // [rsp+70h] [rbp+8h] BYREF
  __int64 v29; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = *(_QWORD *)&Process[1].IdealGlobalNode;
  NextPageTable = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( *(_DWORD *)(a3 + 52) < 0x80000000 )
  {
    v11 = 0LL;
  }
  else
  {
    v6 = 2;
    v11 = ((__int64)(v10 - NextPageTable) >> 3) + 1;
  }
  v12 = a5;
  if ( a5 )
    *a5 = 0LL;
  if ( NextPageTable <= v10 )
  {
LABEL_7:
    NextPageTable = MiGetNextPageTable(NextPageTable, v10, 0LL, a4, 4, &v28);
    if ( !NextPageTable )
      return v11;
    do
    {
      v29 = MI_READ_PTE_LOCK_FREE(NextPageTable);
      if ( v29 )
      {
        v6 = (unsigned int)MiIsPteDecommittedPage(&v29, v13, v14, v29) ? v6 | 1 : v6 & 0xFFFFFFFE;
        if ( (v6 & 2) != 0 )
        {
          v17 = v11 - 1;
          v18 = v6 & 1;
          if ( (v6 & 1) == 0 )
            v17 = v11;
          v11 = v17;
        }
        else
        {
          v18 = v6 & 1;
          if ( (v6 & 1) == 0 )
            ++v11;
        }
        if ( v12 && *(_QWORD *)(v8 + 240) && !v18 )
        {
          if ( (v16 & 1) != 0 )
          {
            v19 = MI_GET_PAGE_FRAME_FROM_PTE(&v29);
            if ( (*(_QWORD *)(48 * v19 - 0x58000000000LL + 40) & 0x200000000000000LL) == 0
              || *(__int64 *)(48 * v19 - 0x58000000000LL + 8) >= 0 )
            {
              goto LABEL_32;
            }
            PrototypePteDirect = *(_QWORD *)(48 * v19 - 0x58000000000LL + 8) | 0x8000000000000000uLL;
          }
          else
          {
            if ( (v16 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v16) || MI_PROTO_FORMAT_COMBINED(v21) )
              goto LABEL_32;
            PrototypePteDirect = MiGetPrototypePteDirect(v24, v22, v23, v24);
          }
          CloneAddress = MiLocateCloneAddress((__int64)Process, PrototypePteDirect);
          if ( CloneAddress && v26 > CloneAddress[9] )
            ++*v12;
        }
      }
LABEL_32:
      NextPageTable = v15 + 8;
      if ( (NextPageTable & 0xFFF) == 0 )
      {
        if ( NextPageTable > v10 )
          return v11;
        goto LABEL_7;
      }
    }
    while ( NextPageTable <= v10 );
  }
  return v11;
}

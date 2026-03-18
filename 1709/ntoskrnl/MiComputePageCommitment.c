/*
 * XREFs of MiComputePageCommitment @ 0x140112BF0
 * Callers:
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x14003AFF0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     MiCountCommittedPages @ 0x140229554 (MiCountCommittedPages.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14011D054 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
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
  __int64 PteShadow; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 PrototypePteDirect; // rdx
  __int64 v20; // r9
  __int64 v21; // r9
  _QWORD *CloneAddress; // rax
  unsigned __int64 v23; // r11
  int v25; // [rsp+70h] [rbp+8h] BYREF
  __int64 v26; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = *(_QWORD *)&Process[1].IdealGlobalNode;
  NextPageTable = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( *(int *)(a3 + 52) >= 0 )
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
    NextPageTable = MiGetNextPageTable(NextPageTable, v10, 0LL, a4, 4u, &v25);
    if ( !NextPageTable )
      return v11;
    do
    {
      PteShadow = *(_QWORD *)NextPageTable;
      if ( NextPageTable >= 0xFFFFF6FB7DBED000uLL && NextPageTable <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(NextPageTable, *(_QWORD *)NextPageTable);
      v26 = PteShadow;
      if ( PteShadow )
      {
        v14 = PteShadow;
        if ( (unsigned __int64)&v26 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v26 <= 0xFFFFF6FB7DBED7F8uLL )
          v14 = MiReadPteShadow(&v26, PteShadow);
        v6 = (v14 & 0x3E0) != 0x200
          || (v14 & 1) != 0
          || (v14 & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(v14)
           ? v6 & 0xFFFFFFFE
           : v6 | 1;
        if ( (v6 & 2) != 0 )
        {
          v15 = v11 - 1;
          v16 = v6 & 1;
          if ( (v6 & 1) == 0 )
            v15 = v11;
          v11 = v15;
        }
        else
        {
          v16 = v6 & 1;
          if ( (v6 & 1) == 0 )
            ++v11;
        }
        if ( v12 && *(_QWORD *)(v8 + 240) && !v16 )
        {
          if ( (PteShadow & 1) != 0 )
          {
            v17 = MI_GET_PAGE_FRAME_FROM_PTE(&v26);
            if ( (*(_QWORD *)(48 * v17 - 0x58000000000LL + 40) & 0x200000000000000LL) == 0 )
              goto LABEL_41;
            v18 = *(_QWORD *)(48 * v17 - 0x58000000000LL + 8);
            if ( v18 >= 0 )
              goto LABEL_41;
            PrototypePteDirect = v18 | 0x8000000000000000uLL;
          }
          else
          {
            if ( (PteShadow & 0x400) == 0
              || (unsigned int)MiIsPrototypePteVadLookup(PteShadow)
              || (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v20) )
            {
              goto LABEL_41;
            }
            PrototypePteDirect = MiGetPrototypePteDirect(v21);
          }
          CloneAddress = MiLocateCloneAddress((__int64)Process, PrototypePteDirect);
          if ( CloneAddress && v23 > CloneAddress[9] )
            ++*v12;
        }
      }
LABEL_41:
      NextPageTable += 8LL;
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

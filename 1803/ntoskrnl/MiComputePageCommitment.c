/*
 * XREFs of MiComputePageCommitment @ 0x14003D030
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiCountCommittedPages @ 0x140263AB4 (MiCountCommittedPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetNextPageTable @ 0x14003DA90 (MiGetNextPageTable.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BC2D0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiComputePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        _QWORD *a6)
{
  _KPROCESS *Process; // r15
  __int64 v7; // r13
  unsigned __int64 v8; // rdi
  int v9; // ebx
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  _QWORD *v12; // r14
  int v13; // ebx
  int v14; // r12d
  unsigned __int64 NextPageTable; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r10
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 PrototypePteDirect; // rdx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 CloneAddress; // rax
  char v30; // [rsp+70h] [rbp+8h] BYREF
  __int64 v31; // [rsp+78h] [rbp+10h] BYREF
  char v32; // [rsp+88h] [rbp+20h]

  v32 = a4;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = *(_QWORD *)&Process[1].IdealGlobalNode;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = *(_DWORD *)(a3 + 52);
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v9 >= 0 )
    v11 = 0LL;
  else
    v11 = ((__int64)(v10 - v8) >> 3) + 1;
  v12 = a6;
  v13 = (v9 >> 31) & 2;
  if ( a6 )
    *a6 = 0LL;
  if ( v8 <= v10 )
  {
    v14 = a5;
    do
    {
      NextPageTable = MiGetNextPageTable(v8, v10, 0, a4, v14, (__int64)&v30);
      v8 = NextPageTable;
      if ( !NextPageTable )
        return v11;
      a6 = (_QWORD *)(((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v19 = 0xFFFFF6FB7DBED7F8uLL;
      do
      {
        v20 = *(_QWORD *)v8;
        if ( v8 >= 0xFFFFF6FB7DBED000uLL
          && v8 <= v19
          && (unsigned int)MiPteHasShadow(v17, v16, v20, v18)
          && (v20 & 1) != 0
          && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
        {
          v17 = (__int64)KeGetCurrentThread()->ApcState.Process;
          v16 = *(_QWORD *)(v17 + 1544);
          if ( v16 )
          {
            v21 = *(_QWORD *)(v16 + 8 * ((v8 >> 3) & 0x1FF));
            v16 = v20 | 0x20;
            v17 = (unsigned __int8)v21;
            LOBYTE(v17) = v21 & 0x20;
            if ( (v21 & 0x20) == 0 )
              v16 = v20;
            v20 = v16;
            if ( (v21 & 0x42) != 0 )
              v20 = v16 | 0x42;
          }
        }
        v31 = v20;
        if ( !v20 )
          goto LABEL_60;
        v17 = (__int64)&v31;
        if ( (unsigned __int64)&v31 < 0xFFFFF6FB7DBED000uLL || (v17 = (__int64)&v31, (unsigned __int64)&v31 > v19) )
        {
LABEL_33:
          v16 = v20;
          goto LABEL_34;
        }
        if ( (unsigned int)MiPteHasShadow(&v31, v20, v20, v18)
          && (v20 & 1) != 0
          && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
        {
          v17 = (__int64)KeGetCurrentThread()->ApcState.Process;
          v22 = *(_QWORD *)(v17 + 1544);
          if ( !v22 )
            goto LABEL_33;
          v23 = *(_QWORD *)(v22 + 8 * (((unsigned __int64)&v31 >> 3) & 0x1FF));
          v16 = v20 | 0x20;
          v17 = (unsigned __int8)v23;
          LOBYTE(v17) = v23 & 0x20;
          if ( (v23 & 0x20) == 0 )
            v16 = v20;
          if ( (v23 & 0x42) != 0 )
            v16 |= 0x42uLL;
        }
LABEL_34:
        if ( (v16 & 0x3E0) != 0x200
          || (v16 & 1) != 0
          || (v16 & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(v16) )
        {
          v13 &= ~1u;
        }
        else
        {
          v13 |= 1u;
        }
        if ( (v13 & 2) != 0 )
        {
          v17 = v11 - 1;
          if ( (v13 & 1) == 0 )
            v17 = v11;
          v11 = v17;
        }
        else if ( (v13 & 1) == 0 )
        {
          ++v11;
        }
        if ( v12 )
        {
          v18 = *(_QWORD *)(v7 + 328);
          if ( v18 )
          {
            if ( (v13 & 1) == 0 )
            {
              if ( (v20 & 1) != 0 )
              {
                v24 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31);
                v16 = 6 * ((v24 >> 12) & 0xFFFFFFFFFLL);
                v17 = 0x200000000000000LL;
                if ( (*(_QWORD *)(48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x200000000000000LL) == 0 )
                  goto LABEL_60;
                v16 = *(_QWORD *)(48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8);
                if ( v16 >= 0 )
                  goto LABEL_60;
                PrototypePteDirect = v16 | 0x8000000000000000uLL;
              }
              else
              {
                if ( (v20 & 0x400) == 0
                  || (unsigned int)MiIsPrototypePteVadLookup(v20)
                  || (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v26, v16, v26, v18) )
                {
                  goto LABEL_60;
                }
                PrototypePteDirect = MiGetPrototypePteDirect(v27);
              }
              CloneAddress = MiLocateCloneAddress(Process, PrototypePteDirect);
              if ( CloneAddress && v18 > *(_QWORD *)(CloneAddress + 96) )
                ++*v12;
            }
          }
        }
LABEL_60:
        v8 += 8LL;
      }
      while ( (v8 & 0xFFF) != 0 && v8 <= v10 );
      v14 = a5;
      if ( (a5 & 4) == 0 )
        MiUnlockPageTableInternal(&Process[1].IdealNode[12], a6);
      a4 = v32;
    }
    while ( v8 <= v10 );
  }
  return v11;
}

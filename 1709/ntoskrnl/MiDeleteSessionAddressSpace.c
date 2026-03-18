/*
 * XREFs of MiDeleteSessionAddressSpace @ 0x140221670
 * Callers:
 *     MiDereferenceSessionFinal @ 0x1406E2C84 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiDeleteWorkingSetList @ 0x1400B8724 (MiDeleteWorkingSetList.c)
 *     MiIncrementPfn @ 0x140137978 (MiIncrementPfn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiDeleteSystemPte @ 0x140221900 (MiDeleteSystemPte.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiDeleteSessionAddressSpace(unsigned __int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r12
  __int64 *v7; // rbx
  __int64 v8; // r14
  __int64 PteShadow; // rax
  __int64 v10; // rax
  __int64 v11; // r15
  LONG *SharedVm; // r14
  __int64 v13; // rcx
  LONG *v14; // rbx
  KIRQL v15; // al
  unsigned __int8 v16; // r13
  _QWORD *v17; // rcx
  unsigned __int64 *v18; // rsi
  unsigned __int64 NextPageTable; // rbx
  unsigned __int64 v20; // r14
  LONG *v21; // rax
  _KPROCESS *v22; // rdx
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v26; // [rsp+40h] [rbp-C0h]
  _QWORD v27[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v29; // [rsp+64h] [rbp-9Ch]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  void *retaddr; // [rsp+168h] [rbp+68h]

  v6 = 2LL;
  v7 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = 2LL;
  do
  {
    PteShadow = *v7;
    if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    v25 = PteShadow;
    v10 = MI_GET_PFN_FROM_PTE(&v25, a2, a3, a4);
    MiIncrementPfn(v10);
    ++v7;
    --v8;
  }
  while ( v8 );
  v11 = a1 + 3008;
  v30 = 20LL;
  v28 = 2;
  v29 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v26 = (((unsigned __int64)qword_1403884B0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27[0] = (((unsigned __int64)(qword_1403884B0 + 0x7FFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27[1] = ((v26 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v27[2] = ((v27[0] >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL;
  SharedVm = MiGetSharedVm(a1 + 3008);
  v14 = MiGetSharedVm(v13);
  v15 = ExAcquireSpinLockExclusive(v14);
  v14[1] = 0;
  v16 = v15;
  v17 = (_QWORD *)*((_QWORD *)SharedVm + 5);
  if ( v17 )
  {
    MiEmptyPageAccessLog(v17);
    *((_QWORD *)SharedVm + 5) = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    MiDeleteWorkingSetList(a1 + 3008);
  v18 = v27;
  do
  {
    NextPageTable = *(v18 - 1);
    v20 = *v18;
    while ( NextPageTable <= v20 )
    {
      NextPageTable = MiGetNextPageTable(NextPageTable, v20, 0LL, v16, 5u, &v24);
      if ( !NextPageTable )
        break;
      do
      {
        v23 = 0;
        MiDeleteSystemPte(v11, NextPageTable, (unsigned int)&v28, (_DWORD)a2, (__int64)&v23);
        NextPageTable += 8LL;
        if ( v23 == 1 )
          break;
        if ( NextPageTable > v20 )
          goto LABEL_17;
      }
      while ( (NextPageTable & 0xFFF) != 0 );
    }
LABEL_17:
    v18 += 2;
    --v6;
  }
  while ( v6 );
  a2[1] -= 2LL;
  a2[3] -= 2LL;
  *a2 -= 2LL;
  MiPreUnlockWorkingSetExclusive(v11, v16);
  v21 = MiGetSharedVm(v11);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v21, retaddr);
  else
    *v21 = 0;
  __writecr8(v16);
  MiFlushTbList((__int64)&v28, v22);
}

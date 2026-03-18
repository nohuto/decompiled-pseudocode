/*
 * XREFs of MiDeleteSessionAddressSpace @ 0x14013E414
 * Callers:
 *     MiDereferenceSessionFinal @ 0x14057A664 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteWorkingSetList @ 0x140062C50 (MiDeleteWorkingSetList.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiDeleteSystemPte @ 0x14013E694 (MiDeleteSystemPte.c)
 *     MiIncrementPfn @ 0x14014B564 (MiIncrementPfn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiDeleteSessionAddressSpace(unsigned __int64 a1, _QWORD *a2)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  LONG *SharedVm; // r14
  __int64 v10; // rcx
  LONG *v11; // rbx
  KIRQL v12; // al
  __int64 v13; // r9
  unsigned __int8 v14; // r13
  _QWORD *v15; // rcx
  unsigned __int64 *v16; // rsi
  unsigned __int64 NextPageTable; // rbx
  unsigned __int64 v18; // r14
  LONG *v19; // rax
  _KPROCESS *v20; // rdx
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-C0h]
  _QWORD v25[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v27; // [rsp+64h] [rbp-9Ch]
  __int64 v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  void *retaddr; // [rsp+168h] [rbp+68h]

  v4 = 2LL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 2LL;
  do
  {
    v23 = MI_READ_PTE_LOCK_FREE(v5);
    v7 = MI_GET_PAGE_FRAME_FROM_PTE(&v23);
    MiIncrementPfn(48 * v7 - 0x58000000000LL);
    v5 += 8LL;
    --v6;
  }
  while ( v6 );
  v8 = a1 + 3008;
  v28 = 20LL;
  v26 = 2;
  v27 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v24 = (((unsigned __int64)qword_14036C170 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25[0] = (((unsigned __int64)(qword_14036C170 + 0x7FFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25[1] = ((v24 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v25[2] = ((v25[0] >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL;
  SharedVm = MiGetSharedVm(a1 + 3008);
  v11 = MiGetSharedVm(v10);
  v12 = ExAcquireSpinLockExclusive(v11);
  v11[1] = 0;
  v14 = v12;
  v15 = (_QWORD *)*((_QWORD *)SharedVm + 5);
  if ( v15 )
  {
    MiEmptyPageAccessLog(v15);
    *((_QWORD *)SharedVm + 5) = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    MiDeleteWorkingSetList(a1 + 3008);
  v16 = v25;
  do
  {
    NextPageTable = *(v16 - 1);
    v18 = *v16;
    while ( NextPageTable <= v18 )
    {
      LOBYTE(v13) = v14;
      NextPageTable = MiGetNextPageTable(NextPageTable, v18, 0LL, v13, 5, &v22);
      if ( !NextPageTable )
        break;
      do
      {
        v21 = 0;
        MiDeleteSystemPte(v8, NextPageTable, (unsigned int)&v26, (_DWORD)a2, (__int64)&v21);
        NextPageTable += 8LL;
        if ( v21 == 1 )
          break;
        if ( NextPageTable > v18 )
          goto LABEL_14;
      }
      while ( (NextPageTable & 0xFFF) != 0 );
    }
LABEL_14:
    v16 += 2;
    --v4;
  }
  while ( v4 );
  a2[1] -= 2LL;
  a2[3] -= 2LL;
  *a2 -= 2LL;
  MiPreUnlockWorkingSetExclusive(v8, v14);
  v19 = MiGetSharedVm(v8);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v19, retaddr);
  else
    *v19 = 0;
  __writecr8(v14);
  MiFlushTbList((__int64)&v26, v20);
}

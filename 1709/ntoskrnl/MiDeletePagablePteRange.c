/*
 * XREFs of MiDeletePagablePteRange @ 0x1400B8270
 * Callers:
 *     MiDeletePagablePteRange @ 0x1400B8270 (MiDeletePagablePteRange.c)
 *     MiDeleteVadBitmap @ 0x1404FB8C4 (MiDeleteVadBitmap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiTerminateWsle @ 0x140058F20 (MiTerminateWsle.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiDeletePagablePteRange @ 0x1400B8270 (MiDeletePagablePteRange.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1401277C8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiDeletePagablePteRange(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  ULONG_PTR NextPageTable; // rax
  _KPROCESS *v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  unsigned int v11; // r9d
  __int64 PteShadow; // rbx
  unsigned __int64 v13; // rbx
  ULONG_PTR v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  LONG *v19; // rbx
  KIRQL v21; // [rsp+30h] [rbp-148h]
  unsigned int v22; // [rsp+34h] [rbp-144h]
  __int64 *v23; // [rsp+38h] [rbp-140h]
  unsigned __int64 v25; // [rsp+48h] [rbp-130h]
  int v26; // [rsp+50h] [rbp-128h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-120h]
  __int64 v28; // [rsp+60h] [rbp-118h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-110h]
  __int64 v30; // [rsp+70h] [rbp-108h] BYREF
  __int64 v31; // [rsp+78h] [rbp-100h]
  __int64 v32; // [rsp+80h] [rbp-F8h]
  __int64 v33; // [rsp+88h] [rbp-F0h]
  int v34; // [rsp+90h] [rbp-E8h] BYREF
  __int16 v35; // [rsp+94h] [rbp-E4h]
  __int64 v36; // [rsp+98h] [rbp-E0h]
  __int64 v37; // [rsp+A0h] [rbp-D8h]
  __int64 v38; // [rsp+A8h] [rbp-D0h]

  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v3 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = v4;
  v28 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 1452));
  SharedVm = MiGetSharedVm(a1 + 1280);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  v21 = v6;
  SharedVm[1] = 0;
  if ( v3 <= v4 )
  {
    do
    {
      NextPageTable = MiGetNextPageTable(v3, v4, 0LL, v6, 4u, &v26);
      BugCheckParameter2 = NextPageTable;
      v8 = (_KPROCESS *)NextPageTable;
      if ( !NextPageTable )
        break;
      v9 = NextPageTable;
      v23 = (__int64 *)NextPageTable;
      v10 = (__int64)(NextPageTable << 25) >> 16;
      v11 = 0;
      v36 = 20LL;
      v34 = 1;
      v35 = 0;
      v37 = 0LL;
      v38 = 0LL;
      v22 = 0;
      do
      {
        PteShadow = *(_QWORD *)v9;
        if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v9, *(_QWORD *)v9);
        v27 = PteShadow;
        if ( PteShadow )
        {
          if ( (PteShadow & 1) != 0 )
          {
            if ( (unsigned int)MiTerminateWsle(a1 + 1280, v10, 0) )
              MiInsertTbFlushEntry(&v34, v10 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
            v13 = PteShadow & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
            v27 = v13;
            *(_QWORD *)v9 = v13;
            if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow(v9, v13);
            v11 = v22;
            v23 = (__int64 *)v9;
          }
          else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(PteShadow) )
          {
            v23 = (__int64 *)v9;
          }
          else
          {
            MiReleasePageFileSpace(v28, PteShadow, 1LL);
            *(_QWORD *)v9 = 0LL;
            if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow(v9, 0LL);
            v11 = v22;
          }
        }
        v10 += 4096LL;
        v9 += 8LL;
        if ( v9 > v25 )
          break;
        if ( (v9 & 0xFFF) == 0 )
          break;
        v22 = ++v11;
      }
      while ( v11 < 0x200 );
      MiFlushTbList((__int64)&v34, v8);
      v14 = BugCheckParameter2;
      MiDeletePteRun((__int64 *)BugCheckParameter2, v23, a1, 0LL, (__int64)&v30);
      if ( (v14 < 0xFFFFF6FB7DBED000uLL || v14 > 0xFFFFF6FB7DBEDFFFuLL)
        && (*(_QWORD *)(MI_GET_PFN_FROM_PTE(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v15, v16, v17) + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        MiUnlockWorkingSetExclusive(a1 + 1280, v21);
        v18 = MiDeletePagablePteRange(a1, v14, v14);
        v31 += v18;
        v19 = MiGetSharedVm(a1 + 1280);
        ExAcquireSpinLockExclusive(v19);
        v19[1] = 0;
      }
      v4 = v25;
      v3 = v14 + 4096;
      v6 = v21;
    }
    while ( v3 <= v25 );
    v6 = v21;
  }
  MiUnlockWorkingSetExclusive(a1 + 1280, v6);
  return v31;
}

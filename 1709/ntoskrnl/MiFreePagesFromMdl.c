/*
 * XREFs of MiFreePagesFromMdl @ 0x1400E10B0
 * Callers:
 *     MiInitializeMdlPages @ 0x1400CA600 (MiInitializeMdlPages.c)
 *     MmFreePagesFromMdl @ 0x140130F50 (MmFreePagesFromMdl.c)
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14013E320 (BgpFwAllocateMemory.c)
 *     MmFreePagesFromMdlEx @ 0x140217970 (MmFreePagesFromMdlEx.c)
 *     PspIumAllocatePhysicalPages @ 0x14024F774 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePartitionState @ 0x14024F968 (PspIumFreePartitionState.c)
 *     PspIumFreePhysicalPages @ 0x14024FA30 (PspIumFreePhysicalPages.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14026D694 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402710C4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     MiProcessCrcList @ 0x14053FBA0 (MiProcessCrcList.c)
 *     NtAllocateUserPhysicalPages @ 0x1406E5CD8 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1406E649C (NtFreeUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1406EDB48 (MiAllocatePartitionPhysicalPages.c)
 *     KiComputeNumaCosts @ 0x140838CD8 (KiComputeNumaCosts.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiFreeMdlPageRun @ 0x1400E1354 (MiFreeMdlPageRun.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140184D60 (KeZeroPages.c)
 *     MiRetardMdl @ 0x140215E5C (MiRetardMdl.c)
 *     MiLogMdlRangeEvent @ 0x140217578 (MiLogMdlRangeEvent.c)
 */

ULONG_PTR *__fastcall MiFreePagesFromMdl(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int16 v2; // ax
  ULONG_PTR v4; // rbp
  __int16 v5; // ax
  ULONG_PTR *BugCheckParameter4; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r13
  __int64 v10; // rsi
  ULONG_PTR *result; // rax
  int v12; // r12d
  __int64 v13; // r8
  __int64 v14; // r13
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  ULONG_PTR v17; // r9
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // r13d
  ULONG_PTR v21; // rcx
  ULONG_PTR v22; // rcx
  PVOID v23; // rcx
  PVOID v24; // rax
  _QWORD *v25; // r14
  unsigned __int64 i; // rsi
  __int64 v27; // rbx
  __int64 v28; // rdx
  unsigned __int8 v29; // al
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r8
  char v32; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v33; // [rsp+88h] [rbp+10h]
  unsigned __int64 v34; // [rsp+90h] [rbp+18h]
  __int64 v35; // [rsp+98h] [rbp+20h]

  v33 = a2;
  v2 = *(_WORD *)(BugCheckParameter2 + 10);
  v4 = 0LL;
  if ( (v2 & 0x200) != 0 )
  {
    v33 = a2 & 0xFFFFFFFE;
    MiRetardMdl(BugCheckParameter2);
    goto LABEL_3;
  }
  if ( (a2 & 1) == 0 )
    goto LABEL_3;
  if ( (v2 & 1) != 0 )
  {
    v23 = *(PVOID *)(BugCheckParameter2 + 24);
LABEL_52:
    KeZeroPages(v23, *(unsigned int *)(BugCheckParameter2 + 40));
    goto LABEL_3;
  }
  v24 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter2, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( v24 )
  {
    v23 = v24;
    goto LABEL_52;
  }
  v25 = (_QWORD *)(BugCheckParameter2 + 48);
  for ( i = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFFLL)
           + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
           + 4095) >> 12; i; --i )
  {
    v27 = MiMapPageInHyperSpaceWorker(*v25, &v32, 0x80000000LL);
    KeZeroPages(v27, 4096LL);
    LOBYTE(v28) = v32;
    MiUnmapPageInHyperSpaceWorker(v27, v28, 0x80000000LL);
    ++v25;
  }
LABEL_3:
  if ( (*(_BYTE *)(BugCheckParameter2 + 10) & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter2 + 24), (PMDL)BugCheckParameter2);
  v5 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v5 & 0x801) != 0 )
    KeBugCheckEx(0x1Au, 0x1238uLL, BugCheckParameter2, v5, 0LL);
  BugCheckParameter4 = (ULONG_PTR *)(BugCheckParameter2 + 48);
  v7 = 0LL;
  v8 = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFFLL)
      + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
      + 4095) >> 12;
  v34 = v8;
  v9 = v8;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogMdlRangeEvent(BugCheckParameter2 + 48, 633LL, v8);
  v10 = 0LL;
  result = &MiSystemPartition;
  v12 = 1;
  if ( v8 )
  {
    while ( 1 )
    {
      v13 = 48 * *BugCheckParameter4;
      v35 = v13;
      v14 = v13 - 0x58000000000LL;
      v15 = *(_QWORD *)(v13 - 0x58000000000LL + 40);
      if ( (v15 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
        KeBugCheckEx(0x1Au, 0x1236uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter4, *BugCheckParameter4);
      v16 = (v15 >> 40) & 0x3FF;
      v17 = *(_QWORD *)(qword_140388AF0 + 8 * v16);
      if ( v4 != v17 )
      {
        if ( v4 )
          KeBugCheckEx(0x1Au, 0x1301uLL, v4, v17, (ULONG_PTR)BugCheckParameter4);
        v4 = *(_QWORD *)(qword_140388AF0 + 8 * v16);
      }
      if ( ((v15 >> 54) & 7) == 3 )
      {
        v29 = MiLockPageInline(v13 - 0x58000000000LL);
        *(_QWORD *)(v14 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v29);
        _InterlockedDecrement64(&qword_1403885F0);
        v13 = v35;
      }
      if ( !v10 )
        break;
      v18 = (_QWORD *)qword_1403885E8;
      if ( qword_1403885E8 && ((*(_QWORD *)(v14 + 40) >> 54) & 7) == 1 )
      {
        v30 = v13 / 48;
        while ( v18 )
        {
          v31 = v18[3];
          if ( v30 < v31 )
          {
            v18 = (_QWORD *)*v18;
          }
          else
          {
            if ( v30 - v31 < v18[4] )
              goto LABEL_20;
            v18 = (_QWORD *)v18[1];
          }
        }
      }
      v19 = *(BugCheckParameter4 - 1);
      if ( *BugCheckParameter4 == v19 + 1 )
      {
        if ( v12 != 1 && v10 != 1 )
          goto LABEL_38;
        v12 = 1;
      }
      else
      {
        if ( *BugCheckParameter4 != v19 - 1 || v10 != 1 && v12 )
        {
LABEL_20:
          if ( v12 == 1 )
            v21 = BugCheckParameter4[-v10];
          else
LABEL_38:
            v21 = *(BugCheckParameter4 - 1);
          v20 = v33;
          v7 += MiFreeMdlPageRun(v21, v10, v33);
LABEL_23:
          v10 = 1LL;
          goto LABEL_24;
        }
        v12 = 0;
      }
      v20 = v33;
      ++v10;
LABEL_24:
      ++BugCheckParameter4;
      if ( !--v8 )
      {
        if ( v10 )
        {
          if ( v12 == 1 )
            v22 = BugCheckParameter4[-v10];
          else
            v22 = *(BugCheckParameter4 - 1);
          v7 += MiFreeMdlPageRun(v22, v10, v20);
        }
        result = &MiSystemPartition;
        if ( v7 )
        {
          if ( (ULONG_PTR *)v4 == &MiSystemPartition )
            MiReturnResidentAvailable(v7);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 6016), v7);
          MiReturnCommit(v4, v7);
          result = &MiSystemPartition;
        }
        v9 = v34;
        goto LABEL_34;
      }
    }
    v20 = v33;
    goto LABEL_23;
  }
LABEL_34:
  if ( (ULONG_PTR *)v4 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_1403893E0, -(__int64)v9);
  *(_WORD *)(BugCheckParameter2 + 10) &= ~2u;
  return result;
}

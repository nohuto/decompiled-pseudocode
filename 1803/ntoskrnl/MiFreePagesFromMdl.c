/*
 * XREFs of MiFreePagesFromMdl @ 0x140136794
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14009A440 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     MiAllocatePagesForMdl @ 0x1400B3544 (MiAllocatePagesForMdl.c)
 *     MmFreePagesFromMdl @ 0x1400CEF30 (MmFreePagesFromMdl.c)
 *     BgpFwAllocateMemory @ 0x1401655A0 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 *     MmFreePagesFromMdlEx @ 0x1402552E0 (MmFreePagesFromMdlEx.c)
 *     NtFreeUserPhysicalPages @ 0x14026303C (NtFreeUserPhysicalPages.c)
 *     PspIumAllocatePhysicalPages @ 0x140285238 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePartitionState @ 0x14028542C (PspIumFreePartitionState.c)
 *     PspIumFreePhysicalPages @ 0x1402854F4 (PspIumFreePhysicalPages.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1402A52E8 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     MiFreeCombineMdls @ 0x14048CA2C (MiFreeCombineMdls.c)
 *     NtAllocateUserPhysicalPages @ 0x14074FE5C (NtAllocateUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140756FD8 (MiAllocatePartitionPhysicalPages.c)
 *     KiComputeNumaCosts @ 0x1408B32B4 (KiComputeNumaCosts.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiFreeMdlPageRun @ 0x140136A30 (MiFreeMdlPageRun.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1401AE9B0 (KeZeroPages.c)
 *     MiRetardMdl @ 0x140253D5C (MiRetardMdl.c)
 *     MiLogMdlRangeEvent @ 0x140254F3C (MiLogMdlRangeEvent.c)
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
  ULONG_PTR v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r13
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  ULONG_PTR v18; // r9
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // r13d
  ULONG_PTR v22; // rcx
  ULONG_PTR v23; // rcx
  __int64 v24; // rdx
  PVOID v25; // rcx
  PVOID v26; // rax
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 *v29; // r14
  unsigned __int64 i; // rsi
  unsigned __int64 v31; // rbx
  unsigned __int8 v32; // al
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r8
  unsigned __int8 v35; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v36; // [rsp+88h] [rbp+10h]
  unsigned __int64 v37; // [rsp+90h] [rbp+18h]
  __int64 v38; // [rsp+98h] [rbp+20h]

  v36 = a2;
  v2 = *(_WORD *)(BugCheckParameter2 + 10);
  v4 = 0LL;
  if ( (v2 & 0x200) != 0 )
  {
    v36 = a2 & 0xFFFFFFFE;
    MiRetardMdl(BugCheckParameter2);
    goto LABEL_3;
  }
  if ( (a2 & 1) == 0 )
    goto LABEL_3;
  if ( (v2 & 1) != 0 )
  {
    v24 = *(unsigned int *)(BugCheckParameter2 + 40);
    v25 = *(PVOID *)(BugCheckParameter2 + 24);
LABEL_52:
    KeZeroPages(v25, v24);
    goto LABEL_3;
  }
  v26 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter2, 0, MmCached, 0LL, 0, 0x40000020u);
  v28 = *(unsigned int *)(BugCheckParameter2 + 40);
  if ( v26 )
  {
    v24 = (unsigned int)v28;
    v25 = v26;
    goto LABEL_52;
  }
  v29 = (__int64 *)(BugCheckParameter2 + 48);
  for ( i = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFFuLL) + v28 + 4095) >> 12;
        i;
        --i )
  {
    v31 = MiMapPageInHyperSpaceWorker(*v29, &v35, 0x80000000, v27);
    KeZeroPages(v31, 4096LL);
    MiUnmapPageInHyperSpaceWorker(v31, v35, 0x80000000);
    ++v29;
  }
LABEL_3:
  v5 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v5 & 1) != 0 )
  {
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter2 + 24), (PMDL)BugCheckParameter2);
    v5 = *(_WORD *)(BugCheckParameter2 + 10);
  }
  if ( (v5 & 0x801) != 0 )
    KeBugCheckEx(0x1Au, 0x1238uLL, BugCheckParameter2, v5, 0LL);
  BugCheckParameter4 = (ULONG_PTR *)(BugCheckParameter2 + 48);
  v7 = 0LL;
  v8 = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFFLL)
      + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
      + 4095) >> 12;
  v37 = v8;
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
      v13 = *BugCheckParameter4;
      v14 = 48 * *BugCheckParameter4;
      v38 = v14;
      v15 = v14 - 0x58000000000LL;
      v16 = *(_QWORD *)(v14 - 0x58000000000LL + 40);
      if ( (v16 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
        KeBugCheckEx(0x1Au, 0x1236uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter4, v13);
      v17 = (v16 >> 40) & 0x3FF;
      v18 = *(_QWORD *)(qword_1403CBD88 + 8 * v17);
      if ( v4 != v18 )
      {
        if ( v4 )
          KeBugCheckEx(0x1Au, 0x1301uLL, v4, v18, (ULONG_PTR)BugCheckParameter4);
        v4 = *(_QWORD *)(qword_1403CBD88 + 8 * v17);
      }
      if ( ((v16 >> 54) & 7) == 3 )
      {
        v32 = MiLockPageInline(v14 - 0x58000000000LL);
        *(_QWORD *)(v15 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v32);
        _InterlockedDecrement64(qword_1403CB7B0);
        v14 = v38;
      }
      if ( !v10 )
        break;
      v19 = (_QWORD *)qword_1403CB788;
      if ( qword_1403CB788 && ((*(_QWORD *)(v15 + 40) >> 54) & 7) == 1 )
      {
        v33 = v14 / 48;
        while ( v19 )
        {
          v34 = v19[3];
          if ( v33 < v34 )
          {
            v19 = (_QWORD *)*v19;
          }
          else
          {
            if ( v33 - v34 < v19[4] )
              goto LABEL_33;
            v19 = (_QWORD *)v19[1];
          }
        }
      }
      v20 = *(BugCheckParameter4 - 1);
      if ( *BugCheckParameter4 == v20 + 1 )
      {
        if ( v12 != 1 && v10 != 1 )
          goto LABEL_38;
        v12 = 1;
      }
      else
      {
        if ( *BugCheckParameter4 != v20 - 1 || v10 != 1 && v12 )
        {
LABEL_33:
          if ( v12 == 1 )
            v23 = BugCheckParameter4[-v10];
          else
LABEL_38:
            v23 = *(BugCheckParameter4 - 1);
          v21 = v36;
          v7 += MiFreeMdlPageRun(v23, v10, v36);
LABEL_36:
          v10 = 1LL;
          goto LABEL_19;
        }
        v12 = 0;
      }
      v21 = v36;
      ++v10;
LABEL_19:
      ++BugCheckParameter4;
      if ( !--v8 )
      {
        if ( v10 )
        {
          if ( v12 == 1 )
            v22 = BugCheckParameter4[-v10];
          else
            v22 = *(BugCheckParameter4 - 1);
          v7 += MiFreeMdlPageRun(v22, v10, v21);
        }
        result = &MiSystemPartition;
        if ( v7 )
        {
          if ( (ULONG_PTR *)v4 == &MiSystemPartition )
            MiReturnResidentAvailable(v7);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 7104), v7);
          MiReturnCommit(v4, v7);
          result = &MiSystemPartition;
        }
        v9 = v37;
        goto LABEL_29;
      }
    }
    v21 = v36;
    goto LABEL_36;
  }
LABEL_29:
  if ( (ULONG_PTR *)v4 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_1403CC658, -(__int64)v9);
  *(_WORD *)(BugCheckParameter2 + 10) &= ~2u;
  return result;
}

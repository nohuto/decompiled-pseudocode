/*
 * XREFs of MiFreePagesFromMdl @ 0x1400B3890
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14001E63C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     MmFreePagesFromMdl @ 0x140033E40 (MmFreePagesFromMdl.c)
 *     MiInitializeMdlPages @ 0x14007A868 (MiInitializeMdlPages.c)
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140142DA8 (BgpFwAllocateMemory.c)
 *     MmFreePagesFromMdlEx @ 0x140210340 (MmFreePagesFromMdlEx.c)
 *     PspIumAllocatePhysicalPages @ 0x14023A554 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x14023A67C (PspIumFreePhysicalPages.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14024BC90 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     MiProcessCrcList @ 0x1404C89E0 (MiProcessCrcList.c)
 *     NtAllocateUserPhysicalPages @ 0x1406B8F84 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1406B9738 (NtFreeUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1406BC714 (MiAllocatePartitionPhysicalPages.c)
 *     KiComputeNumaCosts @ 0x140817D54 (KiComputeNumaCosts.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MiFreeMdlPageRun @ 0x1400B3B5C (MiFreeMdlPageRun.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1401852C0 (KeZeroPages.c)
 *     MiRetardMdl @ 0x14020E700 (MiRetardMdl.c)
 *     MiLogMdlRangeEvent @ 0x140210194 (MiLogMdlRangeEvent.c)
 */

ULONG_PTR *__fastcall MiFreePagesFromMdl(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int16 v2; // ax
  ULONG_PTR v4; // r15
  __int64 v5; // r8
  __int16 v6; // ax
  ULONG_PTR *v7; // rbx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  ULONG_PTR *result; // rax
  int v13; // r12d
  __int64 v14; // r14
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  ULONG_PTR v18; // r9
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  ULONG_PTR v21; // rcx
  __int64 v22; // rax
  ULONG_PTR v23; // rcx
  __int64 v24; // rax
  PVOID v25; // rax
  _QWORD *v26; // rsi
  unsigned __int64 i; // rdi
  __int64 v28; // rbx
  unsigned __int8 v29; // al
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r8
  unsigned __int8 v32; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v33; // [rsp+88h] [rbp+10h]
  unsigned __int64 v34; // [rsp+90h] [rbp+18h]
  unsigned __int64 v35; // [rsp+98h] [rbp+20h]

  v33 = a2;
  v2 = *(_WORD *)(BugCheckParameter2 + 10);
  v4 = 0LL;
  v5 = a2;
  if ( (v2 & 0x200) != 0 )
  {
    v33 = a2 & 0xFFFFFFFE;
    MiRetardMdl(BugCheckParameter2);
  }
  else
  {
    if ( (a2 & 1) == 0 )
      goto LABEL_3;
    if ( (v2 & 1) != 0 )
    {
      KeZeroPages(*(_QWORD *)(BugCheckParameter2 + 24), *(unsigned int *)(BugCheckParameter2 + 40));
    }
    else
    {
      v25 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter2, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( v25 )
      {
        KeZeroPages(v25, *(unsigned int *)(BugCheckParameter2 + 40));
      }
      else
      {
        v26 = (_QWORD *)(BugCheckParameter2 + 48);
        for ( i = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
                 + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
                 + 4095) >> 12; i; --i )
        {
          v28 = MiMapPageInHyperSpaceWorker(*v26, &v32, 0x80000000LL);
          KeZeroPages(v28, 4096LL);
          MiUnmapPageInHyperSpaceWorker(v28, v32, 0x80000000LL);
          ++v26;
        }
      }
    }
  }
  v5 = v33;
LABEL_3:
  if ( (*(_BYTE *)(BugCheckParameter2 + 10) & 1) != 0 )
  {
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter2 + 24), (PMDL)BugCheckParameter2);
    v5 = v33;
  }
  v6 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v6 & 0x801) != 0 )
    KeBugCheckEx(0x1Au, 0x1238uLL, BugCheckParameter2, v6, 0LL);
  v7 = (ULONG_PTR *)(BugCheckParameter2 + 48);
  v8 = 0LL;
  v9 = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
      + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
      + 4095) >> 12;
  v34 = 0LL;
  v10 = v9;
  v35 = v9;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    MiLogMdlRangeEvent(BugCheckParameter2 + 48, 633LL, v9);
    v5 = v33;
    v8 = 0LL;
    v10 = v9;
  }
  v11 = 0LL;
  result = &MiSystemPartition;
  v13 = 1;
  if ( v9 )
  {
    while ( 1 )
    {
      v14 = 48 * *v7;
      v15 = v14 - 0x58000000000LL;
      v16 = *(_QWORD *)(v14 - 0x58000000000LL + 40);
      if ( (v16 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
        KeBugCheckEx(0x1Au, 0x1236uLL, BugCheckParameter2, (ULONG_PTR)v7, *v7);
      v17 = (v16 >> 40) & 0x3FF;
      v18 = *(_QWORD *)(qword_14036C8F8 + 8 * v17);
      if ( v4 != v18 )
      {
        if ( v4 )
          KeBugCheckEx(0x1Au, 0x1301uLL, v4, v18, (ULONG_PTR)v7);
        v4 = *(_QWORD *)(qword_14036C8F8 + 8 * v17);
      }
      if ( ((v16 >> 54) & 7) == 3 )
      {
        v29 = MiLockPageInline(v14 - 0x58000000000LL);
        *(_QWORD *)(v15 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v29);
        _InterlockedDecrement64(&qword_14036C2A0);
        v8 = v34;
        v5 = v33;
      }
      if ( !v11 )
        goto LABEL_24;
      v19 = (_QWORD *)qword_14036C298;
      if ( qword_14036C298 )
      {
        if ( ((*(_QWORD *)(v15 + 40) >> 54) & 7) == 1 )
        {
          v30 = v14 / 48;
          if ( qword_14036C298 )
          {
            while ( 1 )
            {
              v31 = v19[3];
              if ( v30 < v31 )
              {
                v19 = (_QWORD *)*v19;
              }
              else
              {
                if ( v30 - v31 < v19[4] )
                {
                  v5 = v33;
                  goto LABEL_21;
                }
                v19 = (_QWORD *)v19[1];
              }
              if ( !v19 )
              {
                v5 = v33;
                break;
              }
            }
          }
        }
      }
      v20 = *(v7 - 1);
      v17 = *v7;
      if ( *v7 == v20 + 1 )
        break;
      if ( v17 != v20 - 1 || v11 != 1 && v13 )
      {
LABEL_21:
        if ( v13 == 1 )
        {
          v21 = v7[-v11];
LABEL_23:
          v22 = MiFreeMdlPageRun(v21, v11, v5);
          v8 = v22 + v34;
          v34 += v22;
LABEL_24:
          v11 = 1LL;
          goto LABEL_18;
        }
LABEL_26:
        v21 = *(v7 - 1);
        goto LABEL_23;
      }
      v13 = 0;
      ++v11;
LABEL_18:
      ++v7;
      if ( !--v9 )
      {
        if ( v11 )
        {
          if ( v13 == 1 )
            v23 = v7[-v11];
          else
            v23 = *(v7 - 1);
          v24 = MiFreeMdlPageRun(v23, v11, v33);
          v8 = v24 + v34;
        }
        result = &MiSystemPartition;
        if ( v8 )
        {
          if ( (ULONG_PTR *)v4 == &MiSystemPartition )
            MiReturnResidentAvailable(v8, v17, v5);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 5824), v8);
          MiReturnCommit(v4, v8);
          result = &MiSystemPartition;
        }
        v10 = v35;
        goto LABEL_36;
      }
      v5 = v33;
    }
    if ( v13 == 1 || v11 == 1 )
    {
      v13 = 1;
      ++v11;
      goto LABEL_18;
    }
    goto LABEL_26;
  }
LABEL_36:
  if ( (ULONG_PTR *)v4 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_14036D120, -(__int64)v10);
  *(_WORD *)(BugCheckParameter2 + 10) &= ~2u;
  return result;
}

/*
 * XREFs of ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004843C
 * Callers:
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0056C04 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0075920 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1C0092B0C (-EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C00954A8 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00A88B0 (-ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0048320 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C00483B8 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0048608 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004B170 (-TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

struct _VIDMM_MDL *__fastcall VidMmiProbeAndLockAllocation(
        struct _VIDMM_GLOBAL_ALLOC *a1,
        __int64 a2,
        SIZE_T Length,
        LOCK_OPERATION a4,
        struct VIDMM_SEGMENT *a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  struct _VIDMM_LOCAL_ALLOC *v9; // rdi
  char v10; // r15
  char v11; // si
  struct _VIDMM_MDL *v12; // rax
  __int64 v13; // rcx
  struct _VIDMM_MDL *v14; // rbx
  char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  PMDL Mdl; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v24; // rax
  void *v25; // rcx
  void *v26[2]; // [rsp+40h] [rbp-38h] BYREF

  v9 = a6;
  if ( !a6 )
    v9 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a1 + 13);
  v10 = 0;
  v11 = 0;
  v12 = (struct _VIDMM_MDL *)operator new[](0x18uLL, 0x35336956u, PagedPool);
  v14 = v12;
  v26[1] = v12;
  if ( !v12 )
  {
    _InterlockedIncrement(&dword_1C003C630);
    v24 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v24 + 24) = 1157LL;
LABEL_13:
    WdLogEvent5_WdLowResource(v24);
    goto LABEL_22;
  }
  *((_QWORD *)v12 + 1) = 0LL;
  v15 = VidMmMapViewOfAllocation(v9, a2, Length, v26, 0);
  if ( !v15 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q(v16, &EventPerformanceWarning, v17, 14);
    _InterlockedIncrement(&dword_1C003C660);
    v24 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v24 + 24) = 1172LL;
    goto LABEL_13;
  }
  v10 = 1;
  *(_DWORD *)v14 = 0;
  Mdl = VidMmiAllocateMdl((unsigned __int64)v15, Length);
  *((_QWORD *)v14 + 1) = Mdl;
  if ( !Mdl )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    v24 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v24 + 24) = 1186LL;
    goto LABEL_13;
  }
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v19, &EventProfilerEnter, v20, 8000);
  MmProbeAndLockPages(*((PMDL *)v14 + 1), 0, a4);
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v21, &EventProfilerExit, v22, 8000);
  v11 = 1;
  if ( !a5 || VIDMM_SEGMENT::TrackAndValidatePagesOnLock(a5, v14, v22, a1) )
  {
    VidMmUnmapViewOfAllocation(v9, v26[0]);
    return v14;
  }
LABEL_22:
  if ( v11 )
    MmUnlockPages(*((PMDL *)v14 + 1));
  if ( v14 )
  {
    v25 = (void *)*((_QWORD *)v14 + 1);
    if ( v25 )
      ExFreePoolWithTag(v25, 0);
    operator delete(v14);
  }
  if ( v10 )
    VidMmUnmapViewOfAllocation(v9, v26[0]);
  return 0LL;
}

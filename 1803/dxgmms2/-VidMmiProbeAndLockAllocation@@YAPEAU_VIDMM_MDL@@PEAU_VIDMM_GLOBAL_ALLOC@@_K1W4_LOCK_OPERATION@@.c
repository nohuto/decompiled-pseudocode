/*
 * XREFs of ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007884C
 * Callers:
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C005345C (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005E3F4 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007E990 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1C009FDC8 (-EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00B97E0 (-ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0016180 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00161A4 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0072D30 (-TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0078A44 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C0078AF4 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0078B70 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 */

struct _VIDMM_MDL *__fastcall VidMmiProbeAndLockAllocation(
        struct _VIDMM_GLOBAL_ALLOC *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        LOCK_OPERATION a4,
        struct VIDMM_SEGMENT *a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  struct _VIDMM_LOCAL_ALLOC *v9; // rdi
  char v10; // r14
  char v11; // si
  struct _VIDMM_MDL *v12; // rax
  __int64 v13; // rcx
  struct _VIDMM_MDL *v14; // rbx
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _MDL *Mdl; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  void *v25; // rcx
  void *v26[2]; // [rsp+40h] [rbp-48h] BYREF
  int v27; // [rsp+50h] [rbp-38h] BYREF
  __int64 v28; // [rsp+58h] [rbp-30h]

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
    _InterlockedIncrement(&dword_1C0047640);
    v24 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v24 + 24) = 1201LL;
LABEL_13:
    WdLogEvent5_WdLowResource(v24);
    goto LABEL_14;
  }
  *((_QWORD *)v12 + 1) = 0LL;
  v15 = VidMmMapViewOfAllocation(v9, a2, a3, v26, 0);
  if ( !v15 )
  {
    if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v16, (__int64)&EventPerformanceWarning, v17, 14);
    _InterlockedIncrement(&dword_1C0047670);
    v24 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v24 + 24) = 1216LL;
    goto LABEL_13;
  }
  v10 = 1;
  *(_DWORD *)v14 = 0;
  Mdl = VidMmiAllocateMdl(v15, a3);
  *((_QWORD *)v14 + 1) = Mdl;
  if ( !Mdl )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    v24 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v24 + 24) = 1230LL;
    goto LABEL_13;
  }
  v28 = 0LL;
  v27 = 8000;
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, (__int64)&EventProfilerEnter, v20, 8000);
  DXGETWPROFILER_BASE::PushProfilerEntry();
  MmProbeAndLockPages(*((PMDL *)v14 + 1), 0, a4);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, (__int64)&EventProfilerExit, v22, v27);
  v11 = 1;
  if ( !a5 || VIDMM_SEGMENT::TrackAndValidatePagesOnLock((unsigned __int64)a5, v14, v22, a1) )
  {
    VidMmUnmapViewOfAllocation(v9, v26[0]);
    return v14;
  }
LABEL_14:
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

/*
 * XREFs of ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004C420
 * Callers:
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00599E0 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007BA00 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1C009A684 (-EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C009D644 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00B0F00 (-ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C004C388 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C004C5EC (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004F5B0 (-TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C00713F8 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 */

struct _VIDMM_MDL *__fastcall VidMmiProbeAndLockAllocation(
        struct _VIDMM_GLOBAL_ALLOC *a1,
        __int64 a2,
        SIZE_T a3,
        LOCK_OPERATION a4,
        struct VIDMM_SEGMENT *a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  struct _VIDMM_LOCAL_ALLOC *v9; // rdi
  char v10; // r15
  char v11; // si
  struct _VIDMM_MDL *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _VIDMM_MDL *v15; // rbx
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _MDL *Mdl; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v27; // rax
  void *v28; // rcx
  void *v29[2]; // [rsp+40h] [rbp-38h] BYREF

  v9 = a6;
  if ( !a6 )
    v9 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a1 + 13);
  v10 = 0;
  v11 = 0;
  v12 = (struct _VIDMM_MDL *)operator new[](0x18uLL, 0x35336956u, PagedPool);
  v15 = v12;
  v29[1] = v12;
  if ( !v12 )
  {
    _InterlockedIncrement(&dword_1C0040640);
    v27 = WdLogNewEntry5_WdLowResource(v14, v13);
    *(_QWORD *)(v27 + 24) = 1198LL;
LABEL_13:
    WdLogEvent5_WdLowResource(v27);
    goto LABEL_22;
  }
  *((_QWORD *)v12 + 1) = 0LL;
  v16 = VidMmMapViewOfAllocation(v9, a2, a3, v29, 0);
  if ( !v16 )
  {
    if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v18, (__int64)&EventPerformanceWarning, v19, 14);
    _InterlockedIncrement(&dword_1C0040670);
    v27 = WdLogNewEntry5_WdLowResource(v18, v17);
    *(_QWORD *)(v27 + 24) = 1213LL;
    goto LABEL_13;
  }
  v10 = 1;
  *(_DWORD *)v15 = 0;
  Mdl = VidMmiAllocateMdl(v16, a3);
  *((_QWORD *)v15 + 1) = Mdl;
  if ( !Mdl )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    v27 = WdLogNewEntry5_WdLowResource(v22, v21);
    *(_QWORD *)(v27 + 24) = 1227LL;
    goto LABEL_13;
  }
  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, (__int64)&EventProfilerEnter, v23, 8000);
  MmProbeAndLockPages(*((PMDL *)v15 + 1), 0, a4);
  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, (__int64)&EventProfilerExit, v25, 8000);
  v11 = 1;
  if ( !a5 || VIDMM_SEGMENT::TrackAndValidatePagesOnLock(a5, v15, v25, a1) )
  {
    VidMmUnmapViewOfAllocation(v9, v29[0]);
    return v15;
  }
LABEL_22:
  if ( v11 )
    MmUnlockPages(*((PMDL *)v15 + 1));
  if ( v15 )
  {
    v28 = (void *)*((_QWORD *)v15 + 1);
    if ( v28 )
      ExFreePoolWithTag(v28, 0);
    operator delete(v15);
  }
  if ( v10 )
    VidMmUnmapViewOfAllocation(v9, v29[0]);
  return 0LL;
}

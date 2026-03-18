/*
 * XREFs of ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004D0D8
 * Callers:
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004D6E0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004DA90 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C004E2FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0058588 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_A.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0062D60 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007BA00 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A7090 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 * Callees:
 *     McTemplateK0x @ 0x1C0023E10 (McTemplateK0x.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C005990C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z @ 0x1C0073448 (-VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z.c)
 */

void __fastcall VIDMM_SEGMENT::UnlockAllocationBackingStore(
        struct VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3)
{
  struct _VIDMM_LOCAL_ALLOC *v3; // rdi
  struct _VIDMM_MDL *v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  v3 = a3;
  if ( ((*(_DWORD *)(*((_QWORD *)this + 3) + 300LL) & 4) == 0 || (**((_DWORD **)a2 + 63) & 0x4000) != 0)
    && (*((_DWORD *)a2 + 20) & 0x1000) == 0 )
  {
    if ( !a3 )
      v3 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
    v6 = (struct _VIDMM_MDL *)*((_QWORD *)a2 + 14);
    if ( v6 )
    {
      VidMmiUnlockAllocation(v6);
      *((_QWORD *)a2 + 14) = 0LL;
    }
    if ( (*((_DWORD *)a2 + 87))-- == 1 )
    {
      VIDMM_GLOBAL::UnlockAllocation(this, v3, 0LL, *((_QWORD *)a2 + 1), 0, 1);
      if ( bTracingEnabled )
      {
        if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          McTemplateK0x(v9, v8, v10, a2);
      }
    }
  }
}

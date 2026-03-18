/*
 * XREFs of ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C009B3DC
 * Callers:
 *     ?MapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@_N2PEAPEAX@Z @ 0x1C004F678 (-MapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@_.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0058C00 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C00483B8 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 */

__int64 __fastcall VidMmiEnsureVirtualAddressRangeValid(unsigned __int64 a1, SIZE_T a2)
{
  struct _MDL *Mdl; // rax
  __int64 v3; // rcx
  struct _MDL *v4; // rbx
  __int64 v5; // rax

  Mdl = VidMmiAllocateMdl(a1, a2);
  v4 = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    MmUnlockPages(v4);
    ExFreePoolWithTag(v4, 0);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    v5 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v5 + 24) = 1109LL;
    WdLogEvent5_WdLowResource(v5);
    return 3221225495LL;
  }
}

/*
 * XREFs of VidMmQueryAllocationSizeInSystemMemory @ 0x1C00142F0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryAllocationSizeInSystemMemory@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C009C914 (-QueryAllocationSizeInSystemMemory@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

unsigned __int64 __fastcall VidMmQueryAllocationSizeInSystemMemory(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::QueryAllocationSizeInSystemMemory(a1, a2);
}

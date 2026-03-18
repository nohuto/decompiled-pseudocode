/*
 * XREFs of VidMmQueryAllocationSizeInSegment @ 0x1C0013A80
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryAllocationSizeInSegment@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00A2BE0 (-QueryAllocationSizeInSegment@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

unsigned __int64 __fastcall VidMmQueryAllocationSizeInSegment(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::QueryAllocationSizeInSegment(a1, a2);
}

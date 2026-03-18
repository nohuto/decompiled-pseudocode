/*
 * XREFs of VidMmGetAllocationPriority @ 0x1C00139A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C00A0878 (-GetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z.c)
 */

void __fastcall VidMmGetAllocationPriority(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2, unsigned int *a3)
{
  VIDMM_GLOBAL::GetAllocationPriority(a1, a2, a3);
}

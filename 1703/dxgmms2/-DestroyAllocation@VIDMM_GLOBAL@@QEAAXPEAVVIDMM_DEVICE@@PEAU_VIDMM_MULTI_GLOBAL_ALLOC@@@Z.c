/*
 * XREFs of ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00610A0
 * Callers:
 *     VidMmDestroyAllocation @ 0x1C00120F0 (VidMmDestroyAllocation.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::DestroyAllocation(
        struct _KTHREAD **this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a3)
{
  VIDMM_GLOBAL::DestroyOneAllocation(this, a2, a3, 0);
}

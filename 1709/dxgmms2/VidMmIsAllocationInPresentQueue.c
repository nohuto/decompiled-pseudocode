/*
 * XREFs of VidMmIsAllocationInPresentQueue @ 0x1C0020C70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C00739D0 (-IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z.c)
 */

unsigned __int8 __fastcall VidMmIsAllocationInPresentQueue(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int *a3)
{
  return VIDMM_GLOBAL::IsAllocationInPresentQueue(a1, a2, a3);
}

/*
 * XREFs of VidMmIsAllocationTerminated @ 0x1C0020C90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAllocationTerminated@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C009B3C8 (-IsAllocationTerminated@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

unsigned __int8 __fastcall VidMmIsAllocationTerminated(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::IsAllocationTerminated(a1, a2);
}

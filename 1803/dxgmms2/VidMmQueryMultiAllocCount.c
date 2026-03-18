/*
 * XREFs of VidMmQueryMultiAllocCount @ 0x1C0013AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryMultiAllocCount@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00A2D7C (-QueryMultiAllocCount@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

__int64 __fastcall VidMmQueryMultiAllocCount(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::QueryMultiAllocCount(a1, a2);
}

/*
 * XREFs of VidMmInvalidateCache @ 0x1C0014280
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@_K1@Z @ 0x1C009B1EC (-InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@_K1@Z.c)
 */

__int64 __fastcall VidMmInvalidateCache(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return VIDMM_GLOBAL::InvalidateCache(a1, a2, a3, a4);
}

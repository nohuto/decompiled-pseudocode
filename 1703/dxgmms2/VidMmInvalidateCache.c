/*
 * XREFs of VidMmInvalidateCache @ 0x1C0013110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmInvalidateCache(
        VIDMM_GLOBAL *a1,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return VIDMM_GLOBAL::InvalidateCache(a1, a2, a3, a4);
}

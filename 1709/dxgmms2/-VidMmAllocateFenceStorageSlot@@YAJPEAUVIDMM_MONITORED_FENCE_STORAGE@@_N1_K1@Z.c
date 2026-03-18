/*
 * XREFs of ?VidMmAllocateFenceStorageSlot@@YAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C000E250
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C006FB68 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z.c)
 */

__int64 __fastcall VidMmAllocateFenceStorageSlot(
        struct VIDMM_MONITORED_FENCE_STORAGE *a1,
        bool a2,
        bool a3,
        unsigned __int64 a4,
        bool a5)
{
  return VIDMM_GLOBAL::AllocateFenceStorageSlot(a1, a2, a3, a4, a5);
}

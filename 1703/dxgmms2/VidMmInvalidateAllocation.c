/*
 * XREFs of VidMmInvalidateAllocation @ 0x1C0013EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VidMmInvalidateAllocation(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL::InvalidateAllocation(a1, a2);
}

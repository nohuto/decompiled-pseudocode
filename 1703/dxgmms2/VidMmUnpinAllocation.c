/*
 * XREFs of VidMmUnpinAllocation @ 0x1C0013A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VidMmUnpinAllocation(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2)
{
  VIDMM_GLOBAL::UnpinAllocation(a1, a2);
}

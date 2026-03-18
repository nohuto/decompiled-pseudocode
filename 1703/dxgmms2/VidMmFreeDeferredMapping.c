/*
 * XREFs of VidMmFreeDeferredMapping @ 0x1C001ECC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall VidMmFreeDeferredMapping(struct _VIDMM_LOCAL_ALLOC *a1)
{
  VIDMM_GLOBAL::FreeDeferredMapping(a1);
}

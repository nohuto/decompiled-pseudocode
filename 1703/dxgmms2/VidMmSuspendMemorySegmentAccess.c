/*
 * XREFs of VidMmSuspendMemorySegmentAccess @ 0x1C001EDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmSuspendMemorySegmentAccess(VIDMM_GLOBAL *a1)
{
  return VIDMM_GLOBAL::SuspendMemorySegmentAccess(a1);
}

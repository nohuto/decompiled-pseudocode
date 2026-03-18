/*
 * XREFs of VidMmGetAllocationInstance @ 0x1C0013080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmGetAllocationInstance(VIDMM_SEGMENT *a1, struct VIDMM_SEGMENT *a2, unsigned __int64 a3)
{
  return VIDMM_SEGMENT::ValidateApertureUnmapToDummyPage(a1, a2, a3);
}

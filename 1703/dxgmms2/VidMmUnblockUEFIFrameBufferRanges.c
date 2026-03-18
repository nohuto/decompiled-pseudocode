/*
 * XREFs of VidMmUnblockUEFIFrameBufferRanges @ 0x1C001EE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmUnblockUEFIFrameBufferRanges(VIDMM_GLOBAL *a1, const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  return VIDMM_GLOBAL::UnblockUEFIFrameBufferRanges(a1, a2);
}

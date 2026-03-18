/*
 * XREFs of BgGetDisplayContext @ 0x140755024
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140166C60 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}

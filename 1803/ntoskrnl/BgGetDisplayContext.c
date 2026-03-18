/*
 * XREFs of BgGetDisplayContext @ 0x14083B024
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1401854B0 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}

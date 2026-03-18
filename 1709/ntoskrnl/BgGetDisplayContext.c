/*
 * XREFs of BgGetDisplayContext @ 0x1407CE024
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14013B660 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}

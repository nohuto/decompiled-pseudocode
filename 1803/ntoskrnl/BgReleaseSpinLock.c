/*
 * XREFs of BgReleaseSpinLock @ 0x14083DC94
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1401854B0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 */

void BgReleaseSpinLock()
{
  BgpFwReleaseLock();
}

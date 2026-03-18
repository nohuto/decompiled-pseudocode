/*
 * XREFs of BgReleaseSpinLock @ 0x1407CE630
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14013B660 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 */

void BgReleaseSpinLock()
{
  BgpFwReleaseLock();
}

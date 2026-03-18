/*
 * XREFs of BgAcquireSpinLock @ 0x1407CE644
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x14013B660 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}

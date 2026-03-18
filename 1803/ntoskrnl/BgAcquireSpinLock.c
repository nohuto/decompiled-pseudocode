/*
 * XREFs of BgAcquireSpinLock @ 0x14083DCA8
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1401854B0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 */

void BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}

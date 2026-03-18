/*
 * XREFs of BgReleaseSpinLock @ 0x140758E74
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140166C60 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void BgReleaseSpinLock(void)
{
  BgpFwReleaseLock();
}

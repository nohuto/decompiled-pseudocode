/*
 * XREFs of BgAcquireSpinLock @ 0x140758E80
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x140166C60 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall BgAcquireSpinLock()
{
  BgpFwAcquireLock();
}

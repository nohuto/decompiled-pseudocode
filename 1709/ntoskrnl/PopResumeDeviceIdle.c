/*
 * XREFs of PopResumeDeviceIdle @ 0x14023D55C
 * Callers:
 *     PoClearBroadcast @ 0x140700A3C (PoClearBroadcast.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void PopResumeDeviceIdle()
{
  unsigned __int64 v0; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_1403A30DC = 0;
  KxReleaseSpinLock(&PopDopeGlobalLock);
  __writecr8(v0);
}

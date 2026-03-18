/*
 * XREFs of PopResumeDeviceIdle @ 0x1401388B4
 * Callers:
 *     PoClearBroadcast @ 0x140577BB0 (PoClearBroadcast.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void PopResumeDeviceIdle()
{
  unsigned __int64 v0; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_14036E2A4 = 0;
  KxReleaseSpinLock(&PopDopeGlobalLock);
  __writecr8(v0);
}

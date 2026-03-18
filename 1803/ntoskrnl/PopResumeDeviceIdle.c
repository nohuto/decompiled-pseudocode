/*
 * XREFs of PopResumeDeviceIdle @ 0x140153B58
 * Callers:
 *     PoClearBroadcast @ 0x1405ECC28 (PoClearBroadcast.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void PopResumeDeviceIdle()
{
  unsigned __int64 v0; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_1403CDB6C = 0;
  KxReleaseSpinLock(&PopDopeGlobalLock);
  __writecr8(v0);
}

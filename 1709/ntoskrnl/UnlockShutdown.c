/*
 * XREFs of UnlockShutdown @ 0x1404E6228
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

_QWORD *UnlockShutdown()
{
  ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

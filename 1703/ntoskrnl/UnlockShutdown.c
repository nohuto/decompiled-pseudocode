/*
 * XREFs of UnlockShutdown @ 0x1404CC9C0
 * Callers:
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

__int64 UnlockShutdown()
{
  ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}

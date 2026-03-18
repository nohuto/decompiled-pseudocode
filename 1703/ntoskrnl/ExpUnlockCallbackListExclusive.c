/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x14014A248
 * Callers:
 *     ExCreateCallback @ 0x1404CC7B0 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x140579FA0 (ExpDeleteCallback.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}

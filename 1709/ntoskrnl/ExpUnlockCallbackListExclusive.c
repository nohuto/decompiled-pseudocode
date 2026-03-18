/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x140157C0C
 * Callers:
 *     ExCreateCallback @ 0x140593970 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x140757D20 (ExpDeleteCallback.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}

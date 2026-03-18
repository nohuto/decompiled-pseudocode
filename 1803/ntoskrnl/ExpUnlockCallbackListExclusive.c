/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x14016D8AC
 * Callers:
 *     ExCreateCallback @ 0x140557360 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x1405EEEE0 (ExpDeleteCallback.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ExpUnlockCallbackListExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL, a3, a4);
  return KiLeaveGuardedRegionUnsafe(a1);
}

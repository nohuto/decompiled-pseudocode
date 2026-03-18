/*
 * XREFs of CmpUnlockHiveList @ 0x1404CC998
 * Callers:
 *     CmpGetNextFailedUnloadHive @ 0x14007EA48 (CmpGetNextFailedUnloadHive.c)
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 * Callees:
 *     <none>
 */

__int64 CmpUnlockHiveList()
{
  return ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}

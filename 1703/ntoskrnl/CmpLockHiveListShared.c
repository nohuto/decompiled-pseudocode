/*
 * XREFs of CmpLockHiveListShared @ 0x1404CA4C8
 * Callers:
 *     CmpGetNextFailedUnloadHive @ 0x14007EA48 (CmpGetNextFailedUnloadHive.c)
 * Callees:
 *     <none>
 */

__int64 CmpLockHiveListShared()
{
  return ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}

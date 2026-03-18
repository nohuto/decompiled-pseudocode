/*
 * XREFs of CmpLockHiveListShared @ 0x14059E074
 * Callers:
 *     CmpGetNextFailedUnloadHive @ 0x140131358 (CmpGetNextFailedUnloadHive.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 */

__int64 CmpLockHiveListShared()
{
  return ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}

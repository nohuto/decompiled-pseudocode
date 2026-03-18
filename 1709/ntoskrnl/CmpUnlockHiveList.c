/*
 * XREFs of CmpUnlockHiveList @ 0x1404E61E8
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     CmpGetNextFailedUnloadHive @ 0x140131358 (CmpGetNextFailedUnloadHive.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

char CmpUnlockHiveList()
{
  return ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}

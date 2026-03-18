/*
 * XREFs of CmpLockHiveListExclusive @ 0x1404CC9AC
 * Callers:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 * Callees:
 *     <none>
 */

void CmpLockHiveListExclusive()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}

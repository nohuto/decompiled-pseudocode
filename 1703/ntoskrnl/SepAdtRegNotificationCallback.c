/*
 * XREFs of SepAdtRegNotificationCallback @ 0x1405A6CF0
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x140491EB8 (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x1405A6D54 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1405A6DD8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x1405A6E34 (SepAdtInitializeCrashOnFail.c)
 */

NTSTATUS SepAdtRegNotificationCallback()
{
  SepAdtInitializeCrashOnFail();
  SepAdtInitializePrivilegeAuditing();
  SepAdtInitializeBounds();
  return NtNotifyChangeKey(
           SepAdtRegNotifyHandle,
           0LL,
           SepAdtLsaRegWatchWorkItem,
           (PVOID)1,
           &SepAdtIoStatusBlock,
           5u,
           0,
           0LL,
           0,
           1u);
}

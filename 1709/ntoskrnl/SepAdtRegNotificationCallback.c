/*
 * XREFs of SepAdtRegNotificationCallback @ 0x1405D06D0
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x1404797B0 (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x1405D0734 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1405D07B8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x1405D0814 (SepAdtInitializeCrashOnFail.c)
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

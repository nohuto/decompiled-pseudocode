/*
 * XREFs of SepAdtRegNotificationCallback @ 0x1406313E0
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x1404A2684 (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x140631444 (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x1406314C8 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140631524 (SepAdtInitializePrivilegeAuditing.c)
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

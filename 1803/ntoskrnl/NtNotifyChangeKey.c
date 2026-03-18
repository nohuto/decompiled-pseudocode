/*
 * XREFs of NtNotifyChangeKey @ 0x1404A2684
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140579DB0 (ExpWatchProductTypeWork.c)
 *     SepAdtRegNotificationCallback @ 0x1406313E0 (SepAdtRegNotificationCallback.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140631664 (SepAdtOpenRegAndSetupNotification.c)
 *     ExpWatchLicenseInfoWork @ 0x1407BC8A0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x1408BACD4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x1404A26F0 (NtNotifyChangeMultipleKeys.c)
 */

NTSTATUS __stdcall NtNotifyChangeKey(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN Asynchroneous,
        PVOID ChangeBuffer,
        ULONG Length,
        BOOLEAN WatchSubtree)
{
  return NtNotifyChangeMultipleKeys(
           KeyHandle,
           0,
           0LL,
           Event,
           ApcRoutine,
           ApcContext,
           IoStatusBlock,
           CompletionFilter,
           Asynchroneous,
           ChangeBuffer,
           Length,
           WatchSubtree);
}

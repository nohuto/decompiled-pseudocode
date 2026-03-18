/*
 * XREFs of NtNotifyChangeKey @ 0x1404797B0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1405925B0 (ExpWatchProductTypeWork.c)
 *     SepAdtRegNotificationCallback @ 0x1405D06D0 (SepAdtRegNotificationCallback.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x1405D0870 (SepAdtOpenRegAndSetupNotification.c)
 *     ExpWatchLicenseInfoWork @ 0x140755DD0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140839140 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x14047A598 (NtNotifyChangeMultipleKeys.c)
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

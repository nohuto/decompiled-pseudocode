/*
 * XREFs of ZwNotifyChangeKey @ 0x1401A9700
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x140283BA0 (PspReadDfssConfigurationValues.c)
 *     PnpWatchdogBugcheckConfigure @ 0x14060594C (PnpWatchdogBugcheckConfigure.c)
 *     PopPowerButtonBugcheckConfigure @ 0x140627920 (PopPowerButtonBugcheckConfigure.c)
 *     PnpWatchdogSetupInProgressConfigure @ 0x14063447C (PnpWatchdogSetupInProgressConfigure.c)
 *     IopRegistryInitializeCallbacks @ 0x14063ACEC (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x14063AE00 (IopRegistryCallback.c)
 *     PfpParametersWatcher @ 0x14075CDD0 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x1408C032C (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwNotifyChangeKey(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}

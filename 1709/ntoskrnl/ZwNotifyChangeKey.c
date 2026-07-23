/*
 * XREFs of ZwNotifyChangeKey @ 0x14017FAC0
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x14024D7C0 (PspReadDfssConfigurationValues.c)
 *     PopPowerButtonBugcheckConfigure @ 0x1405B83C0 (PopPowerButtonBugcheckConfigure.c)
 *     IopRegistryInitializeCallbacks @ 0x1405CFD00 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x1405CFE10 (IopRegistryCallback.c)
 *     PfpParametersWatcher @ 0x1406F4A60 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x14084EEE8 (PfInitializeSuperfetch.c)
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

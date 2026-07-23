/*
 * XREFs of ZwNotifyChangeKey @ 0x140180100
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x140238704 (PspReadDfssConfigurationValues.c)
 *     PopPowerButtonBugcheckConfigure @ 0x1405A83C0 (PopPowerButtonBugcheckConfigure.c)
 *     IopRegistryInitializeCallbacks @ 0x1405BDD9C (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x1405BDEB0 (IopRegistryCallback.c)
 *     PfpParametersWatcher @ 0x1406C4F40 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x14081DA88 (PfInitializeSuperfetch.c)
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

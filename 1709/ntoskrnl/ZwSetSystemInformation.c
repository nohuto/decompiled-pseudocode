/*
 * XREFs of ZwSetSystemInformation @ 0x140180CC0
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140273B80 (SmKmStoreTerminateWorker.c)
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x140739074 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x140739188 (SmStoreDelete.c)
 *     SmStoreResize @ 0x14073936C (SmStoreResize.c)
 *     KitpInitAitSampleRate @ 0x140855AB8 (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        SIZE_T SystemInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}

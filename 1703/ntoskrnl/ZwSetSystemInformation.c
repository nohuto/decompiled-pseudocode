/*
 * XREFs of ZwSetSystemInformation @ 0x1401812E0
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x14024E070 (SmKmStoreTerminateWorker.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x140700FA8 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x1407010BC (SmStoreDelete.c)
 *     SmStoreResize @ 0x1407012A4 (SmStoreResize.c)
 *     KitpInitAitSampleRate @ 0x140812C98 (KitpInitAitSampleRate.c)
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

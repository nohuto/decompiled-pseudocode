/*
 * XREFs of ZwSetSystemInformation @ 0x1401AA900
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x1402A7610 (SmKmStoreTerminateWorker.c)
 *     IoShutdownSystem @ 0x1404812F8 (IoShutdownSystem.c)
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     SmStoreCreate @ 0x14079C2D0 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x14079C3DC (SmStoreDelete.c)
 *     SmStoreResize @ 0x14079C5B8 (SmStoreResize.c)
 *     KitpInitAitSampleRate @ 0x1408C7D10 (KitpInitAitSampleRate.c)
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

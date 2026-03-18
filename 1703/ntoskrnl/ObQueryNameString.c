/*
 * XREFs of ObQueryNameString @ 0x14044D030
 * Callers:
 *     IopGetFileVolumeNameInformation @ 0x1400318CC (IopGetFileVolumeNameInformation.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140071B54 (IopAttachDeviceToDeviceStackSafe.c)
 *     SeSetLearningModeObjectInformation @ 0x1400EE8E0 (SeSetLearningModeObjectInformation.c)
 *     SmKmEtwAppendObjectName @ 0x14024DADC (SmKmEtwAppendObjectName.c)
 *     IopCaptureObjectName @ 0x14040B484 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x14040B800 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x14077F074 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x1404FB3B0 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}

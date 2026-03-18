/*
 * XREFs of ObQueryNameString @ 0x1405747E0
 * Callers:
 *     IopGetFileVolumeNameInformation @ 0x1400C6A5C (IopGetFileVolumeNameInformation.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400C8670 (IopAttachDeviceToDeviceStackSafe.c)
 *     SeSetLearningModeObjectInformation @ 0x140105410 (SeSetLearningModeObjectInformation.c)
 *     SmKmEtwAppendObjectName @ 0x1402A7078 (SmKmEtwAppendObjectName.c)
 *     PopFlushVolumeWorker @ 0x1404708F0 (PopFlushVolumeWorker.c)
 *     IopCaptureObjectName @ 0x14047627C (IopCaptureObjectName.c)
 *     VfIrpLogRetrieveWmiData @ 0x14082E574 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x1404A78E0 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((char *)Object, (__int64)ObjectNameInfo, Length, ReturnLength, 0);
}

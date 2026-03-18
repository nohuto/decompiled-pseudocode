/*
 * XREFs of ObQueryNameString @ 0x1405907A0
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x140081830 (SeSetLearningModeObjectInformation.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140127C98 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopGetFileVolumeNameInformation @ 0x14012AB08 (IopGetFileVolumeNameInformation.c)
 *     SmKmEtwAppendObjectName @ 0x14027328C (SmKmEtwAppendObjectName.c)
 *     IopCaptureObjectName @ 0x14042DE30 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x140436680 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x1407C1048 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x14048F170 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((char *)Object, (__int64)ObjectNameInfo, Length, ReturnLength, 0);
}

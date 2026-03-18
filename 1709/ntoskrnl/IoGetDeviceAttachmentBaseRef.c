/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x1400B05A0
 * Callers:
 *     PopNotifyDevice @ 0x140437350 (PopNotifyDevice.c)
 *     PopDiagTraceThermalRequest @ 0x1404518D8 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x140451B7C (PopDiagTraceCoolingExtension.c)
 *     FsRtlReleaseFile @ 0x14049C430 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14049C600 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E736C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E75A8 (FsRtlAcquireFileForCcFlushEx.c)
 *     sub_140560EA4 @ 0x140560EA4 (sub_140560EA4.c)
 *     PopFxRegisterDevice @ 0x1405CA0E4 (PopFxRegisterDevice.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1405E4F50 (IoWMIDeviceObjectToInstanceName.c)
 *     PipRecordOpenHandleVeto @ 0x1406D54D4 (PipRecordOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406F7354 (PopRegisterCoolingExtensionProtection.c)
 *     PoThermalCounterSetCallback @ 0x1406FFA40 (PoThermalCounterSetCallback.c)
 *     PopCheckThermalPolicy @ 0x1406FFC0C (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x1407018C0 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x14070420C (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x140705478 (PopDiagTraceThermalCoolingMode.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1407059A8 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x140705A98 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x14070CB64 (PopSqmThermalCriticalEvent.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400B05BC (IoGetDeviceAttachmentBaseRefWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(DeviceObject, 1953261124LL);
}

/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x140071FD0
 * Callers:
 *     PopNotifyDevice @ 0x140408C28 (PopNotifyDevice.c)
 *     PopDiagTraceThermalRequest @ 0x14045D940 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x14045DF44 (PopDiagTraceCoolingExtension.c)
 *     sub_1404628A8 @ 0x1404628A8 (sub_1404628A8.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404C6C34 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404C6E70 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFile @ 0x140510170 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140510380 (FsRtlAcquireFileExclusiveCommon.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140584010 (IoWMIDeviceObjectToInstanceName.c)
 *     PopFxRegisterDevice @ 0x1405BE594 (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x1405D80C8 (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x1405D8210 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x1405D8294 (PopDiagTraceThermalCoolingMode.c)
 *     PiEventRemovalOpenHandleVeto @ 0x1406AA3FC (PiEventRemovalOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406C6C70 (PopRegisterCoolingExtensionProtection.c)
 *     PoThermalCounterSetCallback @ 0x1406CBA30 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x1406CDA58 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1406CE498 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1406CE588 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x1406D68FC (PopSqmThermalCriticalEvent.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(DeviceObject, 1953261124LL);
}

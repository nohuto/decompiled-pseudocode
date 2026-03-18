/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x140064E8C
 * Callers:
 *     IoGetDeviceAttachmentBaseRef @ 0x140064E70 (IoGetDeviceAttachmentBaseRef.c)
 *     PopScanIdleList @ 0x140073E84 (PopScanIdleList.c)
 *     PoStoreRequester @ 0x140075BAC (PoStoreRequester.c)
 *     PopThermalTraceRundownEvents @ 0x1400D20A8 (PopThermalTraceRundownEvents.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1401346A0 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x1401352E8 (FsRtlReleaseFileForModWrite.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14014DB20 (PopTraceThermalZonePassiveHistogram.c)
 *     PopAllocateIrp @ 0x1401673F8 (PopAllocateIrp.c)
 *     PopCheckAndHandleThermalConditions @ 0x140180F10 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x140180FA0 (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14023AFD4 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x140271790 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceThermalStateChange @ 0x14027D8CC (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x14027D9EC (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x14027DB1C (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14027E12C (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x14027E464 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14027E590 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x1402A7078 (SmKmEtwAppendObjectName.c)
 *     PopNotifyDevice @ 0x140472AA4 (PopNotifyDevice.c)
 *     PopDiagTraceThermalRequest @ 0x14058367C (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x140583938 (PopDiagTraceCoolingExtension.c)
 *     PopFxRegisterDevice @ 0x140614B24 (PopFxRegisterDevice.c)
 *     PopCheckThermalPolicy @ 0x140643E8C (PopCheckThermalPolicy.c)
 *     PopDiagTraceActiveCooling @ 0x140643FE0 (PopDiagTraceActiveCooling.c)
 *     PopDiagTraceThermalCoolingMode @ 0x14064404C (PopDiagTraceThermalCoolingMode.c)
 *     IopQueryInterfaceRecurseUp @ 0x140647E40 (IopQueryInterfaceRecurseUp.c)
 *     PiControlGetDeviceStack @ 0x14073AA54 (PiControlGetDeviceStack.c)
 *     PoThermalCounterSetCallback @ 0x140762EB0 (PoThermalCounterSetCallback.c)
 *     PopDiagTracePassiveCooling @ 0x1407683A0 (PopDiagTracePassiveCooling.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x140769844 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x140769940 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalEvent @ 0x14076FFA8 (PopSqmThermalCriticalEvent.c)
 *     IopMarkBootPartition @ 0x1408B6F50 (IopMarkBootPartition.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x140065144 (IopGetDeviceAttachmentBase.c)
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 */

void *__fastcall IoGetDeviceAttachmentBaseRefWithTag(__int64 a1, ULONG a2)
{
  KIRQL v4; // di
  void *DeviceAttachmentBase; // rbx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (void *)IopGetDeviceAttachmentBase(a1);
  ObfReferenceObjectWithTag(DeviceAttachmentBase, a2);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return DeviceAttachmentBase;
}

/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x1400B05BC
 * Callers:
 *     PopThermalTraceRundownEvents @ 0x14000EDE8 (PopThermalTraceRundownEvents.c)
 *     PoStoreRequester @ 0x1400B0064 (PoStoreRequester.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400B05A0 (IoGetDeviceAttachmentBaseRef.c)
 *     PopScanIdleList @ 0x1400B1278 (PopScanIdleList.c)
 *     PopAllocateIrp @ 0x1400B3D54 (PopAllocateIrp.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1400EF610 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x1400EFF28 (FsRtlReleaseFileForModWrite.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401FE604 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x14023A360 (PoSetSystemWakeDevice.c)
 *     PopCheckAndHandleThermalConditions @ 0x1402436CC (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalStateChange @ 0x14024712C (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x140247248 (PopDiagTraceThermalZoneEnumeration.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140247598 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402476C4 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140247EB8 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1402481F0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x14024836C (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140248498 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x14027328C (SmKmEtwAppendObjectName.c)
 *     PiControlGetDeviceStack @ 0x14044DE98 (PiControlGetDeviceStack.c)
 *     IopQueryInterfaceRecurseUp @ 0x14059C284 (IopQueryInterfaceRecurseUp.c)
 *     IopMarkBootPartition @ 0x140844A20 (IopMarkBootPartition.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x1400245FC (IopGetDeviceAttachmentBase.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
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

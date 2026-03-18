/*
 * XREFs of IoGetDeviceAttachmentBaseRefWithTag @ 0x140071FE0
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x1400153C0 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140022B88 (FsRtlAcquireFileForModWriteEx.c)
 *     PopThermalTraceRundownEvents @ 0x140034FA8 (PopThermalTraceRundownEvents.c)
 *     PoStoreRequester @ 0x1400718B4 (PoStoreRequester.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140071FD0 (IoGetDeviceAttachmentBaseRef.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14013C76C (PopTraceThermalZonePassiveHistogram.c)
 *     PopAllocateIrp @ 0x140146080 (PopAllocateIrp.c)
 *     PopCheckAndHandleThermalConditions @ 0x140168960 (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1401689E4 (PopDiagTraceThermalZoneEnumeration.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401F8500 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PoSetSystemWakeDevice @ 0x140227580 (PoSetSystemWakeDevice.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x140230CA4 (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceThermalStateChange @ 0x1402322F8 (PopDiagTraceThermalStateChange.c)
 *     PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140232414 (PopDiagTraceThermalZoneThrottleDurationPerfTrack.c)
 *     PopDiagTraceThermalZoneThrottlePerfTrack @ 0x140232544 (PopDiagTraceThermalZoneThrottlePerfTrack.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140232B38 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x140232E78 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x140232FA4 (PopTraceZoneCr3Tripped.c)
 *     SmKmEtwAppendObjectName @ 0x14024DADC (SmKmEtwAppendObjectName.c)
 *     PiControlGetDeviceStack @ 0x140595F34 (PiControlGetDeviceStack.c)
 *     IopQueryInterfaceRecurseUp @ 0x1405C7810 (IopQueryInterfaceRecurseUp.c)
 *     IopMarkBootPartition @ 0x1407FA5A0 (IopMarkBootPartition.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x1400720DC (IopGetDeviceAttachmentBase.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
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

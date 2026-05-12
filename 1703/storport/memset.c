/*
 * XREFs of memset @ 0x1C001F180
 * Callers:
 *     RaUnitAtaPassThroughValidateInput @ 0x1C00017B0 (RaUnitAtaPassThroughValidateInput.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C000243C (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetryDeviceStatisticsCommand @ 0x1C0002564 (StorpTelemetryDeviceStatisticsCommand.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C000342C (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0003774 (StorpTelemetrySendUnitSmartAttributes.c)
 *     StorpTelemetrySmartCommand @ 0x1C0003D1C (StorpTelemetrySmartCommand.c)
 *     RaUnitAtaPassThroughIoctl @ 0x1C0003EE4 (RaUnitAtaPassThroughIoctl.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C00041F0 (StorpTelemetrySendUnitPerfData.c)
 *     RaidAllocateSrb @ 0x1C0005758 (RaidAllocateSrb.c)
 *     RaidZeroXrb @ 0x1C000597C (RaidZeroXrb.c)
 *     RaidStartIoPacket @ 0x1C00073D0 (RaidStartIoPacket.c)
 *     StorSubmitIoGatewayItem @ 0x1C000A0E4 (StorSubmitIoGatewayItem.c)
 *     StorpTelemetryCollectErrorData @ 0x1C000AE44 (StorpTelemetryCollectErrorData.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C000B0C4 (StorpTelemetryConstructErrorEntry.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C000D940 (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     StorpAdapterTopologyWorkItemRoutine @ 0x1C000DA20 (StorpAdapterTopologyWorkItemRoutine.c)
 *     StorpInitializeWorkItem @ 0x1C000FD08 (StorpInitializeWorkItem.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C000FF98 (InitializeBusesWithVmLunsBitmap.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0010038 (RaidInitializePerfOptsPassive.c)
 *     RaidAllocateAddressMapping @ 0x1C0010ADC (RaidAllocateAddressMapping.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0011024 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C0011490 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaidAdapterRescanBus @ 0x1C0012EF4 (RaidAdapterRescanBus.c)
 *     RaidQueryD3ColdInterface @ 0x1C00137E8 (RaidQueryD3ColdInterface.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0013A10 (RaidBusEnumeratorProcessNewUnit.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0014154 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C0014390 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidAdapterEnumerateBus @ 0x1C001441C (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0014530 (RaidBusEnumeratorGetLunList.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C001489C (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0014C34 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C00152E4 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C0015684 (RaidBusEnumeratorBuildReportLuns.c)
 *     StorDeleteScsiIdentity @ 0x1C0015A54 (StorDeleteScsiIdentity.c)
 *     PortMiniportRegistryRead @ 0x1C0015FC0 (PortMiniportRegistryRead.c)
 *     PortBuildRegKeyName @ 0x1C001611C (PortBuildRegKeyName.c)
 *     RtlStringCchPrintfExW @ 0x1C0016C88 (RtlStringCchPrintfExW.c)
 *     RaidUnitAllocateResources @ 0x1C0017048 (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C0017468 (RaidZeroUnit.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     DllInitialize @ 0x1C0018450 (DllInitialize.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C0018A34 (RaidGetTelemetryLogPageIds.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C0018C78 (RaidQueryCrashdumpFunctions.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C0018EB8 (RaidRegisterForRuntimePowerManagement.c)
 *     RaidAdapterHack @ 0x1C0019CA0 (RaidAdapterHack.c)
 *     RaidCreateAdapter @ 0x1C0019DE8 (RaidCreateAdapter.c)
 *     RaidCreateDeferredQueue @ 0x1C0019F88 (RaidCreateDeferredQueue.c)
 *     StorCreateIoGateway @ 0x1C0019FC0 (StorCreateIoGateway.c)
 *     StorpInitializePerfTelemetry @ 0x1C001A74C (StorpInitializePerfTelemetry.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C001B568 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     PortAllocateRegistryBuffer @ 0x1C001B7B8 (PortAllocateRegistryBuffer.c)
 *     StorPortFreeRegistryBuffer @ 0x1C001B840 (StorPortFreeRegistryBuffer.c)
 *     McGenControlCallbackV2 @ 0x1C001B890 (McGenControlCallbackV2.c)
 *     StorpInitializeTimer @ 0x1C001B9E4 (StorpInitializeTimer.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C0D8 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidPowerSettingCallback @ 0x1C001C2D0 (RaidPowerSettingCallback.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C001CFF8 (StorpAdapterInitializePoFxPower.c)
 *     StorPortDebugPrint @ 0x1C001D350 (StorPortDebugPrint.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C001D574 (StorpLogPhysicalTopologyInfo.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C001E014 (StorPortpSetPowerSettingNotificationGuids.c)
 *     RaidMachineRequireIoPortResource @ 0x1C001E1E0 (RaidMachineRequireIoPortResource.c)
 *     RaGetProtocolCommandEffects @ 0x1C002B528 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002C6E4 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C002C874 (RaidAdapterLogIoError.c)
 *     RaidAdapterRpmbRequest @ 0x1C002D4A0 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002D7AC (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002DDE0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterTargetedRescan @ 0x1C002E840 (RaidAdapterTargetedRescan.c)
 *     RaidInitializeCryptoEngine @ 0x1C002F548 (RaidInitializeCryptoEngine.c)
 *     RaSqmLogAdapterStatistics @ 0x1C0030CD4 (RaSqmLogAdapterStatistics.c)
 *     RaSqmLogScsiPassthroughStatistics @ 0x1C0030FA0 (RaSqmLogScsiPassthroughStatistics.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0034D60 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterPerfStates @ 0x1C0035FB0 (RaidRegisterPerfStates.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C00367DC (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     StorPortAdapterPowerControl @ 0x1C0036DD0 (StorPortAdapterPowerControl.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C0038A5C (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C0038B8C (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C0038D58 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C0038E88 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetTemperatureThresholdBufferForMiniport @ 0x1C0038F74 (RaBuildSetTemperatureThresholdBufferForMiniport.c)
 *     RaidLogAllocationFailure @ 0x1C0039648 (RaidLogAllocationFailure.c)
 *     StorCreateSystemLogEntry @ 0x1C003985C (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C0039B24 (StorLogIoError.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0039F48 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitGetQOSIoctl @ 0x1C003A494 (RaUnitGetQOSIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C003B5F8 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C003BDB0 (RaUnitStreamsIoctl.c)
 *     RaidUnitCreateDumpAdapter @ 0x1C003CB54 (RaidUnitCreateDumpAdapter.c)
 *     RaidUnitCreateDumpDiskData @ 0x1C003D184 (RaidUnitCreateDumpDiskData.c)
 *     RaidUnitCreateDumpDriver @ 0x1C003D2B0 (RaidUnitCreateDumpDriver.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003D940 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C003DA58 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C003EA68 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RaidUnitStorageFreeMiniPortDumpPointers @ 0x1C003EC88 (RaidUnitStorageFreeMiniPortDumpPointers.c)
 *     RaidUnitStorageGetMiniPortDumpPointers @ 0x1C003F00C (RaidUnitStorageGetMiniPortDumpPointers.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C003F5FC (RaidUnitUnRegisterInterfaces.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C003F7B0 (RtlStringExHandleOtherFlagsW.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00452EC (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     StorpTelemetrySendUnitQos @ 0x1C00458C4 (StorpTelemetrySendUnitQos.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C0046260 (FillBufferWithDriverTelemetryDump.c)
 *     DeviceIdShimStorageDeviceIdCompletionHook @ 0x1C0046760 (DeviceIdShimStorageDeviceIdCompletionHook.c)
 *     AsciiToWChar @ 0x1C0046B40 (AsciiToWChar.c)
 *     PortMiniportRegistryWrite @ 0x1C0046BB4 (PortMiniportRegistryWrite.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C004791C (PortpPassThroughZeroUnusedBuffers.c)
 *     PortTraceInitGlobalLogger @ 0x1C0047AA4 (PortTraceInitGlobalLogger.c)
 *     PortTraceInitTracing @ 0x1C0047D0C (PortTraceInitTracing.c)
 *     StorSqmAddToStream @ 0x1C0047EF4 (StorSqmAddToStream.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C005D378 (RaGetUnitStorageDeviceProperty.c)
 *     RaCreateBus @ 0x1C005D8C8 (RaCreateBus.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C005DA30 (RaidAdapterConnectMSIInterrupt.c)
 *     RaInitializeConfiguration @ 0x1C005DB90 (RaInitializeConfiguration.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C005E4FC (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C005E704 (RaUnitRegisterForIdleDetection.c)
 *     RaidUnitGetDeviceParameters @ 0x1C005EAB0 (RaidUnitGetDeviceParameters.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C005F19C (StorpInititalizePerUnitPerfTelemetry.c)
 *     RaidPrepareSrbForReuse @ 0x1C005F420 (RaidPrepareSrbForReuse.c)
 *     RaidInitializeAdapter @ 0x1C005F66C (RaidInitializeAdapter.c)
 *     PortRegistryRead @ 0x1C005FDEC (PortRegistryRead.c)
 *     PortRegistryReadWithHandle @ 0x1C006003C (PortRegistryReadWithHandle.c)
 *     RaidInitializeDma @ 0x1C006064C (RaidInitializeDma.c)
 *     RaDeleteBus @ 0x1C0060774 (RaDeleteBus.c)
 *     RaidCreateDma @ 0x1C00607E0 (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x1C0060800 (RaCreateMiniport.c)
 *     RaSaveDriverInitData @ 0x1C0060A64 (RaSaveDriverInitData.c)
 *     RaCreateDriver @ 0x1C0060AFC (RaCreateDriver.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0060E30 (RaUnitQueryCapabilitiesIrp.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C00611A4 (PortWdmGetDeviceCapabilities.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C006133C (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x1C0062084 (RaidGetStorageMiniportProperty.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C00626A0 (RiAllocateMiniportDeviceExtension.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C0063D38 (RaidAdapterConnectNonMSIInterrupt.c)
 *     RaidDeleteDma @ 0x1C0064704 (RaidDeleteDma.c)
 *     WppTraceCallback @ 0x1C0064B90 (WppTraceCallback.c)
 *     RaidUnitAddAclToVmDevices @ 0x1C00657AC (RaidUnitAddAclToVmDevices.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0065EF4 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughSrbInitialize @ 0x1C00669F4 (PortPassThroughSrbInitialize.c)
 *     PortpErrorInitRecords @ 0x1C0066DB0 (PortpErrorInitRecords.c)
 *     StorPortNotificationVrfy @ 0x1C0067360 (StorPortNotificationVrfy.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  size_t v4; // r9
  size_t i; // r8
  unsigned int v6; // ecx
  _QWORD *v7; // rcx
  size_t v8; // r10
  size_t j; // r8

  result = a1;
  if ( Size < 8 )
  {
LABEL_5:
    for ( i = Size & 7; i; --i )
      *((char *)a1 + i - 1) = Val;
    return result;
  }
  *(_QWORD *)&Val = 0x101010101010101LL * (unsigned __int8)Val;
  if ( Size < 0x47 )
  {
    v4 = Size & 0x78;
    a1 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
    do
    {
      *(_QWORD *)((char *)result + v4 - 8) = *(_QWORD *)&Val;
      v4 -= 8LL;
    }
    while ( v4 );
    goto LABEL_5;
  }
  v6 = -(int)a1 & 7;
  if ( v6 )
  {
    Size -= v6;
    *(_QWORD *)result = *(_QWORD *)&Val;
  }
  v7 = (char *)result + v6;
  v8 = Size >> 6;
  if ( ((Size >> 3) & 7) != 0 )
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C001F23D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
                     &v7[((Size >> 3) & 7) - 8],
                     *(_QWORD *)&Val);
  do
  {
    *v7 = *(_QWORD *)&Val;
    v7[1] = *(_QWORD *)&Val;
    v7[2] = *(_QWORD *)&Val;
    v7[3] = *(_QWORD *)&Val;
    v7[4] = *(_QWORD *)&Val;
    v7[5] = *(_QWORD *)&Val;
    v7[6] = *(_QWORD *)&Val;
    v7[7] = *(_QWORD *)&Val;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  for ( j = Size & 7; j; --j )
    *((_BYTE *)v7 + j - 1) = Val;
  return result;
}

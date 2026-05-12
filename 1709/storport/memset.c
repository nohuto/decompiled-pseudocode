/*
 * XREFs of memset @ 0x1C001F680
 * Callers:
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0001188 (RaUnitAtaPassThroughValidateInput.c)
 *     StorpTelemetryDeviceStatisticsCommand @ 0x1C0002B14 (StorpTelemetryDeviceStatisticsCommand.c)
 *     StorpTelemetrySmartCommand @ 0x1C0002D6C (StorpTelemetrySmartCommand.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0002ECC (StorpTelemetrySendUnitSmartAttributes.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0003454 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     RaUnitAtaPassThroughIoctl @ 0x1C0003E90 (RaUnitAtaPassThroughIoctl.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C00046C0 (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C0004A04 (StorpTelemetrySendUnitPerfData.c)
 *     RaidAllocateSrb @ 0x1C0005EF4 (RaidAllocateSrb.c)
 *     RaidStartIoPacket @ 0x1C0007770 (RaidStartIoPacket.c)
 *     StorpTelemetryCollectErrorData @ 0x1C000BC90 (StorpTelemetryCollectErrorData.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C000BF30 (StorpTelemetryConstructErrorEntry.c)
 *     RaidZeroXrb @ 0x1C000C260 (RaidZeroXrb.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C000C9C8 (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     StorpAdapterTopologyWorkItemRoutine @ 0x1C000E310 (StorpAdapterTopologyWorkItemRoutine.c)
 *     StorpInitializeWorkItem @ 0x1C000F89C (StorpInitializeWorkItem.c)
 *     StorpInitializePerfTelemetry @ 0x1C000FFE0 (StorpInitializePerfTelemetry.c)
 *     RaidAdapterHack @ 0x1C00115D4 (RaidAdapterHack.c)
 *     RaidCreateAdapter @ 0x1C001171C (RaidCreateAdapter.c)
 *     RaidCreateDeferredQueue @ 0x1C00118BC (RaidCreateDeferredQueue.c)
 *     StorCreateIoGateway @ 0x1C00118F4 (StorCreateIoGateway.c)
 *     RaidAdapterRescanBus @ 0x1C0012868 (RaidAdapterRescanBus.c)
 *     RaidQueryD3ColdInterface @ 0x1C00130A8 (RaidQueryD3ColdInterface.c)
 *     RtlStringCchPrintfExW @ 0x1C0013874 (RtlStringCchPrintfExW.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C001452C (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C00147DC (RaidBusEnumeratorProbeLunZero.c)
 *     RaidAdapterEnumerateBus @ 0x1C0014868 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0014980 (RaidBusEnumeratorGetLunList.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0014CDC (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0015084 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C0015734 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C0015AD0 (RaidBusEnumeratorBuildReportLuns.c)
 *     StorDeleteScsiIdentity @ 0x1C0015E8C (StorDeleteScsiIdentity.c)
 *     PortMiniportRegistryRead @ 0x1C0016380 (PortMiniportRegistryRead.c)
 *     PortBuildRegKeyName @ 0x1C00164DC (PortBuildRegKeyName.c)
 *     RaidUnitAllocateResources @ 0x1C0016F34 (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C00172FC (RaidZeroUnit.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0017438 (RaidBusEnumeratorProcessNewUnit.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017668 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C00184AC (RaidGetTelemetryLogPageIds.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C00186F8 (RaidQueryCrashdumpFunctions.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C001900C (RaidRegisterForRuntimePowerManagement.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C001975C (InitializeBusesWithVmLunsBitmap.c)
 *     RaidInitializePerfOptsPassive @ 0x1C00197FC (RaidInitializePerfOptsPassive.c)
 *     RaidAllocateAddressMapping @ 0x1C001A28C (RaidAllocateAddressMapping.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001A84C (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C001ACB8 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C001B1B0 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     PortAllocateRegistryBuffer @ 0x1C001B548 (PortAllocateRegistryBuffer.c)
 *     McGenControlCallbackV2 @ 0x1C001B5D0 (McGenControlCallbackV2.c)
 *     StorPortFreeRegistryBuffer @ 0x1C001B8B0 (StorPortFreeRegistryBuffer.c)
 *     StorpInitializeTimer @ 0x1C001B900 (StorpInitializeTimer.c)
 *     DllInitialize @ 0x1C001BA30 (DllInitialize.c)
 *     RaidInitializeDeviceQueue @ 0x1C001C370 (RaidInitializeDeviceQueue.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C498 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidPowerSettingCallback @ 0x1C001CC90 (RaidPowerSettingCallback.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C001DF18 (StorpAdapterInitializePoFxPower.c)
 *     StorPortDebugPrint @ 0x1C001E240 (StorPortDebugPrint.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C001E380 (StorpLogPhysicalTopologyInfo.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C001EB94 (StorPortpSetPowerSettingNotificationGuids.c)
 *     RaidMachineRequireIoPortResource @ 0x1C001ED6C (RaidMachineRequireIoPortResource.c)
 *     RaGetProtocolCommandEffects @ 0x1C002C21C (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002D664 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C002D7F4 (RaidAdapterLogIoError.c)
 *     RaidAdapterRpmbRequest @ 0x1C002E458 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002E7AC (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EB18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterTargetedRescan @ 0x1C002F57C (RaidAdapterTargetedRescan.c)
 *     RaidInitializeCryptoEngine @ 0x1C00303DC (RaidInitializeCryptoEngine.c)
 *     RaSqmLogAdapterStatistics @ 0x1C00313CC (RaSqmLogAdapterStatistics.c)
 *     RaSqmLogScsiPassthroughStatistics @ 0x1C0031698 (RaSqmLogScsiPassthroughStatistics.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C0031FD8 (RaidZoneWriteGroupListSearchRequest.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003616C (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterPerfStates @ 0x1C0037C5C (RaidRegisterPerfStates.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C003865C (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     StorPortAdapterPowerControl @ 0x1C0038C70 (StorPortAdapterPowerControl.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C003A508 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C003A638 (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C003A854 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C003A984 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetTemperatureThresholdBufferForMiniport @ 0x1C003AA70 (RaBuildSetTemperatureThresholdBufferForMiniport.c)
 *     RaidLogAllocationFailure @ 0x1C003B158 (RaidLogAllocationFailure.c)
 *     StorCreateSystemLogEntry @ 0x1C003B36C (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C003B634 (StorLogIoError.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C003BC98 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitGetQOSIoctl @ 0x1C003C1C0 (RaUnitGetQOSIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C003D6B8 (RaUnitStreamsIoctl.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003E810 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C003E928 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C003F9A4 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C003FE40 (RaidUnitUnRegisterInterfaces.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C003FF84 (RtlStringExHandleOtherFlagsW.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0045EFC (StorpTelemetryNvmeGetLogPage.c)
 *     StorpTelemetrySendUnitQos @ 0x1C0046890 (StorpTelemetrySendUnitQos.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C0046BB8 (FillBufferWithDriverTelemetryDump.c)
 *     DeviceIdShimStorageDeviceIdCompletionHook @ 0x1C0047090 (DeviceIdShimStorageDeviceIdCompletionHook.c)
 *     AsciiToWChar @ 0x1C00474A0 (AsciiToWChar.c)
 *     PortMiniportRegistryWrite @ 0x1C0047514 (PortMiniportRegistryWrite.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C004831C (PortpPassThroughZeroUnusedBuffers.c)
 *     PortTraceInitGlobalLogger @ 0x1C00484AC (PortTraceInitGlobalLogger.c)
 *     PortTraceInitTracing @ 0x1C0048714 (PortTraceInitTracing.c)
 *     StorSqmAddToStream @ 0x1C00488FC (StorSqmAddToStream.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C005F24C (RaGetUnitStorageDeviceProperty.c)
 *     RaCreateBus @ 0x1C005F8E0 (RaCreateBus.c)
 *     RaCreateDriver @ 0x1C005FBD8 (RaCreateDriver.c)
 *     RaSaveDriverInitData @ 0x1C005FC24 (RaSaveDriverInitData.c)
 *     RaInitializeConfiguration @ 0x1C005FDE4 (RaInitializeConfiguration.c)
 *     RaDeleteBus @ 0x1C006023C (RaDeleteBus.c)
 *     RaidCreateDma @ 0x1C00602A8 (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x1C00602C8 (RaCreateMiniport.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C006091C (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0060A88 (RaUnitRegisterForIdleDetection.c)
 *     RaidUnitGetDeviceParameters @ 0x1C0060E2C (RaidUnitGetDeviceParameters.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0061894 (RaUnitQueryCapabilitiesIrp.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C0061C1C (PortWdmGetDeviceCapabilities.c)
 *     RaidInitializeAdapter @ 0x1C0061E4C (RaidInitializeAdapter.c)
 *     RaidPrepareSrbForReuse @ 0x1C0062658 (RaidPrepareSrbForReuse.c)
 *     PortRegistryRead @ 0x1C0062960 (PortRegistryRead.c)
 *     PortRegistryReadWithHandle @ 0x1C0062AFC (PortRegistryReadWithHandle.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C0062D80 (StorpInititalizePerUnitPerfTelemetry.c)
 *     RaidInitializeDma @ 0x1C00632C8 (RaidInitializeDma.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C0063534 (RaidAdapterConnectMSIInterrupt.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C0063704 (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x1C0064474 (RaidGetStorageMiniportProperty.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C0064780 (RiAllocateMiniportDeviceExtension.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C0065E8C (RaidAdapterConnectNonMSIInterrupt.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C0065F60 (RaidAdapterCreateDriverInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C0066170 (RaidAdapterCreateDumpInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C006667C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0066F64 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidDeleteDma @ 0x1C0067C44 (RaidDeleteDma.c)
 *     WppTraceCallback @ 0x1C00680D0 (WppTraceCallback.c)
 *     RaidUnitAddAclToVmDevices @ 0x1C0068E74 (RaidUnitAddAclToVmDevices.c)
 *     RaidUnitCreateDumpData @ 0x1C006901C (RaidUnitCreateDumpData.c)
 *     RaidUnitCreateDumpInfo @ 0x1C006913C (RaidUnitCreateDumpInfo.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0069840 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughSrbInitialize @ 0x1C006A348 (PortPassThroughSrbInitialize.c)
 *     PortpErrorInitRecords @ 0x1C006A704 (PortpErrorInitRecords.c)
 *     StorPortNotificationVrfy @ 0x1C006B3F0 (StorPortNotificationVrfy.c)
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
mset20:
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
    goto mset20;
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C001F73D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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

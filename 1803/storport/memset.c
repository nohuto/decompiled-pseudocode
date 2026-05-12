/*
 * XREFs of memset @ 0x1C0018140
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001724 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0001CA4 (RaUnitAtaPassThroughValidateInput.c)
 *     StorpTelemetryDeviceStatisticsCommand @ 0x1C0001DAC (StorpTelemetryDeviceStatisticsCommand.c)
 *     StorpTelemetrySmartCommand @ 0x1C0001FB8 (StorpTelemetrySmartCommand.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0002D70 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0002ECC (StorpTelemetrySendUnitSmartAttributes.c)
 *     StorpAdapterTopologyWorkItemRoutine @ 0x1C00034B0 (StorpAdapterTopologyWorkItemRoutine.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C0004628 (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C0005978 (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C0005D40 (StorpTelemetrySendUnitPerfData.c)
 *     RaidAllocateSrb @ 0x1C0007504 (RaidAllocateSrb.c)
 *     RaidStartIoPacket @ 0x1C0008A60 (RaidStartIoPacket.c)
 *     RaidZeroXrb @ 0x1C000CDA8 (RaidZeroXrb.c)
 *     StorpTelemetryCollectErrorData @ 0x1C000D328 (StorpTelemetryCollectErrorData.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C000D5B4 (StorpTelemetryConstructErrorEntry.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C000D948 (RaidBusEnumeratorProbeLunZero.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C000F9A8 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C000FDA0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0010FDC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C0011890 (RaidQueryCrashdumpFunctions.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C0011960 (RaidGetTelemetryLogPageIds.c)
 *     RaidInitializeDeviceQueue @ 0x1C00122D0 (RaidInitializeDeviceQueue.c)
 *     RaidAdapterRescanBus @ 0x1C0012B98 (RaidAdapterRescanBus.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0012FEC (RaidBusEnumeratorVisitUnit.c)
 *     RaidAdapterEnumerateBus @ 0x1C00133A0 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C00134B0 (RaidBusEnumeratorGetLunList.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0013810 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0013BF0 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C001432C (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C00144CC (RaidBusEnumeratorBuildReportLuns.c)
 *     StorDeleteScsiIdentity @ 0x1C0014ABC (StorDeleteScsiIdentity.c)
 *     RaidUnitAllocateResources @ 0x1C00150DC (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C0015494 (RaidZeroUnit.c)
 *     RaUnitStreamsIoctl @ 0x1C0015550 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0015698 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C0015B78 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaidQueryD3ColdInterface @ 0x1C0015FE0 (RaidQueryD3ColdInterface.c)
 *     RtlStringCchPrintfExW @ 0x1C0016720 (RtlStringCchPrintfExW.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C00169A0 (RaidUnitUnRegisterInterfaces.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0017620 (RaidBusEnumeratorProcessNewUnit.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C0023DC4 (InitializeBusesWithVmLunsBitmap.c)
 *     RaGetProtocolCommandEffects @ 0x1C0024A04 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHack @ 0x1C0026278 (RaidAdapterHack.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0026684 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C0026840 (RaidAdapterLogIoError.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C0026E58 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C0027B28 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0027E74 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00281D4 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterTargetedRescan @ 0x1C0029428 (RaidAdapterTargetedRescan.c)
 *     RaidCreateAdapter @ 0x1C0029B00 (RaidCreateAdapter.c)
 *     RaidInitializeCryptoEngine @ 0x1C002A560 (RaidInitializeCryptoEngine.c)
 *     RaidInitializePerfOptsPassive @ 0x1C002AD18 (RaidInitializePerfOptsPassive.c)
 *     RaidPowerSettingCallback @ 0x1C002B730 (RaidPowerSettingCallback.c)
 *     RaidCreateDeferredQueue @ 0x1C002C8F8 (RaidCreateDeferredQueue.c)
 *     McGenControlCallbackV2 @ 0x1C002CB00 (McGenControlCallbackV2.c)
 *     RaSqmLogAdapterStatistics @ 0x1C002CFCC (RaSqmLogAdapterStatistics.c)
 *     RaSqmLogScsiPassthroughStatistics @ 0x1C002D2B4 (RaSqmLogScsiPassthroughStatistics.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C002D97C (RaidZoneWriteGroupListSearchRequest.c)
 *     StorPortDebugPrint @ 0x1C00301D0 (StorPortDebugPrint.c)
 *     StorPortFreeRegistryBuffer @ 0x1C00305D0 (StorPortFreeRegistryBuffer.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C00315E0 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C00317EC (StorpAdapterInitializePoFxPower.c)
 *     StorpInitializeTimer @ 0x1C0033130 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C00332B0 (StorpInitializeWorkItem.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0033890 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C00352CC (RaidRegisterForRuntimePowerManagement.c)
 *     RaidRegisterPerfStates @ 0x1C00357C8 (RaidRegisterPerfStates.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C0035FA0 (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     StorPortAdapterPowerControl @ 0x1C0036760 (StorPortAdapterPowerControl.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C0038690 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C00387CC (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildQueryBootLunsBufferForMiniport @ 0x1C00389EC (RaBuildQueryBootLunsBufferForMiniport.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C0038A98 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C0038BD0 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetBootLunBufferForMiniport @ 0x1C0038CC0 (RaBuildSetBootLunBufferForMiniport.c)
 *     RaBuildSetTemperatureThresholdBufferForMiniport @ 0x1C0038DB0 (RaBuildSetTemperatureThresholdBufferForMiniport.c)
 *     RaidAllocateAddressMapping @ 0x1C0039528 (RaidAllocateAddressMapping.c)
 *     RaidLogAllocationFailure @ 0x1C00398B4 (RaidLogAllocationFailure.c)
 *     StorCreateSystemLogEntry @ 0x1C0039C0C (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C0039ED4 (StorLogIoError.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C003A538 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitGetQOSIoctl @ 0x1C003A92C (RaUnitGetQOSIoctl.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003CDF0 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C003CF08 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C003DF0C (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C003E428 (RtlStringExHandleOtherFlagsW.c)
 *     DllInitialize @ 0x1C003E720 (DllInitialize.c)
 *     StorCreateIoGateway @ 0x1C003FD24 (StorCreateIoGateway.c)
 *     StorEtwEnableCallback @ 0x1C0040714 (StorEtwEnableCallback.c)
 *     StorpInitializePerfTelemetry @ 0x1C0043214 (StorpInitializePerfTelemetry.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0043788 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C00462D4 (StorpTelemetryNvmeGetLogPage.c)
 *     StorpTelemetrySendUnitQos @ 0x1C0046C64 (StorpTelemetrySendUnitQos.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C0046F2C (FillBufferWithDriverTelemetryDump.c)
 *     DeviceIdShimStorageDeviceIdCompletionHook @ 0x1C00474A0 (DeviceIdShimStorageDeviceIdCompletionHook.c)
 *     RaidMachineRequireIoPortResource @ 0x1C004793C (RaidMachineRequireIoPortResource.c)
 *     AsciiToWChar @ 0x1C0047A70 (AsciiToWChar.c)
 *     PortAllocateRegistryBuffer @ 0x1C0047AE4 (PortAllocateRegistryBuffer.c)
 *     PortBuildRegKeyName @ 0x1C0047B74 (PortBuildRegKeyName.c)
 *     PortMiniportRegistryRead @ 0x1C0047CA0 (PortMiniportRegistryRead.c)
 *     PortMiniportRegistryWrite @ 0x1C0047EB0 (PortMiniportRegistryWrite.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C0048EC0 (PortpPassThroughZeroUnusedBuffers.c)
 *     PortTraceInitGlobalLogger @ 0x1C004904C (PortTraceInitGlobalLogger.c)
 *     PortTraceInitTracing @ 0x1C00492B4 (PortTraceInitTracing.c)
 *     StorSqmAddToStream @ 0x1C004949C (StorSqmAddToStream.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C005E458 (RaGetUnitStorageDeviceProperty.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C005EA94 (RaUnitQueryCapabilitiesIrp.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C005EE30 (PortWdmGetDeviceCapabilities.c)
 *     RaidPrepareSrbForReuse @ 0x1C005F548 (RaidPrepareSrbForReuse.c)
 *     PortRegistryRead @ 0x1C005F9B4 (PortRegistryRead.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C005FBD8 (RaUnitRegisterForIdleDetection.c)
 *     RaidUnitGetDeviceParameters @ 0x1C005FE64 (RaidUnitGetDeviceParameters.c)
 *     PortRegistryReadWithHandle @ 0x1C00605A4 (PortRegistryReadWithHandle.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C0060DBC (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0060F20 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C0060FA4 (StorpInititalizePerUnitPerfTelemetry.c)
 *     RaidGetStorageMiniportProperty @ 0x1C00610E0 (RaidGetStorageMiniportProperty.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C0062954 (RaidAdapterConnectMSIInterrupt.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C0062AD8 (RaidAdapterConnectNonMSIInterrupt.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C0062BAC (RaidAdapterCreateDriverInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C0062DC8 (RaidAdapterCreateDumpInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00632F8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0063E98 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidInitializeAdapter @ 0x1C0064BA8 (RaidInitializeAdapter.c)
 *     RaCreateBus @ 0x1C00653C8 (RaCreateBus.c)
 *     RaDeleteBus @ 0x1C00653EC (RaDeleteBus.c)
 *     RaidCreateDma @ 0x1C0065458 (RaidCreateDma.c)
 *     RaidDeleteDma @ 0x1C0065478 (RaidDeleteDma.c)
 *     RaidInitializeDma @ 0x1C00654C0 (RaidInitializeDma.c)
 *     RaCreateDriver @ 0x1C006562C (RaCreateDriver.c)
 *     RaSaveDriverInitData @ 0x1C0065834 (RaSaveDriverInitData.c)
 *     WppTraceCallback @ 0x1C0065E60 (WppTraceCallback.c)
 *     RaCreateMiniport @ 0x1C00660C0 (RaCreateMiniport.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C00661C4 (RiAllocateMiniportDeviceExtension.c)
 *     RaInitializeConfiguration @ 0x1C0066364 (RaInitializeConfiguration.c)
 *     RaidUnitAddAclToVmDevices @ 0x1C0067014 (RaidUnitAddAclToVmDevices.c)
 *     RaidUnitCreateDumpData @ 0x1C00671BC (RaidUnitCreateDumpData.c)
 *     RaidUnitCreateDumpInfo @ 0x1C00672DC (RaidUnitCreateDumpInfo.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0068720 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughSrbInitialize @ 0x1C0069238 (PortPassThroughSrbInitialize.c)
 *     PortpErrorInitRecords @ 0x1C0069608 (PortpErrorInitRecords.c)
 *     StorPortNotificationVrfy @ 0x1C006A3F0 (StorPortNotificationVrfy.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}

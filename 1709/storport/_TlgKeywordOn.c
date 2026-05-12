/*
 * XREFs of _TlgKeywordOn @ 0x1C0002C98
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001390 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C0002174 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpLogPerAdapterStatistics @ 0x1C00029EC (StorpLogPerAdapterStatistics.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C0003610 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0003E1C (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C0004484 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017E0C (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCompleteInitialization @ 0x1C0018904 (RaidAdapterCompleteInitialization.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C001900C (RaidRegisterForRuntimePowerManagement.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001B730 (RaUnitTelemetryIdIoctl.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C001D3F4 (StorpTelemetryMiniportEventUnit.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C001E380 (StorpLogPhysicalTopologyInfo.c)
 *     RaidAdapterResetBus @ 0x1C002E0E4 (RaidAdapterResetBus.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0037960 (RaidAdapterSetMaxOperationalPower.c)
 *     RaUnitStartResetIo @ 0x1C003CE38 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003E190 (RaidUnitCompleteResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C004335C (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0043730 (StorpCSExitTelemetry.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C0043E34 (StorpLogRegisterAdapterPerfStates.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0043FEC (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C0044538 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0044A74 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0044D88 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C0045190 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C00454B8 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C00458E8 (StorpTelemetryMarkUnitResponsive.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0045A54 (StorpTelemetryMarkUnitUnresponsive.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C0045BF8 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C004603C (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C006110C (RaUnitStartDeviceIrp.c)
 *     RaidInitializeAdapter @ 0x1C0061E4C (RaidInitializeAdapter.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0067A28 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword || (keyword & qword_1C0056070) != 0 && (keyword & qword_1C0056078) == qword_1C0056078 )
    return 1;
  return v2;
}

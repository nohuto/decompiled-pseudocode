/*
 * XREFs of _TlgKeywordOn @ 0x1C00016F0
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C00011AC (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0001F3C (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C0003D9C (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpLogPerAdapterStatistics @ 0x1C0004868 (StorpLogPerAdapterStatistics.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C0004D40 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C000573C (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C000E57C (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000FB38 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C0017994 (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterCompleteInitialization @ 0x1C00255D4 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterResetBus @ 0x1C00277B8 (RaidAdapterResetBus.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0034F80 (RaidAdapterSetMaxOperationalPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C00352CC (RaidRegisterForRuntimePowerManagement.c)
 *     RaUnitStartResetIo @ 0x1C003B464 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003C7A0 (RaidUnitCompleteResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C00426B0 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0042A84 (StorpCSExitTelemetry.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0043788 (StorpLogPhysicalTopologyInfo.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C0043D00 (StorpLogRegisterAdapterPerfStates.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0043EB8 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C00443EC (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0044910 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0044C24 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C004502C (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C0045354 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C0045784 (StorpTelemetryMarkUnitResponsive.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C00458F0 (StorpTelemetryMarkUnitUnresponsive.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C0045B1C (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C0045E20 (StorpTelemetryMiniportEventUnit.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C0046410 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C006013C (RaUnitStartDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C006498C (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidInitializeAdapter @ 0x1C0064BA8 (RaidInitializeAdapter.c)
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

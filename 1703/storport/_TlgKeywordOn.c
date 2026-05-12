/*
 * XREFs of _TlgKeywordOn @ 0x1C0002C68
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001374 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpLogPerAdapterStatistics @ 0x1C0001A10 (StorpLogPerAdapterStatistics.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C0002124 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C0002748 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C0003248 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0003E70 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017C80 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C0018EB8 (RaidRegisterForRuntimePowerManagement.c)
 *     RaidAdapterCompleteInitialization @ 0x1C0019510 (RaidAdapterCompleteInitialization.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001BB10 (RaUnitTelemetryIdIoctl.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C001C4D4 (StorpTelemetryMiniportEventUnit.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C001D574 (StorpLogPhysicalTopologyInfo.c)
 *     RaidAdapterResetBus @ 0x1C002D15C (RaidAdapterResetBus.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0035CB0 (RaidAdapterSetMaxOperationalPower.c)
 *     RaUnitStartResetIo @ 0x1C003B0F4 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003C870 (RaidUnitCompleteResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C004272C (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0042B08 (StorpCSExitTelemetry.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C004320C (StorpLogRegisterAdapterPerfStates.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C00433C8 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C0043918 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0043E64 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C004417C (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C0044584 (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C00448AC (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C0044CD8 (StorpTelemetryMarkUnitResponsive.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0044E44 (StorpTelemetryMarkUnitUnresponsive.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C0044FE8 (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00452EC (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C005ED90 (RaUnitStartDeviceIrp.c)
 *     RaidInitializeAdapter @ 0x1C005F66C (RaidInitializeAdapter.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00644E4 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword || (keyword & qword_1C0055020) != 0 && (keyword & qword_1C0055028) == qword_1C0055028 )
    return 1;
  return v2;
}

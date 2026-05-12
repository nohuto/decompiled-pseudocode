/*
 * XREFs of _TlgCreateWsz @ 0x1C00016B0
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C00011AC (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C0003D9C (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C0004D40 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000FB38 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCompleteInitialization @ 0x1C00255D4 (RaidAdapterCompleteInitialization.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0043788 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0043EB8 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C00443EC (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0044910 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0044C24 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C004502C (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C0045354 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C0045B1C (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C0046410 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C006013C (RaUnitStartDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C006498C (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( pwsz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( pwsz[v2] );
  }
  pDesc->Reserved = 0;
  if ( !pwsz )
    pwsz = (LPCWSTR)&unk_1C004A5F4;
  pDesc->Ptr = (unsigned __int64)pwsz;
  pDesc->Size = 2 * v2 + 2;
}

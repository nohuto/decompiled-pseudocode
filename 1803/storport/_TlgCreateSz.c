/*
 * XREFs of _TlgCreateSz @ 0x1C00015D8
 * Callers:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C00011AC (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C0003D9C (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C0004D40 (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0043788 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0043EB8 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C00443EC (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0044910 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0044C24 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C004502C (StorpTelemetryLogUnitQosDataMeasures.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C0045354 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 *     StorpTelemetryMiniportEventAdapter @ 0x1C0045B1C (StorpTelemetryMiniportEventAdapter.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C0045E20 (StorpTelemetryMiniportEventUnit.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C0046410 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     RaUnitStartDeviceIrp @ 0x1C006013C (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( psz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  if ( !psz )
    psz = (LPCSTR)&unk_1C004A5F0;
  pDesc->Reserved = 0;
  pDesc->Ptr = (unsigned __int64)psz;
  pDesc->Size = v2 + 1;
}

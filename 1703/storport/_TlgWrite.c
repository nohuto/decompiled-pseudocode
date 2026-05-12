/*
 * XREFs of _TlgWrite @ 0x1C0002BC8
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
 *     RaidUnitResetTarget @ 0x1C003E240 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C003E4F0 (RaidUnitResetUnit.c)
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

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  unsigned int v6; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = (unsigned __int64)EventInformation;
  v6 = *(unsigned __int16 *)EventInformation;
  pData[1].Ptr = (unsigned __int64)pEventMetadata + 11;
  pData->Size = v6;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, cData, pData);
}

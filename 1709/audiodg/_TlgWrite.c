/*
 * XREFs of _TlgWrite @ 0x140036120
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000BDA0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000C9D0 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140012CB4 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140013260 (-GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x140013380 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140013690 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140013940 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140035300 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1400358A8 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x140035A28 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?OnHang@CWatchdogTimer@@AEAAXXZ @ 0x14003B048 (-OnHang@CWatchdogTimer@@AEAAXXZ.c)
 *     ?ProcessHasBeenRunningLongEnough@CWatchdogTimer@@AEAAJPEA_N@Z @ 0x14003B1B8 (-ProcessHasBeenRunningLongEnough@CWatchdogTimer@@AEAAJPEA_N@Z.c)
 *     ?ShouldReportHangToWatson@CWatchdogTimer@@AEAA_NXZ @ 0x14003B83C (-ShouldReportHangToWatson@CWatchdogTimer@@AEAA_NXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004823C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140056F64 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140057014 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140057180 (-LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     ?GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x1400587B0 (-GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 *     ?LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z @ 0x14005C970 (-LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z.c)
 *     ?LogClientIndexMap@CSpatialCrossProcessEndpointTraceLogger@@QEAAXIII_NJ@Z @ 0x14005CA64 (-LogClientIndexMap@CSpatialCrossProcessEndpointTraceLogger@@QEAAXIII_NJ@Z.c)
 *     ?LogEmptyBufferCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x14005CB54 (-LogEmptyBufferCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 *     ?LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z @ 0x14005CBDC (-LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z.c)
 *     ?LogGetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x14005CC7C (-LogGetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 *     ?LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERTY@@_N@Z @ 0x14005CD04 (-LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERT.c)
 *     ?LogGetPosition@CSpatialCrossProcessEndpointTraceLogger@@QEAAX_K00000@Z @ 0x14005CDB8 (-LogGetPosition@CSpatialCrossProcessEndpointTraceLogger@@QEAAX_K00000@Z.c)
 *     ?LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x14005CE98 (-LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 *     ?LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z @ 0x14005CF20 (-LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z.c)
 *     ?LogPulseEndpoint@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z @ 0x14005CFC0 (-LogPulseEndpoint@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z.c)
 *     ?LogReleaseInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z @ 0x14005D060 (-LogReleaseInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z.c)
 *     ?LogSetClientEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXXZ @ 0x14005D100 (-LogSetClientEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXXZ.c)
 *     ?LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z @ 0x14005D16C (-LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z.c)
 *     ?LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z @ 0x14005D204 (-LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z.c)
 *     ?LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005D280 (-LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     ?LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005D410 (-LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXX.c)
 *     ?LogTelemetry@CSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005D640 (-LogTelemetry@CSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAX.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005D9E0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005DA78 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?SpatialCPTraceLoggingWarningHelper@@YAXPEBDI0J@Z @ 0x14005DAFC (-SpatialCPTraceLoggingWarningHelper@@YAXPEBDI0J@Z.c)
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
  ULONG v7; // ecx
  _DWORD v9[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9[0] = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  v9[1] = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  v10 = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = *((_QWORD *)hProvider + 1);
  v7 = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v7;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwEventWriteTransfer(*((_QWORD *)hProvider + 4), v9, 0LL, 0LL, cData, pData);
}

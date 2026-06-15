/*
 * XREFs of _TlgWrite @ 0x140034DB0
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000DBF0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x14000DFD0 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000E540 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000E870 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14000F300 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x1400130F0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x1400133C0 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014B14 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140034170 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1400344C8 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x14003464C (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?OnHang@?$CWatchdogTimer@$01@@AEAAXXZ @ 0x1400398E8 (-OnHang@-$CWatchdogTimer@$01@@AEAAXXZ.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$01@@AEAAJPEA_N@Z @ 0x140039BA8 (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$01@@AEAAJPEA_N@Z.c)
 *     ?ShouldReportHangToWatson@?$CWatchdogTimer@$01@@AEAA_NXZ @ 0x14003A23C (-ShouldReportHangToWatson@-$CWatchdogTimer@$01@@AEAA_NXZ.c)
 *     ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x140040360 (-Resume@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1400461A0 (-GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004643C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140054BE4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140054C94 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140054D90 (-LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     ?GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x140056400 (-GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 *     ?LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z @ 0x140059DC0 (-LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z.c)
 *     ?LogClientIndexMap@CSpatialCrossProcessEndpointTraceLogger@@QEAAXIII_NJ@Z @ 0x140059EB8 (-LogClientIndexMap@CSpatialCrossProcessEndpointTraceLogger@@QEAAXIII_NJ@Z.c)
 *     ?LogEmptyBufferCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x140059FA4 (-LogEmptyBufferCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 *     ?LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z @ 0x14005A02C (-LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z.c)
 *     ?LogGetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x14005A0D0 (-LogGetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 *     ?LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERTY@@_N@Z @ 0x14005A158 (-LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERT.c)
 *     ?LogGetPosition@CSpatialCrossProcessEndpointTraceLogger@@QEAAX_K00000@Z @ 0x14005A208 (-LogGetPosition@CSpatialCrossProcessEndpointTraceLogger@@QEAAX_K00000@Z.c)
 *     ?LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x14005A2EC (-LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 *     ?LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z @ 0x14005A374 (-LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z.c)
 *     ?LogPulseEndpoint@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z @ 0x14005A418 (-LogPulseEndpoint@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z.c)
 *     ?LogReleaseInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z @ 0x14005A4B4 (-LogReleaseInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z.c)
 *     ?LogSetClientEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXXZ @ 0x14005A550 (-LogSetClientEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXXZ.c)
 *     ?LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z @ 0x14005A5BC (-LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z.c)
 *     ?LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z @ 0x14005A654 (-LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z.c)
 *     ?LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005A6D0 (-LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     ?LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005A860 (-LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXX.c)
 *     ?LogTelemetry@CSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005AAA0 (-LogTelemetry@CSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAX.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005AEE8 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?SpatialCPTraceLoggingWarningHelper@@YAXPEBDI0J@Z @ 0x14005AF6C (-SpatialCPTraceLoggingWarningHelper@@YAXPEBDI0J@Z.c)
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
  return EtwEventWriteTransfer(*((_QWORD *)hProvider + 4), v9, pActivityId, 0LL, cData, pData);
}

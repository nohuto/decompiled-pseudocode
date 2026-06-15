/*
 * XREFs of _TlgKeywordOn @ 0x1800266D8
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800037E0 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CF40 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000D760 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x18000D900 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18001738C (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018220 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x180019E70 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ@Z @ 0x180025F94 (-TraceResult@AtmosCheck@@AEAAXJ@Z.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x180028080 (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x18002D7BC (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x180035840 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 *     ?LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z @ 0x1800397D0 (-LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18003DF68 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180041F34 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 *     ??$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXAEBU_AEC_POLICY_RESULTS@@PEBG@Z @ 0x180046900 (--$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXAEBU_AEC_POLICY_RESULTS@@PEBG@Z.c)
 *     ??$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBG@Z @ 0x180047320 (--$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBG@Z.c)
 *     ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@@Z @ 0x180048130 (-SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@@Z.c)
 *     ?Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z @ 0x18007F6C0 (-Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z.c)
 *     ?Fire@AudioSrvVolumeTelemetrySessionVolume@@EEAAX_KI@Z @ 0x18007F7E0 (-Fire@AudioSrvVolumeTelemetrySessionVolume@@EEAAX_KI@Z.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x18007F8DC (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18007F9F0 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReceiveHang@CAudioHealthMonitor@@UEAAXPEBGPEBU_TlgProvider_t@@@Z @ 0x180080080 (-ReceiveHang@CAudioHealthMonitor@@UEAAXPEBGPEBU_TlgProvider_t@@@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x18008FAE0 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     TraceLoggingProviderEnabled @ 0x180097100 (TraceLoggingProviderEnabled.c)
 *     ?ReportHang@CWatchdogTimer@@AEAAXXZ @ 0x1800A1534 (-ReportHang@CWatchdogTimer@@AEAAXXZ.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800AA4D4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?LogEPCProductionAssert@@YAX_KPEBG@Z @ 0x1800C14A4 (-LogEPCProductionAssert@@YAX_KPEBG@Z.c)
 *     ?LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z @ 0x1800C1548 (-LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z.c)
 *     ?NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x1800C61A8 (-NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z.c)
 *     ?LogTelemetry@CSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAAXXZ @ 0x1800C6E90 (-LogTelemetry@CSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAAXXZ.c)
 *     ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAUIMMDevice@@PEAUIPolicyConfig@@PEAGAEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800C753C (-SetDesiredFormat@CSpatialProperties@@AEAA_NPEAUIMMDevice@@PEAUIPolicyConfig@@PEAGAEBUWAVEFORMAT.c)
 *     ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800CD6A0 (-OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x1800CF1EC (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x1800D202C (Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword
    || (keyword & *((_QWORD *)hProvider + 2)) != 0
    && (keyword & *((_QWORD *)hProvider + 3)) == *((_QWORD *)hProvider + 3) )
  {
    return 1;
  }
  return v2;
}

/*
 * XREFs of _TlgCreateWsz @ 0x180043DA4
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18002E010 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180032BE0 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035930 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x180038C5C (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x180047D98 (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 *     ServicePowerEvent @ 0x180049BB4 (ServicePowerEvent.c)
 *     ??$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180050128 (--$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180050E64 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540EC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     ?MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x180054E10 (-MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x180054F58 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVE.c)
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x18005DD70 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x1800961DC (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z @ 0x18009BB40 (-Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z.c)
 *     ?Fire@AudioSrvVolumeTelemetrySessionVolume@@EEAAX_KI@Z @ 0x18009BC60 (-Fire@AudioSrvVolumeTelemetrySessionVolume@@EEAAX_KI@Z.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x18009BD38 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18009BE14 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z @ 0x18009C090 (-LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18009D970 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x18009DFF0 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 *     ?OnHang@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x18009F38C (-OnHang@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 *     ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x1800A11C0 (-OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800A1710 (-SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 *     ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x1800A23F0 (-HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ.c)
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1800A302C (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x1800AC664 (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800AD460 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800BCB5C (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BCD64 (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800BD100 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BD81C (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800BE670 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     PolicyConfigSetDeviceFormat @ 0x1800BFCC0 (PolicyConfigSetDeviceFormat.c)
 *     PolicyConfigSetProcessingPeriod @ 0x1800BFF60 (PolicyConfigSetProcessingPeriod.c)
 *     ?AbortStartStream@CVADServer@@UEAAJXZ @ 0x1800C06F0 (-AbortStartStream@CVADServer@@UEAAJXZ.c)
 *     ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x1800C1FF4 (-NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z.c)
 *     ?PreStartStream@CVADServer@@UEAAJW4VadStreamStateChangeReason@@@Z @ 0x1800C2260 (-PreStartStream@CVADServer@@UEAAJW4VadStreamStateChangeReason@@@Z.c)
 *     _lambda_af28356267c3f0f0f506d99a7f614f80_::operator() @ 0x1800C67B4 (_lambda_af28356267c3f0f0f506d99a7f614f80_--operator().c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800C68EC (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800CA240 (-OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800CA450 (-OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     _lambda_99a80b67184a801990f45f5b271d3c4a_::operator() @ 0x1800CF71C (_lambda_99a80b67184a801990f45f5b271d3c4a_--operator().c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800CFF20 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x1800D14C0 (-FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA-AVSyncLoc.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800D3244 (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800D9A80 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@.c)
 *     ServiceDeviceEvent @ 0x1800E6D14 (ServiceDeviceEvent.c)
 *     ??$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800EFC34 (--$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengi.c)
 *     ?LogEPCProductionAssert@@YAX_KPEBG@Z @ 0x1800EFE80 (-LogEPCProductionAssert@@YAX_KPEBG@Z.c)
 *     ?LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z @ 0x1800EFF24 (-LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z.c)
 *     ?LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z @ 0x1800EFFF0 (-LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z.c)
 *     ?LogVolumePolicyChange@CSpatialAudioResourceManagerTraceLogger@@QEAAXKPEBG@Z @ 0x1800F6274 (-LogVolumePolicyChange@CSpatialAudioResourceManagerTraceLogger@@QEAAXKPEBG@Z.c)
 *     ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x1800F6600 (-Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z.c)
 *     ?Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1800F6E38 (-Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPA.c)
 *     ?LogEndpointRendererSelectionMode@CSpatialAudioResourceManagerTraceLogger@@QEAAXW4SpatialRendererSelectionMode@@PEBG@Z @ 0x1800F8560 (-LogEndpointRendererSelectionMode@CSpatialAudioResourceManagerTraceLogger@@QEAAXW4SpatialRendere.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z @ 0x1800FDB98 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x1800FDDD0 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 *     ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAUIMMDevice@@PEAUIPolicyConfig@@PEAGAEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800FEB34 (-SetDesiredFormat@CSpatialProperties@@AEAA_NPEAUIMMDevice@@PEAUIPolicyConfig@@PEAGAEBUWAVEFORMAT.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x1801090DC (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x18010CC58 (Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK.c)
 *     PdcpFireClientCallWatchdog @ 0x18010D0C0 (PdcpFireClientCallWatchdog.c)
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
    pwsz = &word_180133238;
  pDesc->Ptr = (ULONGLONG)pwsz;
  pDesc->Size = 2 * v2 + 2;
}

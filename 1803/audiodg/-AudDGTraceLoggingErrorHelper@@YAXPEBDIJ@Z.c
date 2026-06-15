/*
 * XREFs of ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001C78 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001D84 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002008 (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM.c)
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140003850 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140005F00 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140006B20 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x140008670 (-ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140008800 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x1400088C0 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x1400089A0 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x1400093B0 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009CB8 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140009D30 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140009F30 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x14000A5F0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B290 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000B3B0 (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x14000B448 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B540 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000C180 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000CB04 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_S.c)
 *     ?EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x14000CBB0 (-EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000CF10 (-IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000D070 (-IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000D750 (-IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000D7B0 (-IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000DA10 (-GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x14000DF40 (-ResetAPOs@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000E870 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000F5F0 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x14000FA30 (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140010660 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140010960 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x1400115D0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?InnerInitializeAPO@CSystemAudioDeviceSharedBase@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x140011D20 (-InnerInitializeAPO@CSystemAudioDeviceSharedBase@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140012AF0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z @ 0x140014814 (-InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z.c)
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140014BA0 (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x14001A42C (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140034170 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140036E5C (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400381F0 (-CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DE.c)
 *     ?GetFormat@CSystemAudioDeviceExclusive@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140038500 (-GetFormat@CSystemAudioDeviceExclusive@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetLatency@CSystemAudioDeviceExclusive@@UEAAJ_KPEA_J@Z @ 0x140038610 (-GetLatency@CSystemAudioDeviceExclusive@@UEAAJ_KPEA_J@Z.c)
 *     ?GetProtectedOutputController@CSystemAudioDeviceExclusive@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140038720 (-GetProtectedOutputController@CSystemAudioDeviceExclusive@@UEAAJIPEAPEAUIAudioProtectedOutputCon.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140038840 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEA_K0@Z @ 0x140038E10 (-GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEA_K0@Z.c)
 *     ?GetEndpointBufferSize@CSystemAudioDeviceSharedBase@@UEAAJPEAIPEAM@Z @ 0x140038F20 (-GetEndpointBufferSize@CSystemAudioDeviceSharedBase@@UEAAJPEAIPEAM@Z.c)
 *     ?GetFormat@CSystemAudioDeviceSharedBase@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140039070 (-GetFormat@CSystemAudioDeviceSharedBase@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z @ 0x140039180 (-GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z.c)
 *     ?GetLatency@CSystemAudioDeviceSharedBase@@UEAAJ_KPEA_J@Z @ 0x140039380 (-GetLatency@CSystemAudioDeviceSharedBase@@UEAAJ_KPEA_J@Z.c)
 *     ?GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z @ 0x140039490 (-GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z.c)
 *     ?GetProtectedOutputController@CSystemAudioDeviceSharedBase@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x1400395F0 (-GetProtectedOutputController@CSystemAudioDeviceSharedBase@@UEAAJIPEAPEAUIAudioProtectedOutputCo.c)
 *     ?ResetEndpoint@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x14003A010 (-ResetEndpoint@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 *     ?CreateStream@CSystemAudioDeviceOffload@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003B490 (-CreateStream@CSystemAudioDeviceOffload@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVI.c)
 *     ?GetFormat@CSystemAudioDeviceOffload@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14003B7D0 (-GetFormat@CSystemAudioDeviceOffload@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetLatency@CSystemAudioDeviceOffload@@UEAAJ_KPEA_J@Z @ 0x14003B910 (-GetLatency@CSystemAudioDeviceOffload@@UEAAJ_KPEA_J@Z.c)
 *     ?GetMeterChannelCount@CSystemAudioDeviceOffload@@UEAAJPEAI@Z @ 0x14003BA20 (-GetMeterChannelCount@CSystemAudioDeviceOffload@@UEAAJPEAI@Z.c)
 *     ?GetMeteringData@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_METER_DATA@@I@Z @ 0x14003BB00 (-GetMeteringData@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_METER_DATA@@I@Z.c)
 *     ?GetMute@CSystemAudioDeviceOffload@@UEAAJPEAE@Z @ 0x14003BC30 (-GetMute@CSystemAudioDeviceOffload@@UEAAJPEAE@Z.c)
 *     ?GetProtectedOutputController@CSystemAudioDeviceOffload@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14003BD10 (-GetProtectedOutputController@CSystemAudioDeviceOffload@@UEAAJIPEAPEAUIAudioProtectedOutputContr.c)
 *     ?GetVolumeChannelCount@CSystemAudioDeviceOffload@@UEAAJPEAI@Z @ 0x14003BE30 (-GetVolumeChannelCount@CSystemAudioDeviceOffload@@UEAAJPEAI@Z.c)
 *     ?GetVolumeCoefficients@CSystemAudioDeviceOffload@@UEAAJIPEAM@Z @ 0x14003BF10 (-GetVolumeCoefficients@CSystemAudioDeviceOffload@@UEAAJIPEAM@Z.c)
 *     ?Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003BFE0 (-Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCal.c)
 *     ?SetMute@CSystemAudioDeviceOffload@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z @ 0x14003C370 (-SetMute@CSystemAudioDeviceOffload@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z.c)
 *     ?SetVolumeCoefficients@CSystemAudioDeviceOffload@@UEAAJIPEAMPEA_JW4AUDIO_CURVE_TYPE@@1@Z @ 0x14003C450 (-SetVolumeCoefficients@CSystemAudioDeviceOffload@@UEAAJIPEAMPEA_JW4AUDIO_CURVE_TYPE@@1@Z.c)
 *     ?GetMeterChannelCount@CSystemAudioDeviceOffloadGraph@@UEAAJPEAI@Z @ 0x14003CDB0 (-GetMeterChannelCount@CSystemAudioDeviceOffloadGraph@@UEAAJPEAI@Z.c)
 *     ?GetMeteringData@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_METER_DATA@@I@Z @ 0x14003CE90 (-GetMeteringData@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_METER_DATA@@I@Z.c)
 *     ?GetMute@CSystemAudioDeviceOffloadGraph@@UEAAJPEAE@Z @ 0x14003CFC0 (-GetMute@CSystemAudioDeviceOffloadGraph@@UEAAJPEAE@Z.c)
 *     ?GetVolumeChannelCount@CSystemAudioDeviceOffloadGraph@@UEAAJPEAI@Z @ 0x14003D0A0 (-GetVolumeChannelCount@CSystemAudioDeviceOffloadGraph@@UEAAJPEAI@Z.c)
 *     ?GetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAM@Z @ 0x14003D180 (-GetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAM@Z.c)
 *     ?SetMute@CSystemAudioDeviceOffloadGraph@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z @ 0x14003D6A0 (-SetMute@CSystemAudioDeviceOffloadGraph@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z.c)
 *     ?SetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAMPEA_JW4AUDIO_CURVE_TYPE@@1@Z @ 0x14003D780 (-SetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAMPEA_JW4AUDIO_CURVE_TYPE@@1@Z.c)
 *     ?CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003D994 (-CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessin.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003DA40 (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003DE30 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14003E408 (-GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z @ 0x14003E498 (-SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14003E694 (-CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudio.c)
 *     ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14003EC90 (-CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPE.c)
 *     ?GetDescription@CProtectedOutputController@@UEAAJPEAKPEAU_GUID@@0PEAPEAU2@@Z @ 0x14003EE10 (-GetDescription@CProtectedOutputController@@UEAAJPEAKPEAU_GUID@@0PEAPEAU2@@Z.c)
 *     ?RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConstriction@@@Z @ 0x14003F170 (-RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConst.c)
 *     ?SetPolicy@CVirtualProtectedOutput@@UEAAJW4EAudioConstriction@@@Z @ 0x14003F230 (-SetPolicy@CVirtualProtectedOutput@@UEAAJW4EAudioConstriction@@@Z.c)
 *     ?SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z @ 0x14003F2D0 (-SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z.c)
 *     ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEA_K0@Z @ 0x14003F4E0 (-GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEA_K0@Z.c)
 *     ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x14003F5E0 (-GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z.c)
 *     ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14003F840 (-GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z @ 0x14003F990 (-GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z.c)
 *     ?GetPositionForOffload@CAudioDeviceGraph@@UEAAJPEA_K0@Z @ 0x14003FBB0 (-GetPositionForOffload@CAudioDeviceGraph@@UEAAJPEA_K0@Z.c)
 *     ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x140040130 (-ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x140040448 (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?CreateApoEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x140040690 (-CreateApoEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400407D0 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x140034D80 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 */

void __fastcall AudDGTraceLoggingErrorHelper(LPCSTR psz, int a2, int a3)
{
  TraceLoggingHProvider v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+58h] [rbp+17h] BYREF
  int *v7; // [rsp+68h] [rbp+27h]
  int v8; // [rsp+70h] [rbp+2Fh]
  int v9; // [rsp+74h] [rbp+33h]
  int *v10; // [rsp+78h] [rbp+37h]
  int v11; // [rsp+80h] [rbp+3Fh]
  int v12; // [rsp+84h] [rbp+43h]
  int v13; // [rsp+B0h] [rbp+6Fh] BYREF
  int v14; // [rsp+B8h] [rbp+77h] BYREF

  v14 = a3;
  v13 = a2;
  if ( *(_DWORD *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                    (__int64)psz,
                    lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1] > 2u )
  {
    TlgCreateSz(&pDesc, psz);
    v9 = 0;
    v12 = 0;
    v7 = &v13;
    v8 = 4;
    v11 = 4;
    v10 = &v14;
    TlgWrite(v4, &unk_140070BF7, 0LL, (LPCGUID)v4, 5u, &pData);
  }
}

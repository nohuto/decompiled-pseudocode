/*
 * XREFs of _TlgCreateSz @ 0x180016D60
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_3e6e6990ae6602ba2aad8f5a9254f972__2__1_::Invoke @ 0x180001BA0 (Microsoft--WRL--Details--InvokeHelper_Windows--Foundation--ITypedEventHandler_Windows--Applicati.c)
 *     ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x180001E40 (-IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800037E0 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CF40 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000D600 (-GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000D760 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x18000D900 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012BB0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x180013120 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180013500 (-InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__M.c)
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180016D9C (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18001746C (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180017680 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x180017808 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     ?PrepareToWaitForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18001789C (-PrepareToWaitForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180017938 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180017B18 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180025614 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ@Z @ 0x180025F94 (-TraceResult@AtmosCheck@@AEAAXJ@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180026130 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEA_N00@Z @ 0x180026290 (-PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEA_N00@Z.c)
 *     ?OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18002B5F0 (-OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x18002D7BC (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x18002F6A0 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1800337D0 (-GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBG@Z @ 0x18003BF98 (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBG@Z.c)
 *     ?SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJXZ @ 0x18003C0F0 (-SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJXZ.c)
 *     ?ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x18003C210 (-ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBG@Z @ 0x18003C358 (-RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBG@Z.c)
 *     LogCurrentSettings @ 0x18003D104 (LogCurrentSettings.c)
 *     Create_SpatialAudioConfigureDevice @ 0x1800461F0 (Create_SpatialAudioConfigureDevice.c)
 *     Create_SpatialAudioDevicePropertyWriter @ 0x180046350 (Create_SpatialAudioDevicePropertyWriter.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18007F9F0 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18007FB70 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x1800C5904 (-CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1800C5C5C (-Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPA.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x1800C71DC (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800C81F4 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoder.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800C8790 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800C8C04 (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x1800C9080 (-ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1800C92F0 (-ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSetti.c)
 *     ?ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800C967C (-ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800C9878 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProp.c)
 *     ?AddMetadataFormat@SpatialAudioDevicePropertyWriter@@UEAAJPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x1800C9C70 (-AddMetadataFormat@SpatialAudioDevicePropertyWriter@@UEAAJPEAUISpatialAudioMetadataDictionaryDat.c)
 *     ?SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x1800CA380 (-SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z.c)
 *     ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1800CA530 (-SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialA.c)
 *     ?GetEncoderProperties@SpatialAudioEncoderProperties@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x1800CB170 (-GetEncoderProperties@SpatialAudioEncoderProperties@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z.c)
 *     ?GetEncoderStaticObjectPositionAndVolume@SpatialAudioEncoderProperties@@UEAAJW4AudioObjectType@@PEAM111@Z @ 0x1800CB2B0 (-GetEncoderStaticObjectPositionAndVolume@SpatialAudioEncoderProperties@@UEAAJW4AudioObjectType@@.c)
 *     ?GetEncoderStaticObjectPositionAndVolumeByIndex@SpatialAudioEncoderProperties@@UEAAJIPEAM000@Z @ 0x1800CB4A0 (-GetEncoderStaticObjectPositionAndVolumeByIndex@SpatialAudioEncoderProperties@@UEAAJIPEAM000@Z.c)
 *     ?GetProperties@SpatialAudioEncoderProperties@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x1800CB670 (-GetProperties@SpatialAudioEncoderProperties@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x1800CBAEC (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 *     Create_SpatialAudioEncoderProperties @ 0x1800CBDE0 (Create_SpatialAudioEncoderProperties.c)
 *     ?CopyDictionaryData@SpatialAudioMetadataDictionaryData@@UEAAJPEAEI@Z @ 0x1800CC100 (-CopyDictionaryData@SpatialAudioMetadataDictionaryData@@UEAAJPEAEI@Z.c)
 *     ?GetDictionaryDataLength@SpatialAudioMetadataDictionaryData@@UEAAJPEAI@Z @ 0x1800CC200 (-GetDictionaryDataLength@SpatialAudioMetadataDictionaryData@@UEAAJPEAI@Z.c)
 *     ?GetDictionaryLocalMetadataFormatId@SpatialAudioMetadataDictionaryData@@UEAAJPEAG@Z @ 0x1800CC2F0 (-GetDictionaryLocalMetadataFormatId@SpatialAudioMetadataDictionaryData@@UEAAJPEAG@Z.c)
 *     ?GetDictionaryMetadataFormatId@SpatialAudioMetadataDictionaryData@@UEAAJPEAU_GUID@@@Z @ 0x1800CC3E0 (-GetDictionaryMetadataFormatId@SpatialAudioMetadataDictionaryData@@UEAAJPEAU_GUID@@@Z.c)
 *     Create_MetadataDictionaryData @ 0x1800CC650 (Create_MetadataDictionaryData.c)
 *     ?CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I@Z @ 0x1800CC9B0 (-CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I.c)
 *     Create_SpatialAudioPositionCalc @ 0x1800CD25C (Create_SpatialAudioPositionCalc.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x1800CD47C (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 *     ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800CD6A0 (-OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@.c)
 *     ?ResetAfterWaitingForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x1800CD7DC (-ResetAfterWaitingForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800CDAF0 (s_adGetDeviceGraphWnfStateName.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x1800CE470 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1800CE660 (-GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x1800CE870 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x1800CEC60 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x1800CF1EC (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x1800D37E8 (-NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax
  LPCSTR v4; // rcx

  LODWORD(v2) = 0;
  v4 = MultiByteStr;
  if ( psz )
  {
    v4 = psz;
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  pDesc->Ptr = (ULONGLONG)v4;
  *(_QWORD *)&pDesc->Size = (unsigned int)(v2 + 1);
}

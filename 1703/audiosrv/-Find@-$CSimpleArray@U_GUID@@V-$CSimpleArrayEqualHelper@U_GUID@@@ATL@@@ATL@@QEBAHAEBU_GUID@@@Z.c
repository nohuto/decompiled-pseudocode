/*
 * XREFs of ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x18000C130 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000D390 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000DF80 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000E870 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x1800107FC (-GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180010BE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x180011CC0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x1800334D4 (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18003361C (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x180033678 (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180038FC0 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 *     _lambda_82fd590d05af8f6990bd8d28cab4a19a_::operator() @ 0x180039704 (_lambda_82fd590d05af8f6990bd8d28cab4a19a_--operator().c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180041C10 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180041EF0 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x180042494 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180042940 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJXZ @ 0x180042EA8 (-AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x180043044 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180043230 (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x18004363C (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800461C8 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     _lambda_104fe0bd16c4203916a8d385bc72c031_::operator() @ 0x18004C3D8 (_lambda_104fe0bd16c4203916a8d385bc72c031_--operator().c)
 *     _lambda_667eb01a999704ac1c933d543c16abf4_::operator() @ 0x18004C4DC (_lambda_667eb01a999704ac1c933d543c16abf4_--operator().c)
 *     _lambda_cb1a7eba790d7310050f17c894bfcd12_::operator() @ 0x18004C8E4 (_lambda_cb1a7eba790d7310050f17c894bfcd12_--operator().c)
 *     ?GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18004CE18 (-GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_a.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(__int64 *a1, _QWORD *a2)
{
  int v2; // r8d
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx

  v2 = *((_DWORD *)a1 + 2);
  result = 0LL;
  if ( v2 <= 0 )
    return 0xFFFFFFFFLL;
  v4 = *a1;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v4 + 16LL * (int)result) - *a2;
    if ( !v5 )
      v5 = *(_QWORD *)(v4 + 16LL * (int)result + 8) - a2[1];
    if ( !v5 )
      break;
    result = (unsigned int)(result + 1);
    if ( (int)result >= v2 )
      return 0xFFFFFFFFLL;
  }
  return result;
}

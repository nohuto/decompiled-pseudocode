/*
 * XREFs of ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18005AE7C
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001E900 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18002153C (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18002362C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180081300 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     _lambda_f3af0907113bf748eb1a6fb65ef667f3_::operator() @ 0x1800B0DA0 (_lambda_f3af0907113bf748eb1a6fb65ef667f3_--operator().c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800B2F84 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x1800B38F0 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800B4464 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B541C (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B5F24 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B64E0 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x1800BBF50 (-CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV-$CSi.c)
 *     ?RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArray@@@Z @ 0x1800BD374 (-RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArra.c)
 *     ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x1800BD604 (-SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](__int64 a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
  {
    RaiseException(0xC000008C, 1u, 0, 0LL);
    JUMPOUT(0x18005AEADLL);
  }
  return *(_QWORD *)a1 + 16LL * a2;
}

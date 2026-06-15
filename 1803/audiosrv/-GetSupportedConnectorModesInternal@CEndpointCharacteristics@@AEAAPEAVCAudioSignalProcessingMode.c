/*
 * XREFs of ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180050DD4
 * Callers:
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180050D58 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x180051EB4 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800520A4 (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180052E4C (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180095750 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B94C8 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x1800365C0 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180038520 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 */

char *__fastcall CEndpointCharacteristics::GetSupportedConnectorModesInternal(
        CEndpointCharacteristics *a1,
        int a2,
        int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rsi
  __int64 v7; // rbx

  v3 = a2;
  if ( !a2 && !CEndpointCharacteristics::AreEnhancementsEnabled(a1) )
    return (char *)a1 + 128;
  v6 = v3;
  if ( !a3 )
  {
    v7 = 96 * v3;
    SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)a1 + v7 + 232));
    SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)a1 + v7 + 616));
    SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)a1 + v7 + 1000));
  }
  return (char *)a1 + 16 * v6 + 64;
}

/*
 * XREFs of ?IsSFXModeSupported@CEndpointCharacteristics@@AEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180079F50
 * Callers:
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032FD4 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180033410 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18003361C (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 */

bool __fastcall CEndpointCharacteristics::IsSFXModeSupported(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3)
{
  __int64 v4; // rbx
  BOOL v6; // eax
  int v7; // r8d
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  v6 = CEndpointCharacteristics::AreEnhancementsEnabled(this);
  v7 = 0;
  if ( v6 || (_DWORD)v4 == 3 )
    v7 = 1;
  v9 = (__int128)*a3;
  return SystemEffectDescriptor::IsModeSupportedForStreaming((__int64)this + 96 * v4 + 224, &v9, v7);
}

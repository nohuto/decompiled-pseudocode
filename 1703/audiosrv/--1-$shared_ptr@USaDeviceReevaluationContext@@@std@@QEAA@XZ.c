/*
 * XREFs of ??1?$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x18007B524
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000DF80 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000E870 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180010540 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180010BE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$5 @ 0x18005987C (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$5.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$7 @ 0x180059888 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$7.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$4 @ 0x180059930 (_CAudioResourceManager--DestroyStream_--_1_--dtor$4.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$1 @ 0x180059F9C (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$1.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$23 @ 0x180059FB4 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$23.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$45 @ 0x180059FCC (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$45.c)
 *     _CEndpointCharacteristics::GetInitializedSystemEffectInterface_::_1_::dtor$4 @ 0x18005A084 (_CEndpointCharacteristics--GetInitializedSystemEffectInterface_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::GetInitializedSystemEffectInterface_::_1_::dtor$13 @ 0x18005A090 (_CEndpointCharacteristics--GetInitializedSystemEffectInterface_--_1_--dtor$13.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$14 @ 0x18005A0FC (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$14.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$83 @ 0x18005A150 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$83.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$145 @ 0x18005A198 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$145.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$154 @ 0x18005A1A4 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$154.c)
 *     _SystemEffectDescriptor::ResolveAllOverridingChains_::_1_::dtor$8 @ 0x18005A288 (_SystemEffectDescriptor--ResolveAllOverridingChains_--_1_--dtor$8.c)
 *     _SystemEffectDescriptor::GetOverridingChainDescriptorIndex_::_1_::dtor$1 @ 0x18005A2A0 (_SystemEffectDescriptor--GetOverridingChainDescriptorIndex_--_1_--dtor$1.c)
 *     _SystemEffectChainDescriptor::Resolve_::_1_::dtor$0 @ 0x18005A2B0 (_SystemEffectChainDescriptor--Resolve_--_1_--dtor$0.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$19 @ 0x18005A308 (_InitializeStreamAndModeDescriptors_--_1_--dtor$19.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$28 @ 0x18005A314 (_InitializeStreamAndModeDescriptors_--_1_--dtor$28.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$68 @ 0x18005A3A4 (_InitializeStreamAndModeDescriptors_--_1_--dtor$68.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$93 @ 0x18005A3D4 (_InitializeStreamAndModeDescriptors_--_1_--dtor$93.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$0 @ 0x18005B804 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$0.c)
 *     _CWorkFifo::GetWorkItem_::_1_::dtor$0 @ 0x1800C2EDB (_CWorkFifo--GetWorkItem_--_1_--dtor$0.c)
 *     _CWorkFifo::ProcessWorkItem_::_1_::dtor$0 @ 0x1800C385E (_CWorkFifo--ProcessWorkItem_--_1_--dtor$0.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$2 @ 0x1800C4441 (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<SaDeviceReevaluationContext>::~shared_ptr<SaDeviceReevaluationContext>(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}

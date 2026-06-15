/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18005AB14
 * Callers:
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180021110 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     _SystemEffectDescriptor::ResolveAllOverridingChains_::_1_::dtor$0 @ 0x180039760 (_SystemEffectDescriptor--ResolveAllOverridingChains_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetInitializedSystemEffectInterface_::_1_::dtor$3 @ 0x1800397D8 (_CEndpointCharacteristics--GetInitializedSystemEffectInterface_--_1_--dtor$3.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$6 @ 0x180039844 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$6.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$31 @ 0x180039874 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$31.c)
 *     _SystemEffectDescriptor::GetOverridingChainDescriptorIndex_::_1_::dtor$0 @ 0x1800398BC (_SystemEffectDescriptor--GetOverridingChainDescriptorIndex_--_1_--dtor$0.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$0 @ 0x1800398E0 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$0.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$9 @ 0x1800398F8 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$9.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$32 @ 0x180039910 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$32.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$45 @ 0x180039928 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$45.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$54 @ 0x180039940 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$54.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$67 @ 0x180039958 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$67.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$80 @ 0x180039970 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$80.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$89 @ 0x180039988 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$89.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$102 @ 0x1800399A0 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$102.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}

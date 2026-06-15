/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180010A30
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000E870 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$0 @ 0x180059F90 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$0.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$22 @ 0x180059FA8 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$22.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$44 @ 0x180059FC0 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$44.c)
 *     _CEndpointCharacteristics::GetInitializedSystemEffectInterface_::_1_::dtor$3 @ 0x18005A078 (_CEndpointCharacteristics--GetInitializedSystemEffectInterface_--_1_--dtor$3.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$6 @ 0x18005A0E4 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$6.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$55 @ 0x18005A108 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$55.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$66 @ 0x18005A120 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$66.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$75 @ 0x18005A138 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$75.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$124 @ 0x18005A15C (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$124.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$135 @ 0x18005A174 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$135.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$144 @ 0x18005A18C (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$144.c)
 *     _SystemEffectDescriptor::ResolveAllOverridingChains_::_1_::dtor$0 @ 0x18005A270 (_SystemEffectDescriptor--ResolveAllOverridingChains_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::GetOverridingChainDescriptorIndex_::_1_::dtor$0 @ 0x18005A294 (_SystemEffectDescriptor--GetOverridingChainDescriptorIndex_--_1_--dtor$0.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$18 @ 0x18005A2FC (_InitializeStreamAndModeDescriptors_--_1_--dtor$18.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$67 @ 0x18005A398 (_InitializeStreamAndModeDescriptors_--_1_--dtor$67.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$92 @ 0x18005A3C8 (_InitializeStreamAndModeDescriptors_--_1_--dtor$92.c)
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

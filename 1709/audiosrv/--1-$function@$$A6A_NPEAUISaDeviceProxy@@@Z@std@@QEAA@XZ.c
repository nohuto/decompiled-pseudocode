/*
 * XREFs of ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x18005C74C
 * Callers:
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$0 @ 0x180038229 (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$0.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x180092188 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z.c)
 *     ??1?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEAA@XZ @ 0x1800923E4 (--1-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEAA@XZ.c)
 *     ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180093460 (-ForEachStream@CBaseStreamGroupProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 *     ?ForEachStream@CProcessSubmixProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800935C0 (-ForEachStream@CProcessSubmixProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 *     _CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport_::_1_::dtor$14 @ 0x1800B284B (_CEndpointCharacteristics--AugmentOEMSpeechProcessingSupport_--_1_--dtor$14.c)
 *     _std::function_bool___cdecl(WAVEFORMATEXTENSIBLE_const_____ptr64)_::function_bool___cdecl(WAVEFORMATEXTENSIBLE_const_____ptr64)__::_1_::dtor$0 @ 0x1800BBBB8 (_std--function_bool___cdecl(WAVEFORMATEXTENSIBLE_const_____ptr64)_--function_bool___cdecl(WAVEFO.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$0 @ 0x1800BC40B (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$0_0 @ 0x1800BC5BB (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$0_0.c)
 *     _SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor$0 @ 0x1800BD26B (_SystemEffectChainDescriptor--MarkAsUnresolved_--_1_--dtor$0.c)
 *     _CSpatialProperties::ProcessPropertyChange_::_1_::dtor$0 @ 0x1800CB267 (_CSpatialProperties--ProcessPropertyChange_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettings_::_1_::dtor$0 @ 0x1800CB9A7 (_CSpatialProperties--SetSpatialAudioSettings_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$0 @ 0x1800CD2A3 (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$0.c)
 *     _IsSamplingRateBitRateSupported_::_1_::dtor$0 @ 0x1800CEB37 (_IsSamplingRateBitRateSupported_--_1_--dtor$0.c)
 *     _CSpatialAudioDolbyAtmosMAT::IsTechnologySupported_::_1_::dtor$0 @ 0x1800CEE75 (_CSpatialAudioDolbyAtmosMAT--IsTechnologySupported_--_1_--dtor$0.c)
 *     _CSpatialAudioDolbyHeadphones::IsTechnologySupported_::_1_::dtor$0 @ 0x1800CF1BA (_CSpatialAudioDolbyHeadphones--IsTechnologySupported_--_1_--dtor$0.c)
 *     _CSpatialAudioDolbyStereo::IsTechnologySupported_::_1_::dtor$0 @ 0x1800CF508 (_CSpatialAudioDolbyStereo--IsTechnologySupported_--_1_--dtor$0.c)
 *     _CSpatialAudioMSHRTF::IsTechnologySupported_::_1_::dtor$0 @ 0x1800CF859 (_CSpatialAudioMSHRTF--IsTechnologySupported_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}

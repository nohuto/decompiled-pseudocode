/*
 * XREFs of ??1?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEAA@XZ @ 0x180097644
 * Callers:
 *     _std::function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64)_::function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64)___lambda_541a0aba8a0dd1ccbfde03220634244f__void__::_1_::dtor$0 @ 0x180063A8D (_std--function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr.c)
 *     _CSpatialAudioDolbyStereo::IsTechnologySupported_::_1_::dtor$0 @ 0x180067F49 (_CSpatialAudioDolbyStereo--IsTechnologySupported_--_1_--dtor$0.c)
 *     _CSpatialAudioMSHRTF::IsTechnologySupported_::_1_::dtor$0 @ 0x180067F55 (_CSpatialAudioMSHRTF--IsTechnologySupported_--_1_--dtor$0.c)
 *     _CSpatialAudioDolbyAtmosMAT::IsTechnologySupported_::_1_::dtor$0 @ 0x180067F7C (_CSpatialAudioDolbyAtmosMAT--IsTechnologySupported_--_1_--dtor$0.c)
 *     _std::function_bool___cdecl(WAVEFORMATEXTENSIBLE_const_____ptr64)_::function_bool___cdecl(WAVEFORMATEXTENSIBLE_const_____ptr64)__::_1_::dtor$0 @ 0x180067F88 (_std--function_bool___cdecl(WAVEFORMATEXTENSIBLE_const_____ptr64)_--function_bool___cdecl(WAVEFO.c)
 *     _SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor$0 @ 0x180067FEC (_SystemEffectChainDescriptor--MarkAsUnresolved_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$0 @ 0x180068444 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$15 @ 0x18006845C (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$15.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$0_0 @ 0x180068468 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$0_0.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$0 @ 0x180068527 (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$7 @ 0x18006854B (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$7.c)
 *     _CSpatialProperties::SetSpatialAudioSettings_::_1_::dtor$0 @ 0x180068557 (_CSpatialProperties--SetSpatialAudioSettings_--_1_--dtor$0.c)
 *     _CSpatialProperties::ProcessPropertyChange_::_1_::dtor$0 @ 0x1800FEB19 (_CSpatialProperties--ProcessPropertyChange_--_1_--dtor$0.c)
 *     _IsSamplingRateBitRateSupported_::_1_::dtor$0 @ 0x1800FF1AE (_IsSamplingRateBitRateSupported_--_1_--dtor$0.c)
 * Callees:
 *     std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this @ 0x18004FED0 (std--_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffec_ea_18004FED0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::~_Func_class<bool,WAVEFORMATEXTENSIBLE const *>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v3; // rcx
  void (__fastcall *v4)(_QWORD *, char); // rax

  v3 = (_QWORD *)a1[7];
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    v4 = *(void (__fastcall **)(_QWORD *, char))(*v3 + 32LL);
    if ( v4 == std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this )
      std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this(
        v3,
        a2);
    else
      v4(v3, a2);
    a1[7] = 0LL;
  }
}

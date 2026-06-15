/*
 * XREFs of ??1?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@XZ @ 0x18002F4A0
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     _CSpatialAudioDolbyStereo::IsTechnologySupported_::_1_::dtor$0 @ 0x1800593CC (_CSpatialAudioDolbyStereo--IsTechnologySupported_--_1_--dtor$0.c)
 *     _CSpatialAudioDolbyAtmosMAT::IsTechnologySupported_::_1_::dtor$0 @ 0x1800593E4 (_CSpatialAudioDolbyAtmosMAT--IsTechnologySupported_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettings_::_1_::dtor$0 @ 0x1800593F0 (_CSpatialProperties--SetSpatialAudioSettings_--_1_--dtor$0.c)
 *     _CSpatialProperties::ProcessPropertyChange_::_1_::dtor$0 @ 0x1800593FC (_CSpatialProperties--ProcessPropertyChange_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$0 @ 0x180059430 (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$0.c)
 *     _CSpatialAudioMSHRTF::IsTechnologySupported_::_1_::dtor$0 @ 0x18005946C (_CSpatialAudioMSHRTF--IsTechnologySupported_--_1_--dtor$0.c)
 * Callees:
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this @ 0x1800405E0 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_1800405E0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::function<bool (WAVEFORMATEXTENSIBLE const *)>::~function<bool (WAVEFORMATEXTENSIBLE const *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  void (__fastcall *v4)(__int64, __int64); // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    v4 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL);
    if ( (char *)v4 == (char *)std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
      std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
        v3,
        a2);
    else
      v4(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
}

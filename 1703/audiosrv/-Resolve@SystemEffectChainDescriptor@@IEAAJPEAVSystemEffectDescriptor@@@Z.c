/*
 * XREFs of ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180010A50
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x18000C130 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000E870 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x1800107FC (-GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180010BE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 * Callees:
 *     _lambda_2cdbfdbf6a906d093ee55c9100591272_::operator() @ 0x18000FC80 (_lambda_2cdbfdbf6a906d093ee55c9100591272_--operator().c)
 *     ?_Reset0@?$_Ptr_base@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@std@@QEAAXPEAV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@2@PEAV_Ref_count_base@2@@Z @ 0x18002AA10 (-_Reset0@-$_Ptr_base@V-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescript.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemEffectChainDescriptor::Resolve(
        SystemEffectChainDescriptor *this,
        struct SystemEffectDescriptor *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  CEndpointCharacteristics **v6; // rcx
  __int64 (__fastcall *v7)(__int64, struct SystemEffectDescriptor **, SystemEffectChainDescriptor **); // rax
  int v8; // eax
  unsigned int v9; // edi
  std::_Ref_count_base *v10; // rbx
  std::_Ref_count_base *v12[2]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  SystemEffectChainDescriptor *v14; // [rsp+50h] [rbp+8h] BYREF
  struct SystemEffectDescriptor *v15; // [rsp+58h] [rbp+10h] BYREF

  *(_OWORD *)v12 = 0LL;
  v4 = *((_QWORD *)this + 4);
  v5 = *((_QWORD *)this + 3);
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  std::_Ptr_base<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::_Reset0(v12, v5);
  *((_BYTE *)this + 16) = 0;
  v14 = this;
  v15 = a2;
  v6 = (CEndpointCharacteristics **)*((_QWORD *)v12[0] + 7);
  if ( !v6 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  v7 = (__int64 (__fastcall *)(__int64, struct SystemEffectDescriptor **, SystemEffectChainDescriptor **))*((_QWORD *)*v6 + 2);
  if ( (char *)v7 == (char *)std::_Func_impl__lambda_2cdbfdbf6a906d093ee55c9100591272__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call )
    v8 = lambda_2cdbfdbf6a906d093ee55c9100591272_::operator()(v6 + 1, (__int64)a2, (int *)this);
  else
    v8 = v7((__int64)v6, &v15, &v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x63,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v8,
      -2);
    goto LABEL_8;
  }
  v9 = 0;
  if ( *((_BYTE *)this + 16) )
  {
LABEL_8:
    v10 = v12[1];
    goto LABEL_14;
  }
  v10 = 0LL;
  if ( v12[1] )
    std::_Ref_count_base::_Decref(v12[1]);
LABEL_14:
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return v9;
}

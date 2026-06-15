/*
 * XREFs of ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18000B3C0
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180002760 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_N_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18000B8A0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x180039F30 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     _lambda_4a17b05ad23a2472e1c3b39a574ceab1_::operator() @ 0x1800E91A8 (_lambda_4a17b05ad23a2472e1c3b39a574ceab1_--operator().c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800F0EE8 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800F04E4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComposit.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
        _QWORD *a1,
        _DWORD *a2,
        int *a3,
        int *a4,
        unsigned int *a5,
        _OWORD **a6)
{
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v13; // rcx
  unsigned int v14; // ebp
  _OWORD *v15; // r14
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // r12d
  int v19; // eax
  int v20; // ecx
  int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // edi
  _OWORD *v25; // rcx
  unsigned int v26; // esi
  __int64 (__fastcall *v27)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v28)(); // rax
  int v29; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  v10 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( !v10 )
    return 2147942414LL;
  v13 = Microsoft::WRL::Details::ModuleBase::module_;
  v10[9] = 1;
  *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::`vftable'{for `ICompositeSystemEffect'};
  *((_QWORD *)v10 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>'};
  *((_QWORD *)v10 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)v10 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal>'};
  if ( v13 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v13 + 8LL))(v13);
  *(_QWORD *)v11 = &CCompositeSystemEffect::`vftable'{for `ICompositeSystemEffect'};
  v14 = 0;
  *((_QWORD *)v11 + 1) = &CCompositeSystemEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>'};
  *((_QWORD *)v11 + 2) = &CCompositeSystemEffect::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)v11 + 3) = &CCompositeSystemEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal>'};
  *((_QWORD *)v11 + 7) = 0LL;
  *((_QWORD *)v11 + 8) = 0LL;
  *((_QWORD *)v11 + 9) = 0LL;
  *((_QWORD *)v11 + 10) = 0LL;
  *((_QWORD *)v11 + 11) = 0LL;
  *((_QWORD *)v11 + 12) = 0LL;
  *((_QWORD *)v11 + 13) = 0LL;
  v15 = *a6;
  v16 = *a4;
  v17 = *a3;
  v18 = *a5;
  v11[10] = *a2;
  v11[11] = v17;
  v11[12] = v16;
  if ( v18 )
  {
    do
    {
      v19 = v11[16];
      v20 = v11[17];
      if ( v19 == v20 )
      {
        if ( v20 )
        {
          v21 = 2 * v19;
          if ( (v19 & 0x40000000) != 0 )
            goto LABEL_12;
        }
        else
        {
          v21 = 1;
        }
        if ( (unsigned __int64)v21 > 0x7FFFFFF
          || (v22 = _o__recalloc(*((_QWORD *)v11 + 7), v21, 16LL), (v23 = v22) == 0) )
        {
LABEL_12:
          v24 = 0;
          goto LABEL_18;
        }
        *((_QWORD *)v11 + 7) = v22;
        v19 = v11[16];
        v11[17] = v21;
      }
      else
      {
        v23 = *((_QWORD *)v11 + 7);
      }
      v25 = (_OWORD *)(v23 + 16LL * v19);
      if ( v25 )
      {
        *v25 = *v15;
        v19 = v11[16];
      }
      v24 = 1;
      v11[16] = v19 + 1;
LABEL_18:
      if ( !v24 )
      {
        v26 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C3,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL,
          v29);
        goto LABEL_27;
      }
      ++v14;
      ++v15;
    }
    while ( v14 < v18 );
  }
  v27 = **(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v11;
  if ( (char *)v27 == (char *)&Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::QueryInterface )
  {
    *a1 = v11;
    v28 = *(__int64 (__fastcall **)())(*(_QWORD *)v11 + 8LL);
    if ( v28 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::AddRef )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::InternalAddRef(v11);
    else
      ((void (__fastcall *)(_DWORD *))v28)(v11);
    v26 = 0;
  }
  else
  {
    v26 = v27(v11, &GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee, a1);
  }
LABEL_27:
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 16LL))(v11);
  return v26;
}

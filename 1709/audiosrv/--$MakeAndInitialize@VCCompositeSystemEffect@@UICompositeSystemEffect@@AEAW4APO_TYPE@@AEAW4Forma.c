/*
 * XREFs of ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18001E4E0
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800217D0 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180022BF0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     _lambda_9b7b4ff0acd9889e01bbf173a6c75851_::operator() @ 0x1800B0328 (_lambda_9b7b4ff0acd9889e01bbf173a6c75851_--operator().c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800BDBCC (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E6C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComposit.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E760 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystem.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
        _QWORD *a1,
        _DWORD *a2,
        int *a3,
        int *a4,
        unsigned int *a5,
        _OWORD **a6)
{
  unsigned int v6; // edi
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  CAudioDGProcess *v13; // rcx
  _OWORD *v14; // rbp
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // r13d
  int v18; // esi
  int v19; // eax
  int v20; // esi
  __int64 v21; // rax
  _OWORD *v22; // rax
  __int64 (__fastcall *v23)(_DWORD *, GUID *, _QWORD *); // rax
  unsigned int Interface; // eax
  unsigned int v25; // edi
  void (__fastcall *v26)(_DWORD *); // rax
  bool v28; // sf
  int v29; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0;
  *a1 = 0LL;
  v11 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( !v11 )
    return 2147942414LL;
  v13 = Microsoft::WRL::Details::ModuleBase::module_;
  v11[9] = 1;
  *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::`vftable'{for `ICompositeSystemEffect'};
  *((_QWORD *)v11 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>'};
  *((_QWORD *)v11 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)v11 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal>'};
  if ( v13 )
    (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v13 + 8LL))(v13);
  *(_QWORD *)v12 = &CCompositeSystemEffect::`vftable'{for `ICompositeSystemEffect'};
  *((_QWORD *)v12 + 1) = &CCompositeSystemEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>'};
  *((_QWORD *)v12 + 2) = &CCompositeSystemEffect::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)v12 + 3) = &CCompositeSystemEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal>'};
  *((_QWORD *)v12 + 7) = 0LL;
  *((_QWORD *)v12 + 8) = 0LL;
  *((_QWORD *)v12 + 9) = 0LL;
  *((_QWORD *)v12 + 10) = 0LL;
  *((_QWORD *)v12 + 11) = 0LL;
  *((_QWORD *)v12 + 12) = 0LL;
  *((_QWORD *)v12 + 13) = 0LL;
  v14 = *a6;
  v15 = *a4;
  v16 = *a3;
  v17 = *a5;
  v12[10] = *a2;
  v12[11] = v16;
  v12[12] = v15;
  if ( v17 )
  {
    do
    {
      v18 = v12[16];
      v19 = v12[17];
      if ( v18 == v19 )
      {
        if ( v19 )
        {
          v28 = (v18 & 0x40000000) != 0;
          v20 = 2 * v18;
          if ( v28 )
            goto LABEL_24;
        }
        else
        {
          v20 = 1;
        }
        if ( (unsigned __int64)v20 > 0x7FFFFFF || (v21 = _o__recalloc(*((_QWORD *)v12 + 7), v20, 16LL)) == 0 )
        {
LABEL_24:
          v25 = -2147024882;
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x2C3,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            v29);
          goto LABEL_17;
        }
        v12[17] = v20;
        *((_QWORD *)v12 + 7) = v21;
      }
      v22 = (_OWORD *)(*((_QWORD *)v12 + 7) + 16LL * (int)v12[16]);
      if ( v22 )
        *v22 = *v14;
      ++v12[16];
      ++v6;
      ++v14;
    }
    while ( v6 < v17 );
  }
  v23 = **(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v12;
  if ( (char *)v23 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::QueryInterface )
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::QueryInterface(
                  v12,
                  &GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee,
                  a1);
  else
    Interface = v23(v12, &GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee, a1);
  v25 = Interface;
LABEL_17:
  v26 = *(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL);
  if ( (char *)v26 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release(v12);
  else
    v26(v12);
  return v25;
}

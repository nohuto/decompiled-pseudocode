/*
 * XREFs of ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x1800139E0
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000DF80 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180010BE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180038FC0 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 *     _lambda_cb1a7eba790d7310050f17c894bfcd12_::operator() @ 0x18004C8E4 (_lambda_cb1a7eba790d7310050f17c894bfcd12_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
        __int64 (__fastcall ****a1)(__int64 a1, const struct _GUID *a2, __int64 a3),
        _DWORD *a2,
        int *a3,
        int *a4,
        unsigned int *a5,
        _OWORD **a6)
{
  volatile signed __int32 *v10; // rdi
  __int64 (__fastcall ***v11)(__int64, const struct _GUID *, __int64); // rax
  __int64 (__fastcall ***v12)(__int64, const struct _GUID *, __int64); // rbx
  CAudioDGProcess *v13; // rcx
  _OWORD *v14; // r14
  int v15; // ecx
  unsigned int v16; // ebp
  int v17; // edx
  unsigned int v18; // r13d
  int v19; // esi
  int v20; // eax
  int v21; // esi
  __int64 v22; // rax
  __int64 (__fastcall **v23)(__int64, const struct _GUID *, __int64); // rax
  __int64 (__fastcall *v24)(__int64, const struct _GUID *, __int64); // rax
  unsigned int v25; // ebx
  void (*v26)(void); // rax
  CCompositeSystemEffect *(__fastcall *v28)(CCompositeSystemEffect *, char); // rax
  __int64 v29; // rcx
  int v30; // esi
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // esi
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rcx
  void *v38; // rcx
  bool v39; // sf
  int v40; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a1 = 0LL;
  v10 = 0LL;
  v11 = (__int64 (__fastcall ***)(__int64, const struct _GUID *, __int64))operator new(
                                                                            0x70uLL,
                                                                            (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    v13 = Microsoft::WRL::Details::ModuleBase::module_;
    *((_DWORD *)v11 + 9) = 1;
    *v11 = (__int64 (__fastcall **)(__int64, const struct _GUID *, __int64))&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `ICompositeSystemEffect'};
    v11[1] = (__int64 (__fastcall **)(__int64, const struct _GUID *, __int64))&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>,1,0>'};
    v11[2] = (__int64 (__fastcall **)(__int64, const struct _GUID *, __int64))&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IAudioSystemEffects2'};
    v11[3] = (__int64 (__fastcall **)(__int64, const struct _GUID *, __int64))&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>,1,0>'};
    if ( v13 )
      (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v13 + 8LL))(v13);
    *v12 = (__int64 (__fastcall **)(__int64, const struct _GUID *, __int64))&CCompositeSystemEffect::`vftable'{for `ICompositeSystemEffect'};
    v10 = (volatile signed __int32 *)v12;
    v12[1] = (__int64 (__fastcall **)(__int64, const struct _GUID *, __int64))&CCompositeSystemEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>,1,0>'};
    v12[2] = (__int64 (__fastcall **)(__int64, const struct _GUID *, __int64))&CCompositeSystemEffect::`vftable'{for `IAudioSystemEffects2'};
    v12[3] = (__int64 (__fastcall **)(__int64, const struct _GUID *, __int64))&CCompositeSystemEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>,1,0>'};
    v12[7] = 0LL;
    v12[8] = 0LL;
    v12[9] = 0LL;
    v12[10] = 0LL;
    v12[11] = 0LL;
    v12[12] = 0LL;
    v12[13] = 0LL;
    v14 = *a6;
    v15 = *a3;
    v16 = 0;
    v17 = *a4;
    v18 = *a5;
    *((_DWORD *)v12 + 10) = *a2;
    *((_DWORD *)v12 + 11) = v15;
    *((_DWORD *)v12 + 12) = v17;
    if ( v18 )
    {
      do
      {
        v19 = *((_DWORD *)v12 + 16);
        v20 = *((_DWORD *)v12 + 17);
        if ( v19 == v20 )
        {
          if ( v20 )
          {
            v39 = (v19 & 0x40000000) != 0;
            v21 = 2 * v19;
            if ( v39 || (unsigned int)v21 > 0x7FFFFFF )
            {
LABEL_43:
              v25 = -2147024882;
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x2A2,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)0x8007000ELL,
                v40);
              goto LABEL_15;
            }
          }
          else
          {
            v21 = 1;
          }
          v22 = _o__recalloc(v12[7], v21, 16LL);
          if ( !v22 )
            goto LABEL_43;
          *((_DWORD *)v12 + 17) = v21;
          v12[7] = (__int64 (__fastcall **)(__int64, const struct _GUID *, __int64))v22;
        }
        v23 = &v12[7][2 * *((int *)v12 + 16)];
        if ( v23 )
          *(_OWORD *)v23 = *v14;
        ++*((_DWORD *)v12 + 16);
        ++v16;
        ++v14;
      }
      while ( v16 < v18 );
    }
    v24 = **v12;
    if ( v24 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ICompositeSystemEffect,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface )
    {
      *a1 = v12;
      ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, const struct _GUID *, __int64)))(*v12)[1])(v12);
      v25 = 0;
    }
    else
    {
      v25 = v24((__int64)v12, &GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee, (__int64)a1);
    }
  }
  else
  {
    v25 = -2147024882;
  }
LABEL_15:
  if ( v10 )
  {
    v26 = *(void (**)(void))(*(_QWORD *)v10 + 16LL);
    if ( (char *)v26 != (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ICompositeSystemEffect,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
    {
LABEL_47:
      v26();
      return v25;
    }
    if ( _InterlockedExchangeAdd(v10 + 9, 0xFFFFFFFF) == 1 )
    {
      v28 = *(CCompositeSystemEffect *(__fastcall **)(CCompositeSystemEffect *, char))(*(_QWORD *)v10 + 40LL);
      if ( v28 == CCompositeSystemEffect::`vector deleting destructor' )
      {
        v29 = *((_QWORD *)v10 + 13);
        if ( v29 )
        {
          *((_QWORD *)v10 + 13) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        if ( *((_QWORD *)v10 + 11) )
        {
          v30 = 0;
          if ( *((int *)v10 + 24) > 0 )
          {
            v31 = 0LL;
            do
            {
              v32 = *((_QWORD *)v10 + 11);
              v33 = *(_QWORD *)(v31 + v32);
              if ( v33 )
              {
                *(_QWORD *)(v31 + v32) = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
              }
              ++v30;
              v31 += 8LL;
            }
            while ( v30 < *((_DWORD *)v10 + 24) );
          }
          free(*((void **)v10 + 11));
          *((_QWORD *)v10 + 11) = 0LL;
        }
        *((_QWORD *)v10 + 12) = 0LL;
        if ( *((_QWORD *)v10 + 9) )
        {
          v34 = 0;
          if ( *((int *)v10 + 20) > 0 )
          {
            v35 = 0LL;
            do
            {
              v36 = *((_QWORD *)v10 + 9);
              v37 = *(_QWORD *)(v35 + v36);
              if ( v37 )
              {
                *(_QWORD *)(v35 + v36) = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
              }
              ++v34;
              v35 += 8LL;
            }
            while ( v34 < *((_DWORD *)v10 + 20) );
          }
          free(*((void **)v10 + 9));
          *((_QWORD *)v10 + 9) = 0LL;
        }
        *((_QWORD *)v10 + 10) = 0LL;
        v38 = (void *)*((_QWORD *)v10 + 7);
        if ( v38 )
        {
          free(v38);
          *((_QWORD *)v10 + 7) = 0LL;
        }
        *((_QWORD *)v10 + 8) = 0LL;
        *((_DWORD *)v10 + 9) = -1073741823;
        operator delete((void *)v10, (const struct std::nothrow_t *)0x70);
      }
      else
      {
        v28((CCompositeSystemEffect *)v10, 1);
      }
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v26 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        goto LABEL_47;
      }
    }
  }
  return v25;
}

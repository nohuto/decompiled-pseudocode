/*
 * XREFs of ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@KK@Z @ 0x18005F164
 * Callers:
 *     ??$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@AEAKAEAK@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSpectrumListener@@@12@$$QEAPEAVMPCRawInputProvider@@AEAK1@Z @ 0x18005EBA0 (--$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@AEAKAEAK@Details@WRL@Microsoft@@YA-AV-$ComPt.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18005D838 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x1800606E4 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationToken@@@Z @ 0x180060CC4 (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationTo.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
SpectrumListener *__fastcall SpectrumListener::SpectrumListener(
        SpectrumListener *this,
        struct MPCRawInputProvider *a2,
        int a3,
        const char *a4)
{
  struct MPCRawInputProvider *v4; // rdi
  __int64 *v8; // rsi
  __int64 *v9; // r14
  HRESULT v10; // eax
  __int64 v11; // rcx
  wil::details::in1diag3 *v12; // rcx
  MPCHeadUpdateListener *Instance; // rax
  int v14; // eax
  __int64 v15; // r12
  struct MPCRawInputProvider *v16; // rax
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rsi
  struct MPCRawInputProvider *v20; // rax
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  HRESULT v23; // eax
  __int64 v24; // rcx
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // r14
  _DWORD *v27; // rdi
  _DWORD *v28; // rax
  _DWORD *v29; // rbx
  _DWORD *v30; // rsi
  int v31; // eax
  wil::details::in1diag3 *v32; // rcx
  __int64 v34; // [rsp+28h] [rbp-99h] BYREF
  __int64 v35; // [rsp+30h] [rbp-91h] BYREF
  _BYTE v36[24]; // [rsp+38h] [rbp-89h]
  __int128 v37; // [rsp+50h] [rbp-71h]
  __int128 v38; // [rsp+60h] [rbp-61h]
  struct MPCRawInputProvider *v39; // [rsp+70h] [rbp-51h]
  struct MPCRawInputProvider *v40; // [rsp+78h] [rbp-49h]
  __int128 v41; // [rsp+80h] [rbp-41h]
  __int64 v42; // [rsp+90h] [rbp-31h]
  SpectrumListener *v43; // [rsp+98h] [rbp-29h]
  _DWORD *v44; // [rsp+A0h] [rbp-21h]
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp-19h] BYREF
  HSTRING string; // [rsp+C0h] [rbp-1h] BYREF
  HSTRING_HEADER v47; // [rsp+C8h] [rbp+7h] BYREF
  HSTRING v48; // [rsp+E0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v42 = -2LL;
  LODWORD(v4) = (_DWORD)a4;
  v43 = this;
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SpectrumListener::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 6) = a3;
  *((_DWORD *)this + 7) = (_DWORD)v4;
  v8 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  v9 = (__int64 *)((char *)this + 40);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      a4);
    __debugbreak();
  }
  string = 0LL;
  v10 = WindowsCreateStringReference(L"Windows.UI.Input.Spatial.Internal.InputPriv", 0x2Bu, &hstringHeader, &string);
  if ( v10 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    goto LABEL_47;
  }
  a2 = (struct MPCRawInputProvider *)string;
  v11 = *v8;
  if ( *v8 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  *v8 = 0LL;
  LODWORD(a2) = RoActivateInstance(a2, &v34);
  if ( (int)a2 >= 0 )
  {
    if ( *(_QWORD *)&GUID_fb443535_ff9a_45e9_89fc_ae5955449664.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_fb443535_ff9a_45e9_89fc_ae5955449664.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *v8 = v34;
    }
    else
    {
      LODWORD(a2) = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v34)(
                      v34,
                      &GUID_fb443535_ff9a_45e9_89fc_ae5955449664,
                      (char *)this + 32);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
  }
  v12 = retaddr;
  if ( (int)a2 < 0 )
  {
LABEL_47:
    wil::details::in1diag3::FailFast_Hr(
      v12,
      (void *)0x1D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)a2);
    __debugbreak();
  }
  Instance = MPCHeadUpdateListener::GetInstance();
  v14 = MPCHeadUpdateListener::AddHeadEventOccurred(Instance, this, (struct EventRegistrationToken *)this + 7);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v14);
LABEL_49:
    wil::details::in1diag3::FailFast_Hr(
      v18,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v17);
LABEL_50:
    wil::details::in1diag3::FailFast_Hr(
      v22,
      (void *)0x21,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v21);
LABEL_51:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23);
LABEL_52:
    wil::details::in1diag3::FailFast_Hr(
      v25,
      (void *)(unsigned int)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)a2);
    goto LABEL_53;
  }
  *(_QWORD *)&v37 = SpectrumListener::OnHandEventOccurred;
  DWORD2(v37) = 0;
  v15 = *v8;
  *(_QWORD *)v36 = this;
  *(_OWORD *)&v36[8] = v37;
  v4 = 0LL;
  *(_QWORD *)&v37 = 0LL;
  v16 = (struct MPCRawInputProvider *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  a2 = v16;
  if ( v16 )
  {
    *(_QWORD *)v16 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    *((_DWORD *)v16 + 3) = 1;
    *(_QWORD *)v16 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivHandEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)a2 + 1) = *(_OWORD *)v36;
    *((_QWORD *)a2 + 4) = *(_QWORD *)&v36[16];
    *(_QWORD *)a2 = off_1800EEFA0;
    v4 = a2;
  }
  v39 = v4;
  *(_QWORD *)&v37 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, struct MPCRawInputProvider *, char *))(*(_QWORD *)v15 + 48LL))(
          v15,
          v4,
          (char *)this + 48);
  v18 = retaddr;
  if ( v17 < 0 )
    goto LABEL_49;
  if ( v4 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(struct MPCRawInputProvider *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_QWORD *)&v38 = SpectrumListener::OnPhraseDetected;
  DWORD2(v38) = 0;
  v19 = *v8;
  *(_QWORD *)v36 = this;
  *(_OWORD *)&v36[8] = v38;
  v4 = 0LL;
  *(_QWORD *)&v38 = 0LL;
  v20 = (struct MPCRawInputProvider *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  a2 = v20;
  if ( v20 )
  {
    *(_QWORD *)v20 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    *((_DWORD *)v20 + 3) = 1;
    *(_QWORD *)v20 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)a2 + 1) = *(_OWORD *)v36;
    *((_QWORD *)a2 + 4) = *(_QWORD *)&v36[16];
    *(_QWORD *)a2 = off_1800EEFC8;
    v4 = a2;
  }
  v40 = v4;
  *(_QWORD *)&v38 = 0LL;
  v21 = (*(__int64 (__fastcall **)(__int64, struct MPCRawInputProvider *, char *))(*(_QWORD *)v19 + 64LL))(
          v19,
          v4,
          (char *)this + 64);
  v22 = retaddr;
  if ( v21 < 0 )
    goto LABEL_50;
  if ( v4 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(struct MPCRawInputProvider *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v48 = 0LL;
  LODWORD(v4) = 36;
  v23 = WindowsCreateStringReference(L"Windows.Mirage.Internal.GesturesPriv", 0x24u, &v47, &v48);
  if ( v23 < 0 )
    goto LABEL_51;
  a2 = (struct MPCRawInputProvider *)v48;
  v24 = *v9;
  if ( *v9 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  *v9 = 0LL;
  LODWORD(a2) = RoActivateInstance(a2, &v35);
  if ( (int)a2 >= 0 )
  {
    if ( *(_QWORD *)&GUID_13b12dd0_d149_4adc_b1bf_f92a60ceee5c.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_13b12dd0_d149_4adc_b1bf_f92a60ceee5c.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *v9 = v35;
    }
    else
    {
      LODWORD(a2) = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v35)(
                      v35,
                      &GUID_13b12dd0_d149_4adc_b1bf_f92a60ceee5c,
                      (char *)this + 40);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
  }
  v25 = retaddr;
  if ( (int)a2 < 0 )
    goto LABEL_52;
  *(_QWORD *)&v41 = SpectrumListener::OnHomeGestureDetected;
  DWORD2(v41) = 0;
  v26 = *v9;
  *(_QWORD *)v36 = this;
  *(_OWORD *)&v36[8] = v41;
  v27 = 0LL;
  *(_QWORD *)&v41 = 0LL;
  v28 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v29 = v28;
  v30 = 0LL;
  if ( v28 )
  {
    *(_QWORD *)v28 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v28[3] = 1;
    *(_QWORD *)v28 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::Mirage::Internal::IHomeGestureDetectedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v29 + 1) = *(_OWORD *)v36;
    *((_QWORD *)v29 + 4) = *(_QWORD *)&v36[16];
    *(_QWORD *)v29 = off_1800EF090;
    v27 = v29;
    v30 = v29;
  }
  v44 = v27;
  v31 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v26 + 48LL))(v26, v27, (char *)this + 72);
  v32 = retaddr;
  if ( v31 < 0 )
  {
LABEL_53:
    wil::details::in1diag3::FailFast_Hr(
      v32,
      (void *)0x25,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v31);
    JUMPOUT(0x18005F71ELL);
  }
  if ( v30 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v27 + 16LL))(v27);
  *((_BYTE *)this + 80) = 1;
  return this;
}

/*
 * XREFs of ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@K@Z @ 0x180067E48
 * Callers:
 *     ??$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@AEAK@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSpectrumListener@@@12@$$QEAPEAVMPCRawInputProvider@@AEAK@Z @ 0x18006788C (--$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@AEAK@Details@WRL@Microsoft@@YA-AV-$ComPtr@VS.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18006928C (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationToken@@@Z @ 0x180069880 (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationTo.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
SpectrumListener *__fastcall SpectrumListener::SpectrumListener(
        SpectrumListener *this,
        struct MPCRawInputProvider *a2,
        int a3,
        const char *a4)
{
  __int64 *v7; // rdi
  HRESULT v8; // eax
  HSTRING v9; // rbx
  __int64 v10; // rcx
  int v11; // ebx
  MPCHeadUpdateListener *Instance; // rax
  int v13; // eax
  __int64 v14; // r15
  _DWORD *v15; // r14
  _DWORD *v16; // rax
  _DWORD *v17; // rbx
  int v18; // eax
  __int64 v19; // r14
  _DWORD *v20; // rdi
  _DWORD *v21; // rax
  _DWORD *v22; // rbx
  int v23; // eax
  __int64 v25; // [rsp+28h] [rbp-59h] BYREF
  _BYTE v26[24]; // [rsp+30h] [rbp-51h]
  __int128 v27; // [rsp+48h] [rbp-39h]
  _DWORD *v28; // [rsp+58h] [rbp-29h]
  __int128 v29; // [rsp+60h] [rbp-21h]
  __int64 v30; // [rsp+70h] [rbp-11h]
  SpectrumListener *v31; // [rsp+78h] [rbp-9h]
  _DWORD *v32; // [rsp+80h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+7h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v30 = -2LL;
  v31 = this;
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SpectrumListener::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 6) = a3;
  v7 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 64) = 0;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      a4);
    __debugbreak();
  }
  string = 0LL;
  v8 = WindowsCreateStringReference(L"Windows.UI.Input.Spatial.Internal.InputPriv", 0x2Bu, &hstringHeader, &string);
  if ( v8 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
  v9 = string;
  v10 = *v7;
  if ( *v7 )
  {
    *v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *v7 = 0LL;
  v11 = RoActivateInstance(v9, &v25);
  if ( v11 >= 0 )
  {
    if ( *(_QWORD *)&GUID_fb443535_ff9a_45e9_89fc_ae5955449664.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_fb443535_ff9a_45e9_89fc_ae5955449664.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *v7 = v25;
    }
    else
    {
      v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v25)(
              v25,
              &GUID_fb443535_ff9a_45e9_89fc_ae5955449664,
              (char *)this + 32);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
  }
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  Instance = MPCHeadUpdateListener::GetInstance();
  v13 = MPCHeadUpdateListener::AddHeadEventOccurred(Instance, this, (struct EventRegistrationToken *)this + 6);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  *(_QWORD *)&v27 = SpectrumListener::OnHandEventOccurred;
  DWORD2(v27) = 0;
  v14 = *v7;
  *(_QWORD *)v26 = this;
  *(_OWORD *)&v26[8] = v27;
  v15 = 0LL;
  *(_QWORD *)&v27 = 0LL;
  v16 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v16;
  if ( v16 )
  {
    *(_QWORD *)v16 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v16[3] = 1;
    *(_QWORD *)v16 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivHandEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v17 + 1) = *(_OWORD *)v26;
    *((_QWORD *)v17 + 4) = *(_QWORD *)&v26[16];
    *(_QWORD *)v17 = off_1800D69E0;
    v15 = v17;
  }
  v28 = v15;
  *(_QWORD *)&v27 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v14 + 48LL))(v14, v15, (char *)this + 40);
  if ( v18 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v18);
  if ( v15 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  *(_QWORD *)&v29 = SpectrumListener::OnPhraseDetected;
  DWORD2(v29) = 0;
  v19 = *v7;
  *(_QWORD *)v26 = this;
  *(_OWORD *)&v26[8] = v29;
  v20 = 0LL;
  *(_QWORD *)&v29 = 0LL;
  v21 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v21;
  if ( v21 )
  {
    *(_QWORD *)v21 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v21[3] = 1;
    *(_QWORD *)v21 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v22 + 1) = *(_OWORD *)v26;
    *((_QWORD *)v22 + 4) = *(_QWORD *)&v26[16];
    *(_QWORD *)v22 = off_1800D6A08;
    v20 = v22;
  }
  v32 = v20;
  v23 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v19 + 64LL))(v19, v20, (char *)this + 56);
  if ( v23 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v23);
  if ( v20 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 16LL))(v20);
  *((_BYTE *)this + 64) = 1;
  return this;
}

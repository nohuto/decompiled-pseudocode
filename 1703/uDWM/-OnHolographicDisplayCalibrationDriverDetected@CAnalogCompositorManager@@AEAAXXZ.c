/*
 * XREFs of ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x180073A60
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_1fe009015b5481886de644cd00cd9360__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180074A40 (wistd--_Func_impl_wistd--_Callable_obj__lambda_1fe009015b5481886de644cd00cd9360__0__ea_180074A40.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@V?$ComPtr@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800729B4 (--$ActivateInstance@V-$ComPtr@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@W.c)
 *     Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_1fb07860902cf0495ca2b3e5f54263f5___ @ 0x180072AF8 (Microsoft--WRL--Callback_Microsoft--WRL--Implements_Microsoft--WRL--RuntimeClassFlags_2__Windows.c)
 *     Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_f22d5cbf612beadeeb19a63fa8ca3a96___ @ 0x180072B78 (Microsoft--WRL--Callback_Microsoft--WRL--Implements_Microsoft--WRL--RuntimeClassFla_ea_180072B78.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800733B8 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180073810 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180074A58 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CAnalogCompositorManager::OnHolographicDisplayCalibrationDriverDetected(CAnalogCompositorManager *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 *v4; // rsi
  int v5; // eax
  __int64 *v6; // r15
  __int64 v7; // rsi
  int ActivationFactory; // eax
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rsi
  int v12; // eax
  char *v13; // r8
  __int64 v14; // r14
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  CAnalogCompositorManager *v19; // [rsp+28h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v2 = 0LL;
  v22 = 0LL;
  v3 = 0LL;
  v24 = &CDesktopManager::s_csDwmInstance;
  v21 = 0LL;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = (__int64 *)((char *)this + 48);
  if ( !*((_QWORD *)this + 6) )
  {
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Graphics.Holographic.Internal.HolographicDisplayMonitorManager",
      0x47u,
      0x46u);
    v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayMonitorManager>>(
           v26,
           (_QWORD *)this + 6);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x1C8,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v5,
        v18);
      __debugbreak();
    }
    if ( *v4 )
    {
      v2 = *v4;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v4 + 8LL))(*v4);
      v18 = 0LL;
      v22 = v2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    }
  }
  v6 = (__int64 *)((char *)this + 56);
  if ( !*((_QWORD *)this + 7) )
  {
    v19 = this;
    Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_f22d5cbf612beadeeb19a63fa8ca3a96___(
      &v23,
      &v19);
    v19 = this;
    Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_1fb07860902cf0495ca2b3e5f54263f5___(
      &v20,
      &v19);
    v18 = 0LL;
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Graphics.Holographic.HolographicDisplay",
      0x30u,
      0x2Fu);
    v7 = v26;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    ActivationFactory = RoGetActivationFactory(v7, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v18);
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x217,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)ActivationFactory,
        v18);
      __debugbreak();
    }
    v9 = v18;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
    v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 48LL))(v9, (char *)this + 56);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x219,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v10,
        v18);
      __debugbreak();
    }
    v11 = v23;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)*v6 + 56LL))(*v6, v23, (char *)this + 72);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x21A,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v12,
        v18);
      __debugbreak();
    }
    v13 = (char *)this + 80;
    v14 = v20;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)*v6 + 72LL))(*v6, v20, v13);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x21B,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v15,
        v18);
      __debugbreak();
    }
    if ( *v6 )
    {
      v3 = *v6;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v6 + 8LL))(*v6);
      v20 = 0LL;
      v21 = v3;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v24);
  if ( v2 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x222,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v16,
        v18);
      __debugbreak();
    }
  }
  if ( v3 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v6 + 120LL))(*v6);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x227,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v17,
        v18);
      __debugbreak();
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
}

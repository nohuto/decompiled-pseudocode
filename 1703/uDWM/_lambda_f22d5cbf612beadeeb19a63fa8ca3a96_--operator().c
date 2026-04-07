/*
 * XREFs of _lambda_f22d5cbf612beadeeb19a63fa8ca3a96_::operator() @ 0x180072F1C
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_f22d5cbf612beadeeb19a63fa8ca3a96__2__1_::Invoke @ 0x180073880 (Microsoft--WRL--Details--InvokeHelper_Microsoft--WRL--Implements_Microsoft--WRL--Ru_ea_180073880.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x1800231E4 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal_____ptr64_IInspectable_____ptr64___lambda_e87c9e5367669f477d6dc870d4013be7__2_1_::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal_____ptr64_IInspectable_____ptr64___lambda_e87c9e5367669f477d6dc870d4013be7__2_1_ @ 0x180072C54 (Microsoft--WRL--Details--InvokeHelper_Windows--Foundation--ITypedEventHandler_Windows--Graphics-.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180073810 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnUserPresenceChanged@CAnalogCompositorManager@@AEAAJPEAUIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@PEAUIInspectable@@@Z @ 0x180073D70 (-OnUserPresenceChanged@CAnalogCompositorManager@@AEAAJPEAUIHolographicDisplayInternal@Internal@H.c)
 *     ?ReleaseHolographicDisplay@CAnalogCompositorManager@@AEAAXXZ @ 0x180073F64 (-ReleaseHolographicDisplay@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180074A58 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall lambda_f22d5cbf612beadeeb19a63fa8ca3a96_::operator()(
        CAnalogCompositorManager **a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  CAnalogCompositorManager *v10; // rcx
  CAnalogCompositorManager *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // eax
  int v17; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+28h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+38h] [rbp-38h] BYREF
  __int128 v21; // [rsp+40h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+50h] [rbp-20h] BYREF
  GUID v23; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a3)(
         a3,
         &GUID_09a4ed86_3c1f_49b9_a85f_ea9b5deb193d,
         &v18);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1D7,
      (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v5,
      v17);
    __debugbreak();
  }
  v17 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v23 = GUID_NULL;
  v6 = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v18 + 48LL))(v18, &v23);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1DE,
      (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v6,
      v17);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 72LL))(v18, &v19);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1DF,
      (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v7,
      v17);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 80LL))(a3, &v20);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1E0,
      (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v8,
      v17);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 80LL))(v18, &v17);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1E1,
      (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v9,
      v17);
    __debugbreak();
  }
  v10 = *a1;
  if ( v19 != *((_QWORD *)*a1 + 18) || v17 != *((_DWORD *)v10 + 40) )
    CAnalogCompositorManager::ReleaseHolographicDisplay(v10);
  *((GUID *)*a1 + 8) = v23;
  *((_QWORD *)*a1 + 18) = v19;
  *((_QWORD *)*a1 + 19) = v20;
  *((_DWORD *)*a1 + 40) = v17;
  v11 = *a1;
  v12 = v18;
  if ( *((_QWORD *)*a1 + 8) != v18 )
  {
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    *(_QWORD *)&v21 = *((_QWORD *)v11 + 8);
    *((_QWORD *)v11 + 8) = v12;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  }
  v13 = 0LL;
  *(_QWORD *)&v21 = *a1;
  *((_QWORD *)&v21 + 1) = CAnalogCompositorManager::OnUserPresenceChanged;
  v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          32LL);
  if ( v14 )
    v13 = Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal_____ptr64_IInspectable_____ptr64___lambda_e87c9e5367669f477d6dc870d4013be7__2_1_::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal_____ptr64_IInspectable_____ptr64___lambda_e87c9e5367669f477d6dc870d4013be7__2_1_(
            v14,
            &v21);
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)*a1 + 8) + 104LL))(
          *((_QWORD *)*a1 + 8),
          v13,
          (__int64)*a1 + 88);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1F6,
      (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v15,
      v17);
    __debugbreak();
  }
  CAnalogCompositorManager::OnUserPresenceChanged(
    *a1,
    *((struct Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal **)*a1 + 8),
    0LL);
  CDesktopManager::ModeChangeImpl(CDesktopManager::s_pDesktopManagerInstance);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return 0LL;
}

/*
 * XREFs of _lambda_1fb07860902cf0495ca2b3e5f54263f5_::operator() @ 0x180072E0C
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_1fb07860902cf0495ca2b3e5f54263f5__2__1_::Invoke @ 0x180073850 (Microsoft--WRL--Details--InvokeHelper_Microsoft--WRL--Implements_Microsoft--WRL--RuntimeClassFla.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x1800231E4 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180073810 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseHolographicDisplay@CAnalogCompositorManager@@AEAAXXZ @ 0x180073F64 (-ReleaseHolographicDisplay@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180074A58 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall lambda_1fb07860902cf0495ca2b3e5f54263f5_::operator()(
        CAnalogCompositorManager **a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *))
{
  int v5; // eax
  int v6; // eax
  CAnalogCompositorManager *v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  v5 = (**a3)(a3, &GUID_09a4ed86_3c1f_49b9_a85f_ea9b5deb193d, &v10);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x205,
      (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v5,
      v10);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 48LL))(v10, v12);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x208,
      (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v6,
      v10);
    __debugbreak();
  }
  v7 = *a1;
  v8 = v12[0] - *((_QWORD *)*a1 + 16);
  if ( v12[0] == *((_QWORD *)*a1 + 16) )
    v8 = v12[1] - *((_QWORD *)v7 + 17);
  if ( !v8 )
    CAnalogCompositorManager::ReleaseHolographicDisplay(v7);
  CDesktopManager::ModeChangeImpl(CDesktopManager::s_pDesktopManagerInstance);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return 0LL;
}

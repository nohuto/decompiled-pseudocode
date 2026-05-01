/*
 * XREFs of ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180079750
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_44bbd199841b4d5ffbef2dab891128e4___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke @ 0x180076080 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180076080.c)
 * Callees:
 *     ??$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180075B7C (--$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x180077D40 (-OnLauncherHide@XamlLauncher@@UEAAXXZ.c)
 *     ?LauncherClosed@CommonStartTelemetry@@SAXXZ @ 0x18007AE98 (-LauncherClosed@CommonStartTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartHidden(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v3; // rbx
  XamlLauncher *v4; // rcx
  void (__fastcall *v5)(XamlLauncher *); // rax
  int v7; // [rsp+28h] [rbp-20h] BYREF
  XamlLauncherState *v8; // [rsp+30h] [rbp-18h]
  char v9; // [rsp+38h] [rbp-10h]

  v3 = (int *)((char *)this + 64);
  v7 = *((_DWORD *)this + 16);
  v8 = this;
  v9 = 1;
  v4 = (XamlLauncher *)*((_QWORD *)this + 16);
  v5 = *(void (__fastcall **)(XamlLauncher *))(*(_QWORD *)v4 + 32LL);
  if ( v5 == XamlLauncher::OnLauncherHide )
    XamlLauncher::OnLauncherHide(v4);
  else
    ((void (__fastcall *)(XamlLauncher *, void (__fastcall *)(XamlLauncher *), struct IInspectable *))v5)(
      v4,
      XamlLauncher::OnLauncherHide,
      a3);
  switch ( *v3 )
  {
    case 9:
      *v3 = 10;
      break;
    case 14:
      *v3 = 7;
      break;
    case 11:
    case 17:
      *v3 = 0;
      break;
  }
  CommonStartTelemetry::LauncherClosed();
  v9 = 0;
  StartWindowTelemetry::OnStartHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v7,
    v3);
  return 0LL;
}

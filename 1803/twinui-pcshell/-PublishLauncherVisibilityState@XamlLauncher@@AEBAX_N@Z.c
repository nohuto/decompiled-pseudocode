/*
 * XREFs of ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180077C4C
 * Callers:
 *     ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x180077D10 (-OnLauncherShow@XamlLauncher@@UEAAXXZ.c)
 *     ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x180077D40 (-OnLauncherHide@XamlLauncher@@UEAAXXZ.c)
 *     ?ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802263D0 (-ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x1802267E4 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_4e5ace4978557f95a503fdd97e32a105___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke @ 0x180227330 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180227330.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncher::PublishLauncherVisibilityState(XamlLauncher *this, unsigned __int8 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  v10 = a2;
  v4 = RtlPublishWnfStateData(WNF_IMSN_LAUNCHERVISIBILITY, 0LL, &v10, 4LL, 0LL) | 0x10000000;
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x37A,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v4,
      v7);
  v5 = *((_QWORD *)this + 16);
  v9 = 0LL;
  if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v5 + 72))(
         *(_QWORD *)(v5 + 72),
         &GUID_ad23ddfb_50f1_4f9f_ba1f_dda292ae0b6a,
         &v9) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, v3);
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}

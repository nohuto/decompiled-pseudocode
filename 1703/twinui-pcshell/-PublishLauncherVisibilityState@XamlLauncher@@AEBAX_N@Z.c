/*
 * XREFs of ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x18014D344
 * Callers:
 *     ?ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18014ABE0 (-ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x18014CC10 (-OnLauncherShow@XamlLauncher@@UEAAXXZ.c)
 *     ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x18014CC40 (-OnLauncherHide@XamlLauncher@@UEAAXXZ.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18014D25C (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_4e5ace4978557f95a503fdd97e32a105__2__1_::Invoke @ 0x1801506A0 (Microsoft--WRL--Details--InvokeHelper_Windows--Foundation--ITypedEventHandler_Windo_ea_1801506A0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncher::PublishLauncherVisibilityState(XamlLauncher *this, unsigned __int8 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  v7 = a2;
  RtlPublishWnfStateData(WNF_IMSN_LAUNCHERVISIBILITY, 0LL, &v7, 4LL, 0LL);
  v4 = *((_QWORD *)this + 14);
  v6 = 0LL;
  if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 48))(
         *(_QWORD *)(v4 + 48),
         &GUID_ad23ddfb_50f1_4f9f_ba1f_dda292ae0b6a,
         &v6) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, v3);
  v5 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}

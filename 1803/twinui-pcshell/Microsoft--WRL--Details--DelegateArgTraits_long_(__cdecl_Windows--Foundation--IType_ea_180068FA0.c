/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64_::_)(Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64___lambda_fb0510e18a4df379e3fb648dfc7f6c13___1_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64_::Invoke @ 0x180068FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x180065D90 (-OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64_::___Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64___lambda_fb0510e18a4df379e3fb648dfc7f6c13___1_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_____ptr64_::Invoke(
        __int64 a1,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *a3)
{
  __int64 (__fastcall *v3)(CortanaExperienceManagerNotification **, struct Windows::Internal::Shell::Experience::IShellExperienceView *, struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *); // r9
  CortanaExperienceManagerNotification **v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx

  v3 = *(__int64 (__fastcall **)(CortanaExperienceManagerNotification **, struct Windows::Internal::Shell::Experience::IShellExperienceView *, struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *))(a1 + 24);
  v4 = (CortanaExperienceManagerNotification **)(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  if ( v3 == CortanaDesktopExperienceView::OnViewEvent )
    v5 = CortanaDesktopExperienceView::OnViewEvent(v4, a2, a3);
  else
    v5 = ((__int64 (__fastcall *)(CortanaExperienceManagerNotification **))v3)(v4);
  v6 = v5;
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v5);
  return v6;
}

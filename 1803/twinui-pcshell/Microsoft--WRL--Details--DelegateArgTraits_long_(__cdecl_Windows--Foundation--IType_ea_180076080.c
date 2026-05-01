/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_44bbd199841b4d5ffbef2dab891128e4___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke @ 0x180076080
 * Callers:
 *     <none>
 * Callees:
 *     ?OnStartExitTransitionToCortanaCompleted@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180078840 (-OnStartExitTransitionToCortanaCompleted@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Exp.c)
 *     ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180079750 (-OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Win.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1800797F0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__IInspectable_____ptr64_::___Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_44bbd199841b4d5ffbef2dab891128e4___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke(
        __int64 a1,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  XamlLauncherState *v3; // rax
  __int64 (__fastcall *v4)(XamlLauncherState *__hidden, struct Windows::Internal::Shell::Experience::IStartExperienceManager *, struct IInspectable *); // r9
  int started; // eax
  unsigned int v6; // ebx

  v3 = (XamlLauncherState *)(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  v4 = *(__int64 (__fastcall **)(XamlLauncherState *__hidden, struct Windows::Internal::Shell::Experience::IStartExperienceManager *, struct IInspectable *))(a1 + 24);
  if ( v4 == XamlLauncherState::OnStartHidden )
  {
    started = XamlLauncherState::OnStartHidden(v3, a2, a3);
  }
  else if ( v4 == XamlLauncherState::OnStartShown )
  {
    started = XamlLauncherState::OnStartShown(v3, a2, a3);
  }
  else if ( v4 == XamlLauncherState::OnStartExitTransitionToCortanaCompleted )
  {
    started = XamlLauncherState::OnStartExitTransitionToCortanaCompleted(v3, a2, a3);
  }
  else
  {
    started = ((__int64 (__fastcall *)(XamlLauncherState *))v4)(v3);
  }
  v6 = started;
  if ( started < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)started);
  return v6;
}

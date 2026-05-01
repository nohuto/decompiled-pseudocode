/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64___lambda_a6b59bc3aa7c8484d39bafb26dd10abc___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64_::Invoke @ 0x180085A50
 * Callers:
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_4935cb68771a3c75d2224a753f78fcb0__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64___ @ 0x180085900 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_4935cb68771a3c75d2224a753f78fcb0__Windo.c)
 * Callees:
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1800794C0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64_::___Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64___lambda_a6b59bc3aa7c8484d39bafb26dd10abc___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64_::Invoke(
        __int64 a1,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *a3)
{
  __int64 (__fastcall *v3)(XamlLauncherState *, struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *, struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *); // r9
  XamlLauncherState *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx

  v3 = *(__int64 (__fastcall **)(XamlLauncherState *, struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *, struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *))(a1 + 24);
  v4 = (XamlLauncherState *)(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  if ( v3 == XamlLauncherState::OnCortanaShown )
    v5 = XamlLauncherState::OnCortanaShown(v4, a2, a3);
  else
    v5 = ((__int64 (__fastcall *)(XamlLauncherState *))v3)(v4);
  v6 = v5;
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v5);
  return v6;
}

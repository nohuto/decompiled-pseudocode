/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64___lambda_87fc7d809160b20f68e97a66791572a7___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64___lambda_87fc7d809160b20f68e97a66791572a7___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_ @ 0x1802258A4
 * Callers:
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x1802268E0 (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_::___Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64___lambda_87fc7d809160b20f68e97a66791572a7___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64___lambda_87fc7d809160b20f68e97a66791572a7___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64_(
        __int64 a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 16) = *a2;
  *(_QWORD *)a1 = off_180337530;
  return a1;
}

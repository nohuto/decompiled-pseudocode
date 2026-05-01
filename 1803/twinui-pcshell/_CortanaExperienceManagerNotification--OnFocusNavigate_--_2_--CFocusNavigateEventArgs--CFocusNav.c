/*
 * XREFs of _CortanaExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs::CFocusNavigateEventArgs @ 0x18015AAF4
 * Callers:
 *     Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs_enum_Windows::Internal::Shell::Experience::FocusNavigateDirection_&___ptr64_ @ 0x18015A268 (Microsoft--WRL--Details--Make__CortanaExperienceManagerNotification--OnFocusNavigate_--_2_--CFoc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaExperienceManagerNotification::OnFocusNavigate_::_2_::CFocusNavigateEventArgs::CFocusNavigateEventArgs(
        __int64 a1,
        int a2)
{
  *(_QWORD *)(a1 + 24) = 1LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs>::`vftable'{for `Windows::Internal::Shell::Experience::IFocusNavigateEventArgs'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_DWORD *)(a1 + 32) = a2;
  *(_QWORD *)a1 = off_180329B70;
  *(_QWORD *)(a1 + 8) = off_180329B18;
  return a1;
}

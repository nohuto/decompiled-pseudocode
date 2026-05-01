/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____ptr64_::_)(Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____ptr64___lambda_1ca60bb2e0140be4e377ba7d6b417dbe___1_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____ptr64_::Invoke @ 0x1800680D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800666C0 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____ptr64_::___Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____ptr64___lambda_1ca60bb2e0140be4e377ba7d6b417dbe___1_Windows::Internal::Shell::Experience::IShellExperienceView_____ptr64_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_____ptr64_::Invoke(
        __int64 a1,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *a3)
{
  int (__fastcall *v3)(ExperienceManagerUtils **, struct Windows::Internal::Shell::Experience::IShellExperienceView *, struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *); // r9
  ExperienceManagerUtils **v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx

  v3 = *(int (__fastcall **)(ExperienceManagerUtils **, struct Windows::Internal::Shell::Experience::IShellExperienceView *, struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *))(a1 + 24);
  v4 = (ExperienceManagerUtils **)(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  if ( v3 == CortanaSharedExperienceManager::_OnViewChangedHandler )
    v5 = CortanaSharedExperienceManager::_OnViewChangedHandler(v4, a2, a3);
  else
    v5 = ((__int64 (__fastcall *)(ExperienceManagerUtils **))v3)(v4);
  v6 = v5;
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v5);
  return v6;
}

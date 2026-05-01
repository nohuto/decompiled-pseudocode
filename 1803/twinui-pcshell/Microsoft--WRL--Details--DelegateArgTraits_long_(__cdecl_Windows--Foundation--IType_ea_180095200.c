/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_b7fc3b8724fe379c1b1e17e559a88230___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::Invoke @ 0x180095200
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnClientWindowReadyForPresentationChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180066B70 (-_OnClientWindowReadyForPresentationChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUICli.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::___Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_b7fc3b8724fe379c1b1e17e559a88230___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::Invoke(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  __int64 (__fastcall *v3)(CortanaSharedExperienceManager *, struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *); // r9
  CortanaSharedExperienceManager *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx

  v3 = *(__int64 (__fastcall **)(CortanaSharedExperienceManager *, struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *))(a1 + 24);
  v4 = (CortanaSharedExperienceManager *)(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  if ( v3 == CortanaSharedExperienceManager::_OnClientWindowReadyForPresentationChangedHandler )
    v5 = CortanaSharedExperienceManager::_OnClientWindowReadyForPresentationChangedHandler(v4, a2, a3);
  else
    v5 = ((__int64 (__fastcall *)(CortanaSharedExperienceManager *))v3)(v4);
  v6 = v5;
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v5);
  return v6;
}

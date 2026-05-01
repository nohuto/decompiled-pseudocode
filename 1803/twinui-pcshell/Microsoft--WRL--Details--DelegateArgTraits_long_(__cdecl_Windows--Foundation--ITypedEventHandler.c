/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_3bfb5a602b85e7686ece1d2b25427cc2___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::Invoke @ 0x18001AE90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18001B0C4 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x18004C0C0 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::___Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_3bfb5a602b85e7686ece1d2b25427cc2___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _BOOL8 v5; // r8
  __int64 v6; // rdx
  CImmersiveApp *v7; // rcx
  struct ITaskWindow *v8; // rdx
  int (*v9)(CImmersiveApp *__hidden, struct ITaskWindow *, bool); // rax
  int v10; // ebx
  struct IInspectable *v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v12);
  Microsoft::WRL::WeakRef::InternalResolve(
    (Microsoft::WRL::WeakRef *)(a1 + 24),
    &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
    &v12);
  if ( v12 )
  {
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 48LL))(a3, &v13) >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v6 = *(_QWORD *)(a1 + 16);
      v7 = *(CImmersiveApp **)(v6 + 136);
      if ( v7 )
      {
        LOBYTE(v5) = (_BYTE)v13 != 0;
        v8 = (struct ITaskWindow *)((v6 + 8) & -(__int64)(v6 != 0));
        v9 = *(int (**)(CImmersiveApp *__hidden, struct ITaskWindow *, bool))(*(_QWORD *)v7 + 512LL);
        if ( v9 == CImmersiveApp::OnViewReadinessChanged )
          CImmersiveApp::OnViewReadinessChanged(v7, v8, v5);
        else
          ((void (__fastcall *)(CImmersiveApp *, struct ITaskWindow *, _BOOL8))v9)(v7, v8, v5);
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    }
    v10 = 0;
  }
  else
  {
    v10 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v12);
  if ( v10 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v10);
  return (unsigned int)v10;
}

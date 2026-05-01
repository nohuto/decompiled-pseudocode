/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_::_)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_::Invoke @ 0x1801347C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_::___Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v4 = *a3;
    LOBYTE(v6) = 0;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v4 + 48))(a3, &v6);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
      *(_QWORD *)(a1 + 16),
      (_BYTE)v6 == 0 ? 0x80004005 : 0);
  }
  return 0LL;
}

/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8__2__1_::Invoke @ 0x180065570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8__2__1_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 16) )
  {
    v4 = *a3;
    v6 = 0;
    (*(void (__fastcall **)(__int64 *, char *))(v4 + 48))(a3, &v6);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
      *(_QWORD *)(a1 + 16),
      v6 == 0 ? 0x80004005 : 0);
  }
  return 0LL;
}

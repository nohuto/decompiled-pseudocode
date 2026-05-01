/*
 * XREFs of Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___ @ 0x180066C9C
 * Callers:
 *     ?TryInvokeBack@CTaskWindow@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180065680 (-TryInvokeBack@CTaskWindow@@UEAAJPEAUIAsyncCallback@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *result; // rax

  v2 = 0LL;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    *v5 = &IAppViewDataSourceAdapter::`vftable';
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs *>>::`vftable';
    *((_DWORD *)v5 + 3) = 1;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v6[2] = 0LL;
    if ( v6 + 2 != a2 )
    {
      v6[2] = *a2;
      *a2 = 0LL;
    }
    v2 = v6;
    *v6 = off_1801FE7F8;
  }
  result = a1;
  *a1 = v2;
  return result;
}

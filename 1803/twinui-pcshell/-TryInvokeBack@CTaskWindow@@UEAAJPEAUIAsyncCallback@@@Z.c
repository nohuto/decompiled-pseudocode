/*
 * XREFs of ?TryInvokeBack@CTaskWindow@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180134C10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_::_)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_ @ 0x1801344D8 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801344D8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::TryInvokeBack(CTaskWindow *this, struct IAsyncCallback *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  void *v6; // rbx
  void *v7; // rax
  void *v9; // [rsp+50h] [rbp+8h] BYREF
  void *v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 6);
  v5 = v4 == 0 ? 0x80004001 : 0;
  if ( v4 )
  {
    v6 = 0LL;
    v9 = 0LL;
    if ( a2 )
    {
      v10 = a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v10);
      v9 = a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
      v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v7 )
        v6 = (void *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_::___Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64___lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____ptr64_(
                       (__int64)v7,
                       &v9);
      Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v9);
      Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v10);
      v4 = *((_QWORD *)this + 6);
      v9 = v6;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v4 + 400LL))(v4, v6);
    if ( v6 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v5;
}

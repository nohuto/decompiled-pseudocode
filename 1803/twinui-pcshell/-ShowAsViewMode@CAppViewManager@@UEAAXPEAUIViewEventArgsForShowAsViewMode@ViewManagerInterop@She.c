/*
 * XREFs of ?ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180121940
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180009620 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC88 (-InternalRelease@-$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___1_long_ @ 0x18011D4D8 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18011D4D8.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CAppViewManager::ShowAsViewMode(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *a2)
{
  CAppViewManager *v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  int v6; // eax
  CAppViewManager *v7; // [rsp+28h] [rbp-18h] BYREF
  __int64 v8[2]; // [rsp+30h] [rbp-10h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *v9; // [rsp+60h] [rbp+20h] BYREF
  __int64 v10; // [rsp+68h] [rbp+28h] BYREF
  void *v11; // [rsp+70h] [rbp+30h] BYREF

  v3 = (CAppViewManager *)((char *)this - 32);
  v10 = (__int64)this - 32;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v10);
  v9 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
  v7 = v3;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v7);
  v8[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v8);
  v4 = 0LL;
  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___1_long_(
           v5,
           &v7);
  v11 = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease((__int64 *)&v7);
  v6 = CAppViewManager::_QueueOperation(v3, (struct IAsyncCallback *)v4);
  if ( v6 < 0 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, _QWORD))(*(_QWORD *)a2 + 88LL))(
      a2,
      (unsigned int)v6);
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease(&v10);
}

/*
 * XREFs of ?ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1PEAUIAsyncCallback@@@Z @ 0x180121A40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180009620 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC88 (-InternalRelease@-$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_a27a9a7cc32edd27e62d9bbcd3541f9f__&___ptr64__1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_a27a9a7cc32edd27e62d9bbcd3541f9f__&___ptr64__1_long_ @ 0x18011D3F4 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18011D3F4.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::ShowView(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, void *a6)
{
  CAppViewManager *v9; // rdi
  void *v10; // rbx
  void *v11; // rbx
  void *v12; // rax
  unsigned int v13; // ebx
  __int64 v15[3]; // [rsp+28h] [rbp-28h] BYREF
  int v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+44h] [rbp-Ch]
  void *v18; // [rsp+48h] [rbp-8h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF
  void *v20; // [rsp+88h] [rbp+38h] BYREF

  v9 = (CAppViewManager *)(a1 - 32);
  v19 = a1 - 32;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v19);
  v10 = a6;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&a6);
  v15[0] = (__int64)v9;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v15);
  v15[1] = a2;
  v15[2] = a3;
  v16 = a4;
  v17 = a5;
  v18 = v10;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v18);
  v11 = 0LL;
  v12 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
    v11 = (void *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_a27a9a7cc32edd27e62d9bbcd3541f9f______ptr64__1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_a27a9a7cc32edd27e62d9bbcd3541f9f______ptr64__1_long_(
                    (__int64)v12,
                    (__int64)v15);
  v20 = v11;
  v13 = CAppViewManager::_QueueOperation(v9, (struct IAsyncCallback *)v11);
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease(v15);
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&a6);
  Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease(&v19);
  return v13;
}

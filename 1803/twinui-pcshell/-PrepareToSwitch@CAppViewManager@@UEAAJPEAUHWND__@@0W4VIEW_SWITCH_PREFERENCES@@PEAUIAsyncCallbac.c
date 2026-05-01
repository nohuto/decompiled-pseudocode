/*
 * XREFs of ?PrepareToSwitch@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180121490
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180009620 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC88 (-InternalRelease@-$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b__&___ptr64__1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b__&___ptr64__1_long_ @ 0x18011D468 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18011D468.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::PrepareToSwitch(__int64 a1, __int64 a2, __int64 a3, int a4, void *a5)
{
  CAppViewManager *v8; // rdi
  void *v9; // rbx
  void *v10; // rbx
  void *v11; // rax
  unsigned int v12; // ebx
  __int64 v14[3]; // [rsp+28h] [rbp-28h] BYREF
  int v15; // [rsp+40h] [rbp-10h]
  void *v16; // [rsp+48h] [rbp-8h] BYREF
  __int64 v17; // [rsp+80h] [rbp+30h] BYREF
  void *v18; // [rsp+88h] [rbp+38h] BYREF

  v8 = (CAppViewManager *)(a1 - 32);
  v17 = a1 - 32;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v17);
  v9 = a5;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&a5);
  v14[0] = (__int64)v8;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v14);
  v14[1] = a2;
  v14[2] = a3;
  v15 = a4;
  v16 = v9;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v16);
  v10 = 0LL;
  v11 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
    v10 = (void *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b______ptr64__1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b______ptr64__1_long_(
                    (__int64)v11,
                    (__int64)v14);
  v18 = v10;
  v12 = CAppViewManager::_QueueOperation(v8, (struct IAsyncCallback *)v10);
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease(v14);
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&a5);
  Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease(&v17);
  return v12;
}

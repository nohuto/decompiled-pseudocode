/*
 * XREFs of ?Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180125470
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800083E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180009620 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC88 (-InternalRelease@-$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_3c4ff4ccd576f8db880f0fb482543cc9__&___ptr64__1_long___lambda_3c4ff4ccd576f8db880f0fb482543cc9__&___ptr64_ @ 0x18011CD24 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_18011CD24.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAppViewManager::Switch(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *a2)
{
  CAppViewManager *v3; // rbx
  __int64 *v4; // rax
  volatile int *v5; // rdx
  struct IAsyncCallback *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  CAppViewManager *v9; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+28h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *v12; // [rsp+78h] [rbp+30h] BYREF
  __int64 v13; // [rsp+80h] [rbp+38h] BYREF
  __int64 v14; // [rsp+88h] [rbp+40h] BYREF

  v3 = (CAppViewManager *)((char *)this - 32);
  v13 = (__int64)this - 32;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v13);
  v12 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v12);
  v9 = v3;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
  v10[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v10);
  v4 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_3c4ff4ccd576f8db880f0fb482543cc9______ptr64__1_long___lambda_3c4ff4ccd576f8db880f0fb482543cc9______ptr64_(
         &v11,
         &v9);
  v6 = (struct IAsyncCallback *)*v4;
  v14 = *v4;
  *v4 = 0LL;
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback>::Release(
      v7,
      v5);
  }
  v8 = CAppViewManager::_QueueOperation(v3, v6);
  if ( v8 < 0 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch *, _QWORD))(*(_QWORD *)a2 + 72LL))(
      a2,
      (unsigned int)v8);
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease((void **)&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease(&v13);
}

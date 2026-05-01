/*
 * XREFs of ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18012FC14
 * Callers:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C8C8 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005CD9C (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B9E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLO.c)
 *     ?InternalAddRef@?$ComPtr@VCImmersiveApp@@@WRL@Microsoft@@IEBAXXZ @ 0x180090E78 (-InternalAddRef@-$ComPtr@VCImmersiveApp@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&___ptr64_::CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&___ptr64_ @ 0x18012C998 (CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__-___ptr64_--CAsyncCallbackWit.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  CImmersiveApp *v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  __int64 (__fastcall *v5)(CImmersiveApp *); // rax
  __int64 (__fastcall *v6)(CImmersiveApp *); // rax
  __int64 v7[4]; // [rsp+28h] [rbp-20h] BYREF
  CImmersiveApp *v8; // [rsp+50h] [rbp+8h] BYREF
  void *v9; // [rsp+58h] [rbp+10h] BYREF

  v8 = (CImmersiveApp *)*((_QWORD *)this + 18);
  v2 = v8;
  Microsoft::WRL::ComPtr<CImmersiveApp>::InternalAddRef((__int64 *)&v8);
  v7[0] = (__int64)v2;
  Microsoft::WRL::ComPtr<CImmersiveApp>::InternalAddRef(v7);
  v7[1] = (__int64)this;
  v3 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v3 = CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625______ptr64_::CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625______ptr64_(
           v4,
           v7);
  v9 = v3;
  if ( v3 )
    (*(void (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 17) + 200LL))(*((_QWORD *)this + 17), v3);
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v9);
  if ( v2 )
  {
    v5 = *(__int64 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v2 + 16LL);
    if ( v5 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::Release(v2);
    else
      v5(v2);
  }
  if ( v2 )
  {
    v6 = *(__int64 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v2 + 16LL);
    if ( v6 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::Release(v2);
    else
      v6(v2);
  }
}

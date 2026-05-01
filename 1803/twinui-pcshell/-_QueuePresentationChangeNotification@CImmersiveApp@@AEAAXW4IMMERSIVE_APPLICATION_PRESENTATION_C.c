/*
 * XREFs of ?_QueuePresentationChangeNotification@CImmersiveApp@@AEAAXW4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x1800484C0
 * Callers:
 *     ?OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z @ 0x18004C0B0 (-OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z.c)
 *     ?OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ @ 0x18012F620 (-OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B9E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLO.c)
 *     ?InternalAddRef@?$ComPtr@VCImmersiveApp@@@WRL@Microsoft@@IEBAXXZ @ 0x180090E78 (-InternalAddRef@-$ComPtr@VCImmersiveApp@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_449cbe9a7981189f63ec9b7d8df3966c___ @ 0x18012C864 (Windows--Internal--ComTaskPool--QueueTask__lambda_449cbe9a7981189f63ec9b7d8df3966c___.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveApp::_QueuePresentationChangeNotification(CImmersiveApp *a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // esi
  __int64 (__fastcall *v8)(CImmersiveApp *); // rax
  __int64 (__fastcall *v9)(CImmersiveApp *); // rax
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  CImmersiveApp *v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  CImmersiveApp *v15; // [rsp+70h] [rbp+18h] BYREF

  v4 = *((_QWORD *)a1 + 87);
  if ( v4 )
  {
    v14 = *((_QWORD *)a1 + 87);
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v14);
    v15 = a1;
    Microsoft::WRL::ComPtr<CImmersiveApp>::InternalAddRef(&v15);
    v10 = v4;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v10);
    v11 = a1;
    Microsoft::WRL::ComPtr<CImmersiveApp>::InternalAddRef(&v11);
    v12 = a2;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_449cbe9a7981189f63ec9b7d8df3966c___(
           v6,
           v5,
           *((unsigned int *)a1 + 176),
           &v10);
    v8 = *(__int64 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)a1 + 16LL);
    if ( v8 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::Release(a1);
    else
      v8(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13B2,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v7,
        -2);
    v9 = *(__int64 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)a1 + 16LL);
    if ( v9 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::Release(a1);
    else
      v9(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}

/*
 * XREFs of CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___::CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___ @ 0x18026D998
 * Callers:
 *     CIconLoadingNotificationCallback_CreateInstance__lambda_456e5ff184e6c0b451f61a85fda58e65___ @ 0x18026D838 (CIconLoadingNotificationCallback_CreateInstance__lambda_456e5ff184e6c0b451f61a85fda58e65___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArrayChanged@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1802A453C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArray.c)
 */

_QWORD *__fastcall CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___::CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>();
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoaderNotifications>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *a1 = off_18033CD68;
  a1[2] = *a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1 + 2);
  a1[3] = a2[1];
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1 + 3);
  return a1;
}

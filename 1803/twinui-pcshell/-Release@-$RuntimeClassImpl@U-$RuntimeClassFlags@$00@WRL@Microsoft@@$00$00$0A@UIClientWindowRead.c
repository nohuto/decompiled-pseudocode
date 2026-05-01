/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003AD50
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_33ae1f57d3bf46c1270e08142e9d9c0c___::Run @ 0x18003AED0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_33ae1f57d3bf46c1270e08142e9d9c0c___--Run.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800A8C80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICli_ea_1800A8C80.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800A8C90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICli_ea_1800A8C90.c)
 * Callees:
 *     ??_EClientWindowReadyForPresentationEventArgs@@UEAAPEAXI@Z @ 0x18003AE00 (--_EClientWindowReadyForPresentationEventArgs@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::Release(
        ClientWindowReadyForPresentationEventArgs *this)
{
  signed __int64 v1; // rax
  ClientWindowReadyForPresentationEventArgs *v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt
  void *(__fastcall *v5)(ClientWindowReadyForPresentationEventArgs *__hidden, unsigned int); // rax
  void (*v6)(void); // rax

  v1 = *((_QWORD *)this + 7);
  v2 = this;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
    {
      v5 = *(void *(__fastcall **)(ClientWindowReadyForPresentationEventArgs *__hidden, unsigned int))(*(_QWORD *)v2 + 56LL);
      if ( v5 == ClientWindowReadyForPresentationEventArgs::`vector deleting destructor' )
        ClientWindowReadyForPresentationEventArgs::`vector deleting destructor'(v2, 1u);
      else
        v5(v2, 1u);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v6 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( (char *)v6 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      else
        v6();
    }
  }
  return v3;
}

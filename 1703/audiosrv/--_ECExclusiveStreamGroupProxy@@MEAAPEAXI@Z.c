/*
 * XREFs of ??_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800A5050
 * Callers:
 *     ??_ECExclusiveStreamGroupProxy@@O7EAAPEAXI@Z @ 0x180058350 (--_ECExclusiveStreamGroupProxy@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180009D70 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180079AC0 (--1-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspectable@@VNil@.c)
 */

CExclusiveStreamGroupProxy *__fastcall CExclusiveStreamGroupProxy::`vector deleting destructor'(
        CExclusiveStreamGroupProxy *this,
        char a2)
{
  CBaseStreamGroupProxy *v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CExclusiveStreamGroupProxy::`vftable'{for `IInspectable'};
  v4 = (CExclusiveStreamGroupProxy *)((char *)this + 8);
  *(_QWORD *)v4 = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>>,1,1>'};
  *((_QWORD *)this + 27) = &CExclusiveStreamGroupProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 28) = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  CBaseStreamGroupProxy::DisconnectFromSaDevice(v4);
  v5 = *((_QWORD *)this + 57);
  if ( v5 )
  {
    *((_QWORD *)this + 57) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1D0);
  return this;
}

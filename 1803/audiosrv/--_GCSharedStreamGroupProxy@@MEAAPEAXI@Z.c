/*
 * XREFs of ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180045170
 * Callers:
 *     ??_ECSharedStreamGroupProxy@@O7EAAPEAXI@Z @ 0x180065B20 (--_ECSharedStreamGroupProxy@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x1800450F0 (-DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ.c)
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800465C0 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x180046740 (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

CSharedStreamGroupProxy *__fastcall CSharedStreamGroupProxy::`scalar deleting destructor'(
        CSharedStreamGroupProxy *this,
        char a2)
{
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // r10

  *(_QWORD *)this = &CSharedStreamGroupProxy::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CBaseStreamGroupProxy>,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 31) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 32) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  if ( *((_QWORD *)this + 12) )
    CBaseStreamGroupProxy::DisconnectFromSaDevice((CSharedStreamGroupProxy *)((char *)this + 8));
  CSharedStreamGroupProxy::DeleteAuxiliaryInputStream((unsigned __int64)this + 8);
  v4 = *((_QWORD *)this + 55);
  if ( v4 )
  {
    *((_QWORD *)this + 55) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (void *)*((_QWORD *)this + 54);
  if ( v5 )
    CoTaskMemFree(v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
  if ( *((__int64 *)this + 34) < 0
    && !ATL::SafeDecrementReferenceMultiThread((int *)(2LL * *((_QWORD *)this + 34) + 12)) )
  {
    if ( v6 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  CBaseStreamGroupProxy::~CBaseStreamGroupProxy((CSharedStreamGroupProxy *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1C0);
  return this;
}

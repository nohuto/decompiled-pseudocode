/*
 * XREFs of ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x18002BDE0
 * Callers:
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x18002BDAC (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180009D70 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x18002BCA0 (-DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSharedStreamGroupProxy::~CSharedStreamGroupProxy(CSharedStreamGroupProxy *this)
{
  bool v1; // zf
  CSharedStreamGroupProxy *v2; // rdi
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rcx

  v1 = *((_QWORD *)this + 11) == 0LL;
  *(_QWORD *)this = &CSharedStreamGroupProxy::`vftable'{for `IInspectable'};
  v2 = (CSharedStreamGroupProxy *)((char *)this + 8);
  *((_QWORD *)this + 1) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>>,1,1>'};
  *((_QWORD *)this + 27) = &CSharedStreamGroupProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 28) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( !v1 )
    CBaseStreamGroupProxy::DisconnectFromSaDevice((CSharedStreamGroupProxy *)((char *)this + 8));
  CSharedStreamGroupProxy::DeleteAuxiliaryInputStream(v2);
  v4 = *((_QWORD *)this + 51);
  if ( v4 )
  {
    *((_QWORD *)this + 51) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (void *)*((_QWORD *)this + 50);
  if ( v5 )
    CoTaskMemFree(v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  v6 = *((_QWORD *)this + 30);
  if ( v6 < 0 )
  {
    v7 = (volatile signed __int32 *)(2 * v6);
    if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v7 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 32LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  CBaseStreamGroupProxy::~CBaseStreamGroupProxy(v2);
}

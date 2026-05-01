/*
 * XREFs of ??_GAppViewIconFactory@@UEAAPEAXI@Z @ 0x1801987E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

AppViewIconFactory *__fastcall AppViewIconFactory::`scalar deleting destructor'(AppViewIconFactory *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rcx

  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 < 0 )
  {
    v7 = (volatile signed __int32 *)(2 * v6);
    if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v7 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 32LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

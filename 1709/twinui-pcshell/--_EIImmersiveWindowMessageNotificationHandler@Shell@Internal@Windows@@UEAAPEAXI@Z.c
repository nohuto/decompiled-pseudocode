/*
 * XREFs of ??_EIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x1800A9480
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *__fastcall Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vector deleting destructor'(
        Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *this,
        __int64 a2)
{
  char *v2; // rdi
  char *v4; // rcx
  char v5; // si
  char *v6; // rcx
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rcx

  v2 = (char *)this + 40;
  v4 = (char *)*((_QWORD *)this + 18);
  v5 = a2;
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 24LL))(v4, a2);
    *((_QWORD *)v2 + 13) = 0LL;
  }
  v6 = (char *)*((_QWORD *)v2 + 13);
  if ( v6 )
  {
    LOBYTE(a2) = v6 != v2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 24LL))(v6, a2);
    *((_QWORD *)v2 + 13) = 0LL;
  }
  v7 = *((_QWORD *)this + 4);
  if ( v7 < 0 )
  {
    v8 = (volatile signed __int32 *)(2 * v7);
    if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v8 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 32LL))(v8, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( (v5 & 1) != 0 )
    operator delete(this);
  return this;
}

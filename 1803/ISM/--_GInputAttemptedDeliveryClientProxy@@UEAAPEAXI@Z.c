/*
 * XREFs of ??_GInputAttemptedDeliveryClientProxy@@UEAAPEAXI@Z @ 0x180022E30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

InputAttemptedDeliveryClientProxy *__fastcall InputAttemptedDeliveryClientProxy::`scalar deleting destructor'(
        InputAttemptedDeliveryClientProxy *this,
        char a2)
{
  __int64 v4; // rcx
  void (__fastcall ***v5)(_QWORD); // rcx

  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v5 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  if ( v5 )
    (**v5)(v5);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

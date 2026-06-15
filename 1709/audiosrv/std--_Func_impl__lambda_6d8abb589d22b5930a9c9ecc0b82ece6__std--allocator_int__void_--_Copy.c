/*
 * XREFs of std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Copy @ 0x18000C970
 * Callers:
 *     ??0GENERIC_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x18000C5FC (--0GENERIC_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x18005B1D0 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  if ( a2 )
  {
    *a2 = off_1800F20C0;
    v3 = *(_QWORD *)(a1 + 8);
    a2[1] = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return a2;
}

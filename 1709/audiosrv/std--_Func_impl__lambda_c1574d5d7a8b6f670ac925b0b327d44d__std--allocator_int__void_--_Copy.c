/*
 * XREFs of std::_Func_impl__lambda_c1574d5d7a8b6f670ac925b0b327d44d__std::allocator_int__void_::_Copy @ 0x1800951E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Func_impl__lambda_c1574d5d7a8b6f670ac925b0b327d44d__std::allocator_int__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  if ( a2 )
  {
    *a2 = off_1800F4398;
    v3 = *(_QWORD *)(a1 + 8);
    a2[1] = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return a2;
}

/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_e48e3d37c3c7735d49d7ed6482b7c5e4__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move @ 0x1800B9EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_e48e3d37c3c7735d49d7ed6482b7c5e4__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx

  if ( !a2 )
    __fastfail(7u);
  *a2 = off_1801B0020;
  a2[1] = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  v4 = a2[1];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  a2[1] = v3;
  return a2;
}

/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_fcf725c2e645c30ebf8c18d30787c565__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move @ 0x1800797A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_fcf725c2e645c30ebf8c18d30787c565__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx

  if ( !a2 )
    __fastfail(7u);
  v2 = (_QWORD *)(a1 + 8);
  *a2 = off_1801FF5F8;
  a2[1] = 0LL;
  if ( a2 + 1 != v2 )
  {
    a2[1] = *v2;
    *v2 = 0LL;
  }
  a2[2] = v2[1];
  return a2;
}

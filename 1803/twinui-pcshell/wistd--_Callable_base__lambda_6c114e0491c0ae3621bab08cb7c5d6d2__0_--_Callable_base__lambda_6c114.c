/*
 * XREFs of wistd::_Callable_base__lambda_6c114e0491c0ae3621bab08cb7c5d6d2__0_::_Callable_base__lambda_6c114e0491c0ae3621bab08cb7c5d6d2__0___lambda_6c114e0491c0ae3621bab08cb7c5d6d2___ @ 0x18009E194
 * Callers:
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_6c114e0491c0ae3621bab08cb7c5d6d2___ @ 0x18009E1BC (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_6c114e0491c0ae3621bab0.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_6c114e0491c0ae3621bab08cb7c5d6d2__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move @ 0x18009E700 (wistd--_Func_impl_wistd--_Callable_obj__lambda_6c114e0491c0ae3621bab08cb7c5d6d2__0__ea_18009E700.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::_Callable_base__lambda_6c114e0491c0ae3621bab08cb7c5d6d2__0_::_Callable_base__lambda_6c114e0491c0ae3621bab08cb7c5d6d2__0___lambda_6c114e0491c0ae3621bab08cb7c5d6d2___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rdx

  *a1 = *a2;
  v2 = a2 + 1;
  a1[1] = 0LL;
  if ( a1 + 1 != v2 )
  {
    a1[1] = *v2;
    *v2 = 0LL;
  }
  return a1;
}

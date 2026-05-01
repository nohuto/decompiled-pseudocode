/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move @ 0x1800C0390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  if ( !a2 )
    __fastfail(7u);
  v2 = a1 + 8;
  *(_QWORD *)a2 = off_1801B03A0;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( a2 + 8 != v2 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)v2;
    *(_QWORD *)v2 = 0LL;
  }
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(v2 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(v2 + 16);
  return a2;
}

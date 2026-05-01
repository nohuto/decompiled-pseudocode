/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_3d8906fd39e8697ad5cd499b3a96645c__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1801B9980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_3d8906fd39e8697ad5cd499b3a96645c__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1)
{
  void *v1; // rcx

  v1 = (void *)(*(_QWORD *)(a1 + 8) + 56LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF) == 1 )
    WakeByAddressSingle(v1);
}

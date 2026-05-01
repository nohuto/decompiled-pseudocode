/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_8794f5c9d84be05553a61fbcf7abc168__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy @ 0x180159070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_8794f5c9d84be05553a61fbcf7abc168__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx

  if ( !a2 )
    __fastfail(7u);
  *a2 = off_18031FC60;
  a2[1] = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  a2[2] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
  return a2;
}

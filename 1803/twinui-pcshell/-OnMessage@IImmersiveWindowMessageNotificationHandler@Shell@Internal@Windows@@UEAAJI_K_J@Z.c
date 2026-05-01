/*
 * XREFs of ?OnMessage@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@UEAAJI_K_J@Z @ 0x1800956A0
 * Callers:
 *     <none>
 * Callees:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180095700 (wistd--_Func_impl_wistd--_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd--detai.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::OnMessage(
        Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *this,
        int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64, int *, __int64 *, __int64 *); // rax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v7 = a4;
  v9 = a3;
  v8 = a2;
  v4 = *((_QWORD *)this + 17);
  if ( !v4 )
    __fastfail(7u);
  v5 = *(__int64 (__fastcall **)(__int64, int *, __int64 *, __int64 *))(*(_QWORD *)v4 + 16LL);
  if ( (char *)v5 == (char *)wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call )
    return wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
             v4,
             &v8,
             &v9,
             &v7);
  else
    return v5(v4, &v8, &v9, &v7);
}

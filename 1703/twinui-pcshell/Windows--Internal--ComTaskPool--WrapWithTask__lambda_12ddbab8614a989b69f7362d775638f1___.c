/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_12ddbab8614a989b69f7362d775638f1___ @ 0x1800B9704
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_e48e3d37c3c7735d49d7ed6482b7c5e4__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800B9DD0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_e48e3d37c3c7735d49d7ed6482b7c5e4__0__wistd--detai.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_12ddbab8614a989b69f7362d775638f1_____lambda_12ddbab8614a989b69f7362d775638f1___ @ 0x1800B9C40 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_12ddbab8614a9.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_12ddbab8614a989b69f7362d775638f1___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_12ddbab8614a989b69f7362d775638f1_____lambda_12ddbab8614a989b69f7362d775638f1___(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}

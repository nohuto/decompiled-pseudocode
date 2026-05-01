/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_e48e3d37c3c7735d49d7ed6482b7c5e4__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800B9DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_12ddbab8614a989b69f7362d775638f1___ @ 0x1800B9704 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_12ddbab8614a989b69f7362d775638f1___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_e48e3d37c3c7735d49d7ed6482b7c5e4__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rcx
  IUnknown *v3; // rbx
  DWORD CurrentThreadId; // eax
  int v5; // ebx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h]

  if ( *a2 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v9 = v2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = (IUnknown *)*Windows::Internal::ComTaskPool::WrapWithTask__lambda_12ddbab8614a989b69f7362d775638f1___(&v8);
    CurrentThreadId = GetCurrentThreadId();
    v5 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v3, 0LL);
    v6 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA2,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
}

/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_8c2eb6bb1413cf59ab5891e7c3a52c0b__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800CDF90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_33e66b590dea71948f9c2c80860a78e8___ @ 0x1800CD78C (Windows--Internal--ComTaskPool--QueueTask__lambda_33e66b590dea71948f9c2c80860a78e8___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_8c2eb6bb1413cf59ab5891e7c3a52c0b__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        _DWORD *a2)
{
  struct IUnknownVtbl *v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknownVtbl *v5; // [rsp+48h] [rbp+10h] BYREF

  if ( *a2 )
  {
    v2 = *(struct IUnknownVtbl **)(a1 + 8);
    v5 = v2;
    if ( v2 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v2->QueryInterface + 1))(v2);
    v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_33e66b590dea71948f9c2c80860a78e8___((__int64)v2, &v5);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA3,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    if ( v5 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v5->QueryInterface + 2))(v5);
  }
}

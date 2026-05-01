/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_2222b67d32117af566a92650ebbd3d8c__0__wistd::details::function_allocator_wistd::_Func_class_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180027C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180028AF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_2222b67d32117af566a92650ebbd3d8c__0__wistd::details::function_allocator_wistd::_Func_class_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // eax
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(***(_QWORD ***)(a1 + 8) + 32LL))(**(_QWORD **)(a1 + 8), &v13);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = *(__int64 **)(a1 + 8);
    v5 = *v4;
    if ( *v4 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = *(__int64 **)(a1 + 8);
    v7 = *(__int64 **)(a1 + 16);
    v12 = v13;
    v8 = *v6;
    v9 = *v7;
    if ( *v6 )
    {
      *v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, &v12, v6);
    v3 = 0;
    if ( v10 < 0 )
      return (unsigned int)v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x204,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v2);
  }
  return v3;
}

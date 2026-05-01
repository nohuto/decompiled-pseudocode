/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_154c5b1f890d5c3087fe5f2f075becc9__0__wistd::details::function_allocator_wistd::_Func_class_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180027AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000A63C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_154c5b1f890d5c3087fe5f2f075becc9__0__wistd::details::function_allocator_wistd::_Func_class_long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1)
{
  _QWORD *v2; // rax
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  bool v7; // zf
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  if ( **(_BYTE **)(a1 + 8) )
  {
    v2 = *(_QWORD **)(a1 + 16);
    v14 = 0LL;
    v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v2)(
           *v2,
           &GUID_a4d5762a_2132_470e_9f26_3c564daa97b6,
           &v14);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3B3,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v3);
      v5 = v14;
      goto LABEL_4;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
           v14,
           *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL),
           **(unsigned __int8 **)(a1 + 32));
    v5 = v14;
    v4 = v6;
    if ( v6 < 0 )
    {
LABEL_4:
      if ( v5 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      return (unsigned int)v4;
    }
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return 0;
  }
  v7 = **(_BYTE **)(a1 + 32) == 0;
  v8 = **(__int64 ***)(a1 + 16);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL);
  v10 = *v8;
  if ( v7 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v10 + 48))(v8, v9);
    v4 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3B8,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v11);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v10 + 72))(v8, v9);
  }
  if ( v4 >= 0 )
    return 0;
  return (unsigned int)v4;
}

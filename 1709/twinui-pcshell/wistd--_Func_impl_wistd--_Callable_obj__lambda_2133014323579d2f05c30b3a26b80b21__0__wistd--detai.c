/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_2133014323579d2f05c30b3a26b80b21__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180079600
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_2133014323579d2f05c30b3a26b80b21__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+48h] [rbp+10h]

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 520LL);
  v10 = v2;
  AcquireSRWLockShared(v2);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v4 + 536) )
  {
    do
    {
      v9 = 0LL;
      v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(v4 + 528) + 8 * v3);
      v6 = (**v5)(v5, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, &v9);
      if ( v6 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x28,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v6);
      v7 = v9;
      if ( v9 )
      {
        v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      ++v3;
      v4 = *(_QWORD *)(a1 + 8);
    }
    while ( v3 < *(_QWORD *)(v4 + 536) );
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
}

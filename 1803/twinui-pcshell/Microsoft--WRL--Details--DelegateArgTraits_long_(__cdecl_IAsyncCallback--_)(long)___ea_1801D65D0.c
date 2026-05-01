/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_85c963b02c79dd052d34edceadb0534c___1_long_::Invoke @ 0x1801D65D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_85c963b02c79dd052d34edceadb0534c___1_long_::Invoke(
        __int64 a1,
        int a2)
{
  int v3; // eax
  signed int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 16) + 72LL))(*(_QWORD *)(a1 + 16), a2 >= 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 628LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 48LL))(*(_QWORD *)(a1 + 24));
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 629LL;
    goto LABEL_3;
  }
  v4 = 0;
LABEL_7:
  if ( v4 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v4);
  return (unsigned int)v4;
}

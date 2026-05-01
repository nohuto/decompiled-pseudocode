/*
 * XREFs of CAsyncCallbackWithLambda__lambda_d0b6ea00cfdc93c641354d34aa8c8171___::Invoke @ 0x180142F30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIAllUpViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801429F4 (--$query@UIAllUpViewHostInternal@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAsyncCallbackWithLambda__lambda_d0b6ea00cfdc93c641354d34aa8c8171___::Invoke(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  HWND ForegroundWindow; // rax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v8; // [rsp+40h] [rbp+8h] BYREF

  wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHostInternal>(
    (_QWORD *)(*(_QWORD *)(a1 + 40) + 56LL),
    (__int64)&v8);
  v2 = v8;
  v3 = *v8;
  ForegroundWindow = GetForegroundWindow();
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, HWND))(v3 + 24))(v2, ForegroundWindow) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 56LL) + 40LL))(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 56LL));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)v5);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
  return 0LL;
}

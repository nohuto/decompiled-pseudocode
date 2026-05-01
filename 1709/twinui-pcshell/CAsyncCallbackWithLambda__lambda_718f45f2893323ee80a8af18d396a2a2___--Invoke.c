/*
 * XREFs of CAsyncCallbackWithLambda__lambda_718f45f2893323ee80a8af18d396a2a2___::Invoke @ 0x18017B540
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_718f45f2893323ee80a8af18d396a2a2___::Invoke(__int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 56) + 48LL) + 40LL))(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 48LL));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
      (const char *)(unsigned int)v1);
  return 0LL;
}

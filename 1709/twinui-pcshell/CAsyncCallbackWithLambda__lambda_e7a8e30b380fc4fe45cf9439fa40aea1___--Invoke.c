/*
 * XREFs of CAsyncCallbackWithLambda__lambda_e7a8e30b380fc4fe45cf9439fa40aea1___::Invoke @ 0x1801771E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAsyncCallbackWithLambda__lambda_e7a8e30b380fc4fe45cf9439fa40aea1___::Invoke(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h]

  v1 = Platform::Details::ResolveWeakReference(&_uuidof__AU__IXamlAllUpViewControllerPublicNonVirtuals__, a1 + 56);
  v2 = v1;
  v8 = v1;
  v7 = 0LL;
  if ( v1 )
  {
    v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v1 + 56))(
           *(_QWORD *)(v1 + 56),
           &GUID_389221b7_bf28_4d25_9501_b4491d822be1,
           &v7);
    if ( v3 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11C,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)v4);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return 0LL;
}

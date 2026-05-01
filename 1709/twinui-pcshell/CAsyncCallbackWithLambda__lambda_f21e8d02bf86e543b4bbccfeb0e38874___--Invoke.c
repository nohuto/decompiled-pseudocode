/*
 * XREFs of CAsyncCallbackWithLambda__lambda_f21e8d02bf86e543b4bbccfeb0e38874___::Invoke @ 0x180177300
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAsyncCallbackWithLambda__lambda_f21e8d02bf86e543b4bbccfeb0e38874___::Invoke(__int64 a1)
{
  __int64 v1; // rax
  __int64 (__fastcall ****v2)(_QWORD, _QWORD, _QWORD); // rsi
  int v3; // eax
  __int64 *v4; // rbx
  __int64 v5; // rdi
  HWND ForegroundWindow; // rax
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h]

  v1 = Platform::Details::ResolveWeakReference(&_uuidof__AU__IXamlAllUpViewControllerPublicNonVirtuals__, a1 + 56);
  v2 = (__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v1;
  v13 = v1;
  v11 = 0LL;
  if ( v1 )
  {
    v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))(v1 + 56))(
           *(_QWORD *)(v1 + 56),
           &GUID_24d6236f_83b7_4abc_b7a9_082c901b9839,
           &v12);
    if ( v3 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v3);
    v4 = v12;
    v5 = *v12;
    ForegroundWindow = GetForegroundWindow();
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, HWND))(v5 + 24))(v4, ForegroundWindow) )
    {
      v7 = (**v2[7])(v2[7], &GUID_389221b7_bf28_4d25_9501_b4491d822be1, &v11);
      if ( v7 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x15FD,
          (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
          (const char *)(unsigned int)v7);
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 64LL))(v11);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10B,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
          (const char *)(unsigned int)v8);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
  }
  if ( v2 )
    ((void (__fastcall *)(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*v2)[2])(v2);
  return 0LL;
}

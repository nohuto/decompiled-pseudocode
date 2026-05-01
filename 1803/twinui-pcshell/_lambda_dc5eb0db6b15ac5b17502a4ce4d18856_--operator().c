/*
 * XREFs of _lambda_dc5eb0db6b15ac5b17502a4ce4d18856_::operator() @ 0x180273278
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53___::Invoke @ 0x1802733B0 (CAsyncCallbackWithLambda__lambda_6dcf47c7a64d744d561044cc52c68c53___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 */

__int64 __fastcall lambda_dc5eb0db6b15ac5b17502a4ce4d18856_::operator()(__int64 *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)a1[1] + 24LL))(
         a1[1],
         &GUID_09bd08f6_5805_4a9c_b795_a08c46164aea,
         &v8);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = v8;
    v5 = *a1;
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, v5);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161F,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v2);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
      (const char *)v3);
  }
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v8);
  return v3;
}

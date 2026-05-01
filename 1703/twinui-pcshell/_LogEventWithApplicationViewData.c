/*
 * XREFs of _LogEventWithApplicationViewData @ 0x1800D7474
 * Callers:
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1800DC2F0 (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___::Invoke @ 0x1800E1160 (CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___--Invoke.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LogEventWithApplicationViewData(__int64 a1, void (__fastcall *a2)(LPVOID *))
{
  int v3; // eax
  unsigned int v4; // ebx
  LPVOID pv[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID v8; // [rsp+50h] [rbp+8h] BYREF

  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v3 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a1 + 112LL))(a1, pv);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v8 = pv[0];
    a2(&v8);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x44,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v3);
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v4;
}

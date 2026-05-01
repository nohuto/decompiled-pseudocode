/*
 * XREFs of CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___::Invoke @ 0x1800E1160
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _LogEventWithApplicationViewData @ 0x1800D7474 (_LogEventWithApplicationViewData.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DA250 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DA948 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___::Invoke(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 48);
  if ( *(_DWORD *)(v1 + 408) != v3 )
  {
    *(_DWORD *)(v1 + 408) = v3;
    if ( !v3 )
    {
      v4 = *(_QWORD *)(v1 + 384);
      if ( v4 )
      {
        LogEventWithApplicationViewData(
          v4,
          (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::ReplayPendingAppView<unsigned short const *>);
        v5 = HolographicPositioner::_HandleControlGainedForView(
               (HolographicPositioner *)v1,
               *(int (__fastcall ****)(struct IApplicationView *, GUID *, __int64 *))(v1 + 384),
               0LL);
        if ( v5 < 0 )
        {
          v6 = 1622LL;
LABEL_6:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v6,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v5);
          return (unsigned int)v5;
        }
        v5 = HolographicPositioner::_RaiseRequestNavigateToView(
               (HolographicPositioner *)v1,
               *(struct IApplicationView **)(v1 + 384));
        if ( v5 < 0 )
        {
          v6 = 1625LL;
          goto LABEL_6;
        }
        v7 = *(_QWORD *)(v1 + 384);
        if ( v7 )
        {
          *(_QWORD *)(v1 + 384) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
      }
    }
  }
  return v2;
}

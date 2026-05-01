/*
 * XREFs of ?_OnShellStateChanged@HolographicPositioner@@AEAAJW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x1801B2CA0
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_84a34e4095d1745ec45b032db64765f5___::Invoke @ 0x1801AF320 (CAsyncCallbackWithLambda__lambda_84a34e4095d1745ec45b032db64765f5___--Invoke.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B1338 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B1DE4 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     _LogEventWithApplicationViewData @ 0x1801B2A78 (_LogEventWithApplicationViewData.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B2FDC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall HolographicPositioner::_OnShellStateChanged(__int64 a1, int a2)
{
  struct IApplicationView **v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 432) == a2 )
    return 0LL;
  *(_DWORD *)(a1 + 432) = a2;
  if ( a2 )
  {
    if ( a2 != 1 )
      return 0LL;
    v3 = (struct IApplicationView **)(a1 + 408);
    v4 = *(_QWORD *)(a1 + 408);
    if ( !v4 )
      return 0LL;
    LogEventWithApplicationViewData(
      v4,
      (void (__fastcall *)(__int64 *))HolographicPositionerTelemetry::TerminatePendingAppViewForOOBE<unsigned short const *>);
    v5 = HolographicPositioner::_CloseView((HolographicPositioner *)a1, *v3);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x793,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    goto LABEL_12;
  }
  v3 = (struct IApplicationView **)(a1 + 408);
  v8 = *(_QWORD *)(a1 + 408);
  if ( v8 )
  {
    LogEventWithApplicationViewData(
      v8,
      (void (__fastcall *)(__int64 *))HolographicPositionerTelemetry::ReplayPendingAppView<unsigned short const *>);
    v9 = HolographicPositioner::_HandleControlGainedForView((HolographicPositioner *)a1, *v3, 0LL);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1919LL,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v9);
    v10 = HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)a1, *v3);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1922LL,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v10);
LABEL_12:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v3);
  }
  return 0LL;
}

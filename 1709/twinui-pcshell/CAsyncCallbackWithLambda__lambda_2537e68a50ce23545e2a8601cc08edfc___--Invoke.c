/*
 * XREFs of CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___::Invoke @ 0x180105F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _LogEventWithApplicationViewData @ 0x1800FA890 (_LogEventWithApplicationViewData.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FE680 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF238 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180100DCC (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___::Invoke(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  int v3; // edx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rcx
  void (*v8)(void); // rax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 64);
  if ( *(_DWORD *)(v1 + 464) != v3 )
  {
    *(_DWORD *)(v1 + 464) = v3;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = *(_QWORD *)(v1 + 440);
        if ( v4 )
        {
          LogEventWithApplicationViewData(
            v4,
            (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::TerminatePendingAppViewForOOBE<unsigned short const *>);
          v5 = HolographicPositioner::_CloseView((HolographicPositioner *)v1, *(struct IApplicationView **)(v1 + 440));
          v6 = v5;
          if ( v5 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x7CE,
              (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
              (const char *)(unsigned int)v5);
            return v6;
          }
          v7 = *(_QWORD *)(v1 + 440);
          if ( !v7 )
            return v2;
          *(_QWORD *)(v1 + 440) = 0LL;
          v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
LABEL_16:
          v8();
        }
      }
    }
    else
    {
      v9 = *(_QWORD *)(v1 + 440);
      if ( v9 )
      {
        LogEventWithApplicationViewData(
          v9,
          (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::ReplayPendingAppView<unsigned short const *>);
        v10 = HolographicPositioner::_HandleControlGainedForView(
                (HolographicPositioner *)v1,
                *(struct IApplicationView **)(v1 + 440),
                0LL);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x7BA,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v10);
        v11 = HolographicPositioner::_RaiseRequestNavigateToView(
                (HolographicPositioner *)v1,
                *(struct IApplicationView **)(v1 + 440));
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x7BD,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v11);
        v12 = *(_QWORD *)(v1 + 440);
        if ( v12 )
        {
          *(_QWORD *)(v1 + 440) = 0LL;
          v8 = *(void (**)(void))(*(_QWORD *)v12 + 16LL);
          goto LABEL_16;
        }
      }
    }
  }
  return v2;
}

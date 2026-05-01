/*
 * XREFs of ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180108770
 * Callers:
 *     ?PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ @ 0x1800F4500 (-PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1800F76FC (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x1800F7A78 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1800F9508 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 *     wil::details::ScopeExitFn__lambda_0dcf13e7d39f28d4baed28b643a2d3bb___::_ScopeExitFn__lambda_0dcf13e7d39f28d4baed28b643a2d3bb___ @ 0x1800FAF00 (wil--details--ScopeExitFn__lambda_0dcf13e7d39f28d4baed28b643a2d3bb___--_ScopeExitFn__lambda_0dcf.c)
 *     wil::details::ScopeExitFn__lambda_be3d17dae4ee7e6b61c96b7ca4abf7a9___::_ScopeExitFn__lambda_be3d17dae4ee7e6b61c96b7ca4abf7a9___ @ 0x1800FB058 (wil--details--ScopeExitFn__lambda_be3d17dae4ee7e6b61c96b7ca4abf7a9___--_ScopeExitFn__lambda_be3d.c)
 *     wil::details::ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___::_ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___ @ 0x1800FB084 (wil--details--ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___--_ScopeExitFn__lambda_da6f.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::catch$25 @ 0x18019E11C (_ViewEventDispatcher--ViewNavigationRequested_--_1_--catch$25.c)
 *     _ViewEventDispatcher::ViewCreated_::_1_::catch$12 @ 0x18019E3A0 (_ViewEventDispatcher--ViewCreated_--_1_--catch$12.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$NavigateView@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTelemetry@@SAXAEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010D0BC (--$NavigateView@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManager.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewManagerBridge::NavigateView(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v5; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  if ( !*(_BYTE *)(a1 + 137) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(**(_QWORD **)(a1 + 96) + 112LL))(
           *(_QWORD *)(a1 + 96),
           a2,
           a3,
           0LL,
           1);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB9,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v3);
    ViewManagerInteropTelemetry::NavigateView<unsigned int &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
      &v5,
      &v6);
  }
}

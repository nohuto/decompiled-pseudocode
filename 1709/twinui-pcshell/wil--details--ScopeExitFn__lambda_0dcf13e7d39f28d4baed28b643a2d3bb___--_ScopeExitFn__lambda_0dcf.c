/*
 * XREFs of wil::details::ScopeExitFn__lambda_0dcf13e7d39f28d4baed28b643a2d3bb___::_ScopeExitFn__lambda_0dcf13e7d39f28d4baed28b643a2d3bb___ @ 0x1801262B4
 * Callers:
 *     _ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor$3 @ 0x1801EEC2B (_ViewEventDispatcher--_PerformCrashRecovery_--_1_--dtor$3.c)
 * Callees:
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180133010 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x180134800 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 */

int __fastcall wil::details::ScopeExitFn__lambda_0dcf13e7d39f28d4baed28b643a2d3bb___::_ScopeExitFn__lambda_0dcf13e7d39f28d4baed28b643a2d3bb___(
        _BYTE *a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // edx

  if ( a1[24] )
  {
    a1[24] = 0;
    ViewManagerBridge::NavigateView(
      *(_QWORD *)(*(_QWORD *)a1 + 512LL),
      *(unsigned int *)(**((_QWORD **)a1 + 1) + 16LL * *((_QWORD *)a1 + 2) + 8),
      0LL);
    v2 = (_QWORD *)*((_QWORD *)a1 + 1);
    v3 = *(_DWORD *)(*v2 + 16LL * *((_QWORD *)a1 + 2) + 12);
    if ( v3 )
      LODWORD(v2) = ViewManagerBridge::CloseServerWindow(*(ViewManagerBridge **)(*(_QWORD *)a1 + 512LL), v3);
  }
  return (int)v2;
}

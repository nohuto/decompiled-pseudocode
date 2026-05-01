/*
 * XREFs of _lambda_2338f6620c35f386186dd3a4c1d1b861_::operator() @ 0x1801C8D7C
 * Callers:
 *     wil::details::ScopeExitFn__lambda_2338f6620c35f386186dd3a4c1d1b861___::_ScopeExitFn__lambda_2338f6620c35f386186dd3a4c1d1b861___ @ 0x1801C84E4 (wil--details--ScopeExitFn__lambda_2338f6620c35f386186dd3a4c1d1b861___--_ScopeExitFn__lambda_2338.c)
 * Callees:
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x1801DBE00 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x1801DBE80 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 */

int __fastcall lambda_2338f6620c35f386186dd3a4c1d1b861_::operator()(__int64 a1)
{
  _QWORD *v2; // rax
  unsigned int v3; // edx

  ViewManagerBridge::CloseViewForScenario(
    *(_QWORD *)(*(_QWORD *)a1 + 512LL),
    *(unsigned int *)(**(_QWORD **)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 16) + 8),
    *(_QWORD *)(**(_QWORD **)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 16)),
    2LL);
  v2 = *(_QWORD **)(a1 + 8);
  v3 = *(_DWORD *)(*v2 + 16LL * *(_QWORD *)(a1 + 16) + 12);
  if ( v3 )
    LODWORD(v2) = ViewManagerBridge::CloseServerWindow(*(ViewManagerBridge **)(*(_QWORD *)a1 + 512LL), v3);
  return (int)v2;
}

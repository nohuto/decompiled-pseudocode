/*
 * XREFs of ?OnNavigateAwayFromView@ViewManagerBridge@@UEAAJIW4ViewNavigationLevel@Navigation@@@Z @ 0x18010BE10
 * Callers:
 *     <none>
 * Callees:
 *     ?NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z @ 0x1800F3E90 (-NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z.c)
 */

__int64 __fastcall ViewManagerBridge::OnNavigateAwayFromView(__int64 a1, unsigned int a2)
{
  ViewEventDispatcher::NavigateAwayFromView(*(RTL_SRWLOCK **)(a1 + 40), a2);
  return 0LL;
}

/*
 * XREFs of ?OnNavigateAwayFromView@ViewManagerBridge@@UEAAJIW4ViewNavigationLevel@Navigation@@@Z @ 0x180136D50
 * Callers:
 *     <none>
 * Callees:
 *     ?NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z @ 0x18011EB18 (-NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z.c)
 */

__int64 __fastcall ViewManagerBridge::OnNavigateAwayFromView(__int64 a1, unsigned int a2, int a3)
{
  if ( !a3 )
    ViewEventDispatcher::NavigateAwayFromView(*(RTL_SRWLOCK **)(a1 + 56), a2);
  return 0LL;
}

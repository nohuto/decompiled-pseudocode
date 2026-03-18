/*
 * XREFs of IsWindowEffectivelyCloaked @ 0x1C00B4684
 * Callers:
 *     FBadWindow @ 0x1C00B3C74 (FBadWindow.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     IsWindowHolographicForHitTest @ 0x1C0062580 (IsWindowHolographicForHitTest.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00B46D4 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 */

__int64 __fastcall IsWindowEffectivelyCloaked(struct tagWND *a1)
{
  struct tagWND *TopLevelHost; // rax
  __int64 TopLevelWindow; // rdi

  TopLevelHost = CoreWindowProp::GetTopLevelHost(a1);
  TopLevelWindow = GetTopLevelWindow((__int64)TopLevelHost);
  if ( !TopLevelWindow )
    TopLevelWindow = (__int64)a1;
  if ( IsWindowHolographicForHitTest(TopLevelWindow) )
    return 0LL;
  else
    return GetWindowCloakState(TopLevelWindow);
}

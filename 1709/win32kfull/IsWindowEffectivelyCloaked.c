/*
 * XREFs of IsWindowEffectivelyCloaked @ 0x1C00CB5D4
 * Callers:
 *     FBadWindow @ 0x1C00CB910 (FBadWindow.c)
 * Callees:
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C005D1E0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     IsWindowHolographicForHitTest @ 0x1C0063E70 (IsWindowHolographicForHitTest.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
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

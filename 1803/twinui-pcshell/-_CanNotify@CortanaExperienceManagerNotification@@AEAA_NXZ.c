/*
 * XREFs of ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x18008542C
 * Callers:
 *     ?OnSuggestionsShown@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180085400 (-OnSuggestionsShown@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnSuggestionsHidden@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180085450 (-OnSuggestionsHidden@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x180085480 (-OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 *     ?OnHidden@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180085520 (-OnHidden@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppTransitionCompleted@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180085550 (-OnAppTransitionCompleted@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppRequestedTransition@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180085580 (-OnAppRequestedTransition@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18015D100 (-OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppRequestedDismiss@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18015D130 (-OnAppRequestedDismiss@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18015D1C0 (-OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x18015D1F0 (-OnFocusNavigate@CortanaExperienceManagerNotification@@UEAAXW4FocusNavigateDirection@Experience@.c)
 *     ?OnSetForegroundFailed@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18015D290 (-OnSetForegroundFailed@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnStartAndCortanaDismissRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18015D2C0 (-OnStartAndCortanaDismissRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CortanaExperienceManagerNotification::_CanNotify(CortanaExperienceManagerNotification *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 7) )
    return *((_BYTE *)this + 48) != 0;
  return result;
}

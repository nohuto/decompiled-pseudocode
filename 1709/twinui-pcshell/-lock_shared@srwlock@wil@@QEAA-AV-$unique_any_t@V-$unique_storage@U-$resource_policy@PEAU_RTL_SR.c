/*
 * XREFs of ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180024D4C
 * Callers:
 *     ?get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z @ 0x1801E0930 (-get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel.c)
 *     ?get_IsForegroundActivation@CActivatedEventArgsBase@@UEAAJPEAE@Z @ 0x1801E0BE0 (-get_IsForegroundActivation@CActivatedEventArgsBase@@UEAAJPEAE@Z.c)
 *     ?get_UserContext@CActivatedEventArgsBase@@UEAAJPEA_K@Z @ 0x1801E0C80 (-get_UserContext@CActivatedEventArgsBase@@UEAAJPEA_K@Z.c)
 *     ?get_IsHolographic@CActivatedEventArgsBase@@UEAAJPEAE@Z @ 0x1801E0D00 (-get_IsHolographic@CActivatedEventArgsBase@@UEAAJPEAE@Z.c)
 *     ?get_User@CActivatedEventArgsBase@@UEAAJPEAPEAUIUser@System@Windows@@@Z @ 0x1801E0D80 (-get_User@CActivatedEventArgsBase@@UEAAJPEAPEAUIUser@System@Windows@@@Z.c)
 *     ?get_CurrentlyShownApplicationViewId@CActivatedEventArgsWithViewIdBase@@UEAAJPEAH@Z @ 0x1801E0F20 (-get_CurrentlyShownApplicationViewId@CActivatedEventArgsWithViewIdBase@@UEAAJPEAH@Z.c)
 *     ?get_ViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x1801E0F90 (-get_ViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAPEAUIActivationViewSwitcher@ViewMan.c)
 *     ?get_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x1801E0FF0 (-get_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAPEAUIActivationViewSwitch.c)
 *     ?get_Properties@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@Z @ 0x1801E1100 (-get_Properties@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUMultiviewActivationProperties@Activa.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall wil::srwlock::lock_shared(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  AcquireSRWLockShared(a1);
  *a2 = a1;
  return a2;
}

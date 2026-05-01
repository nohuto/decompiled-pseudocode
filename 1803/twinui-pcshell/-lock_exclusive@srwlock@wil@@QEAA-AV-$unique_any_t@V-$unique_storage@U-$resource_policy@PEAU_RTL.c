/*
 * XREFs of ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800F60F4
 * Callers:
 *     ?InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@HPEAUISplashScreen@345@E@Z @ 0x180071A50 (-InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@Ap.c)
 *     _lambda_65c0f5c4ae095b6c4d2379132d65e3aa_::operator() @ 0x1800A1A4C (_lambda_65c0f5c4ae095b6c4d2379132d65e3aa_--operator().c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1802C8744 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?SetCachedLayout@AppLayoutCache@@UEAAJPEAUIAppLayout@@@Z @ 0x1802D2560 (-SetCachedLayout@AppLayoutCache@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z @ 0x180312090 (-AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z.c)
 *     ?AddItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x180312150 (-AddItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView.c)
 *     ?AddView@CAppLayout@@UEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@0@Z @ 0x1803121C0 (-AddView@CAppLayout@@UEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@W4APP_LAYOUT_ITEM_.c)
 *     ?Commit@CAppLayout@@UEAAJXZ @ 0x1803124E0 (-Commit@CAppLayout@@UEAAJXZ.c)
 *     ?RemoveApp@CAppLayout@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180313720 (-RemoveApp@CAppLayout@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?RemoveItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@@Z @ 0x1803137A0 (-RemoveItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@@Z.c)
 *     ?RemoveItemByIndex@CAppLayout@@UEAAJI@Z @ 0x180313830 (-RemoveItemByIndex@CAppLayout@@UEAAJI@Z.c)
 *     ?RemoveItemsByType@CAppLayout@@UEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x180313880 (-RemoveItemsByType@CAppLayout@@UEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 *     ?RemoveView@CAppLayout@@UEAAJPEAUIApplicationView@@@Z @ 0x1803138C0 (-RemoveView@CAppLayout@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ReplaceView@CAppLayout@@UEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180313910 (-ReplaceView@CAppLayout@@UEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?SetLayoutEnv@CAppLayout@@UEAAXPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180313980 (-SetLayoutEnv@CAppLayout@@UEAAXPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?GrowLayoutRect@CAppLayoutItem@@UEAAXW4ABSOLUTE_DIRECTION@@H@Z @ 0x1803152E0 (-GrowLayoutRect@CAppLayoutItem@@UEAAXW4ABSOLUTE_DIRECTION@@H@Z.c)
 *     ?SetRect@CAppLayoutItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEBUtagRECT@@@Z @ 0x180315660 (-SetRect@CAppLayoutItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEBUtagRECT@@@Z.c)
 *     ?SetViewData@CAppLayoutItem@@UEAAXPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1803156C0 (-SetViewData@CAppLayoutItem@@UEAAXPEBUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x1803170D0 (-put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@.c)
 *     ?put_Properties@CActivatedEventArgsWithViewIdBase@@UEAAJUMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@Z @ 0x180317170 (-put_Properties@CActivatedEventArgsWithViewIdBase@@UEAAJUMultiviewActivationProperties@Activatio.c)
 *     ?put_UserContext@CActivatedEventArgsBase@@UEAAJ_K@Z @ 0x1803171B0 (-put_UserContext@CActivatedEventArgsBase@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall wil::srwlock::lock_exclusive(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  AcquireSRWLockExclusive(a1);
  *a2 = a1;
  return a2;
}

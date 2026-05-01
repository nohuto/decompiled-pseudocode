/*
 * XREFs of ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8
 * Callers:
 *     ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800068FC (-ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collecti.c)
 *     ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x180007070 (-RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z.c)
 *     ?_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ @ 0x1800106D8 (-_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18001350C (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180014630 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800159F8 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_319196609fc91a8a5111ea6790a28edd___ @ 0x180017AA8 (CIAMGlobals--QueueViewManagementTask__lambda_319196609fc91a8a5111ea6790a28edd___.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_6f3dfa547e2ecbb13d4169c92b8d6cb6___ @ 0x180018310 (CIAMGlobals--QueueViewManagementTask__lambda_6f3dfa547e2ecbb13d4169c92b8d6cb6___.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___ @ 0x180018464 (CIAMGlobals--QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a___ @ 0x180018D04 (CIAMGlobals--QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a___.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_13c840c931e6c4b9015195fc4e60665a___::operator() @ 0x180019AC0 (CDelayIAMOperations--CDelayedOperation__lambda_13c840c931e6c4b9015195fc4e60665a___--operator().c)
 *     ?CancelPendingComTaskPoolTasks@@YAXK_N@Z @ 0x180023218 (-CancelPendingComTaskPoolTasks@@YAXK_N@Z.c)
 *     ?_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplicationArray@@W4WINDOW_PRESENTED_OVERRIDE@@@Z @ 0x18002F458 (-_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplication.c)
 *     ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x1800315E0 (-_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180031CD4 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 *     ?_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z @ 0x180031F98 (-_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z.c)
 *     ?ImmersiveLauncherWNFCallback@CImmersiveMode@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180032220 (-ImmersiveLauncherWNFCallback@CImmersiveMode@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@.c)
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1800337FC (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 *     ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180035B04 (-AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180035C58 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     ?HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z @ 0x1800362B0 (-HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___ @ 0x180038590 (CIAMGlobals--QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___.c)
 *     ?_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ @ 0x180039CB8 (-_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x1800421C8 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180043150 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18004B6C0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18004CF68 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18005681C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?_QueuePresentationChangeNotification@CImmersiveApp@@AEAAXW4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x180056DE0 (-_QueuePresentationChangeNotification@CImmersiveApp@@AEAAXW4IMMERSIVE_APPLICATION_PRESENTATION_C.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1800571D4 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     ?RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@IEAAJE@Z @ 0x18005FF30 (-RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@.c)
 *     ?SetSystemVisualAnimation@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL_ANIMATION@@@Z @ 0x180067010 (-SetSystemVisualAnimation@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL_ANIMATION@@@.c)
 *     ?DropForeground@CFrameApplicationPresentation@@UEAAXW4DropForegroundOptions@@@Z @ 0x1800671D0 (-DropForeground@CFrameApplicationPresentation@@UEAAXW4DropForegroundOptions@@@Z.c)
 *     ?SetPosition@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x1800672F0 (-SetPosition@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 *     ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x180067AB0 (-SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z.c)
 *     ?SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180067BD0 (-SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfig.c)
 *     ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180067F30 (-SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@.c)
 *     ?SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z @ 0x180068230 (-SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z @ 0x180068350 (-OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z.c)
 *     ?UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x180068470 (-UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     _lambda_4283d24cd011cefa10f50035df6139a0_::operator() @ 0x180068574 (_lambda_4283d24cd011cefa10f50035df6139a0_--operator().c)
 *     ?QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180068730 (-QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z @ 0x180068A70 (-SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z.c)
 *     ?Destroy@CFrameApplicationPresentation@@UEAAJXZ @ 0x180068BF0 (-Destroy@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     ?SetSizeConstraintOverridesPhysical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x180068CE0 (-SetSizeConstraintOverridesPhysical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z.c)
 *     ?SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x180068E10 (-SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z.c)
 *     ?SetPreferredAspectRatioHint@CFrameApplicationPresentation@@UEAAJUtagSIZE@@@Z @ 0x180068F40 (-SetPreferredAspectRatioHint@CFrameApplicationPresentation@@UEAAJUtagSIZE@@@Z.c)
 *     ?EnsureSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x180069060 (-EnsureSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_eb88fe4cf858de5e6f9898dba3345098___ @ 0x180069818 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_eb88fe4cf858de5e6f9898dba3345098___.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_f0fa1bf0d3c290ed98c5e51ba0126ad5___ @ 0x180069A64 (CIAMGlobals--QueueViewManagementTask__lambda_f0fa1bf0d3c290ed98c5e51ba0126ad5___.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1___ @ 0x180069B64 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1___.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_1d725a211fae648eb22a29137fc16fd7___ @ 0x180069E64 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_1d725a211fae648eb22a29137fc16fd7___.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_c4af78c0c8077c37e96163482dfb0569___ @ 0x18006A21C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_c4af78c0c8077c37e96163482dfb0569___.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_d7e8f2be42fd64d2c7dbd0237222ced7___ @ 0x18006A3E8 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_d7e8f2be42fd64d2c7dbd0237222ced7___.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_c74e0b72836ee903ef781163810980c0___ @ 0x18006A4F0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_c74e0b72836ee903ef781163810980c0___.c)
 *     ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18006FA30 (-add_Dismissed@CSplashScreen@@UEAAJPEAU-$ITypedEventHandler@PEAVSplashScreen@Activation@Applicat.c)
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216___::Invoke @ 0x1800704A0 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216___--Invoke.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x180079020 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x18007BFF0 (-v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ.c)
 *     ?v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ @ 0x18007F930 (-v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ.c)
 *     wil::details::functor_wrapper_void__lambda_0cb0a454b9f2570e0892a1dab0e748f4__&___ptr64_::Run @ 0x180084B40 (wil--details--functor_wrapper_void__lambda_0cb0a454b9f2570e0892a1dab0e748f4__-___ptr64_--Run.c)
 *     wil::details::functor_wrapper_void__lambda_36539e2bf5b74e88817ab82cca37e58d__&___ptr64_::Run @ 0x180084D10 (wil--details--functor_wrapper_void__lambda_36539e2bf5b74e88817ab82cca37e58d__-___ptr64_--Run.c)
 *     wil::details::functor_wrapper_void__lambda_5e806e717ccb9713449452a6c1a1f847__&___ptr64_::Run @ 0x180084EB0 (wil--details--functor_wrapper_void__lambda_5e806e717ccb9713449452a6c1a1f847__-___ptr64_--Run.c)
 *     wil::details::functor_wrapper_void__lambda_28bf0772b9cd8be7096e21c2793a4ce3__&___ptr64_::Run @ 0x180085040 (wil--details--functor_wrapper_void__lambda_28bf0772b9cd8be7096e21c2793a4ce3__-___ptr64_--Run.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800927AC (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180093BD0 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1800ADB24 (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800B77A0 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_e48e3d37c3c7735d49d7ed6482b7c5e4__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800B9DD0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_e48e3d37c3c7735d49d7ed6482b7c5e4__0__wistd--detai.c)
 *     _lambda_3b055fef70a16d7474f5e228489e7e4c_::operator() @ 0x1800D3900 (_lambda_3b055fef70a16d7474f5e228489e7e4c_--operator().c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1800DBFD8 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_cfd27ea05118e91876b01966f7f941a5__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_Windows::Internal::Shell::Holographic::ShellState_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_Windows::Internal::Shell::Holographic::ShellState_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800E13B0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_cfd27ea05118e91876b01966f7f941a5__0__wistd--detai.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1800E7FB0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1800EA6E4 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     _lambda_c42184d898c0806d92bf2f8c2d17483b_::operator() @ 0x1800F57D0 (_lambda_c42184d898c0806d92bf2f8c2d17483b_--operator().c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FA394 (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1800FA95C (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 *     _lambda_62924d4e5fe2ec2efa180cb71b93b0bb_::_lambda_invoker_cdecl_ @ 0x18010FA50 (_lambda_62924d4e5fe2ec2efa180cb71b93b0bb_--_lambda_invoker_cdecl_.c)
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010FB94 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180111280 (-v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 *     ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x1801133C0 (-ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@P.c)
 *     ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x180113CE0 (-ViewDestroyed@ViewWrapperBase@@UEAAXXZ.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1801141A0 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     ?NotifyHostChanged@ViewWrapperBase@@UEAAXXZ @ 0x180114800 (-NotifyHostChanged@ViewWrapperBase@@UEAAXXZ.c)
 *     ?ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA?AW4StateChangeResult@@W4PopupCountOperation@@_K@Z @ 0x180114BB0 (-ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA-AW4StateChangeResult@@W4PopupCountOperation@@_K.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x180117638 (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 *     std::_Func_impl__lambda_50b3f89cea81ac99891e676c02ace6a0__std::allocator_int__void_bool_::_Do_call @ 0x18011B380 (std--_Func_impl__lambda_50b3f89cea81ac99891e676c02ace6a0__std--allocator_int__void_bool_--_Do_ca.c)
 *     CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___ @ 0x180129AB8 (CreationThreadDispatcher--RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_017c8a6d1bfeabdb7dd048ae7b3dbe5b__void_::Invoke @ 0x180129C90 (Platform--Details--__abi_FunctorCapture__lambda_017c8a6d1bfeabdb7dd048ae7b3dbe5b__void_--Invoke.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_8b00f5316257bd8b39ae62d0d59af473__void_::Invoke @ 0x180129D70 (Platform--Details--__abi_FunctorCapture__lambda_8b00f5316257bd8b39ae62d0d59af473__void_--Invoke.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_::Invoke @ 0x180129EA0 (Platform--Details--__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_--Invoke.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18012F450 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x18013FAE0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x180141830 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     CreationThreadDispatcher::RunAsync__lambda_c12dfab9154669097a3cd6f4b2210f79___ @ 0x180142A44 (CreationThreadDispatcher--RunAsync__lambda_c12dfab9154669097a3cd6f4b2210f79___.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1801444A8 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAU.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180145620 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitc.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180145754 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitch.c)
 *     ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x180145A3C (-DismissView@XamlBaseViewController@@IE$AAAXXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18014B890 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x18014F860 (--$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAX.c)
 *     ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x18014FCAC (--$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@Y.c)
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x180153AE0 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 *     ?RelaunchSIPWithDelay@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18016B9C8 (-RelaunchSIPWithDelay@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?_CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18016C4CC (-_CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18017F8FC (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180180AE0 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18018C438 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18018EF10 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 * Callees:
 *     ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x180020C88 (-s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z.c)
 *     ?s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800212F0 (-s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUI.c)
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x1800219FC (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180022C7C (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::RunTask(
        int a1,
        unsigned int a2,
        int a3,
        DWORD a4,
        IUnknown *a5,
        __int64 *a6)
{
  int v9; // esi
  HMODULE *v10; // r14
  signed int ApartmentType; // edi
  APTTYPE v12; // ecx
  int TaskPoolTlsSlot; // eax
  int *Value; // rax
  int v15; // edx
  struct Windows::Internal::IComPoolTask *v16; // rbx
  signed int v17; // eax
  APTTYPE pAptType; // [rsp+30h] [rbp-58h] BYREF
  struct Windows::Internal::IComPoolTask *v20; // [rsp+38h] [rbp-50h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = -2LL;
  v9 = a1;
  v10 = (HMODULE *)a5;
  if ( a6 )
    *a6 = 0LL;
  ApartmentType = a5 == 0LL ? 0x8007000E : 0;
  if ( a5 )
  {
    if ( a1 == 5 )
      v9 = 1;
    if ( v9 == 4
      || (a2 & 0x80u) != 0
      && ((v12 = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool,
           `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool != -1)
        ? (TaskPoolTlsSlot = 0)
        : (TaskPoolTlsSlot = Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot((unsigned int *)&pAptType),
           v12 = pAptType),
          TaskPoolTlsSlot < 0 || (Value = (int *)TlsGetValue(v12)) == 0LL ? (v15 = 0x7FFFFFFF) : (v15 = *Value),
          v15 != 0x7FFFFFFF
       && ((v15 - 1) & 0x800000) != 0
       && (v9 == (v15 - 1) >> 24 || v9 == 3)
       && (((unsigned __int8)(v15 - 1) ^ (unsigned __int8)a2) & 9) == 0) )
    {
      ((void (__fastcall *)(IUnknown *))a5->lpVtbl[1].QueryInterface)(a5);
      return (unsigned int)ApartmentType;
    }
    v16 = 0LL;
    v20 = 0LL;
    if ( v9 == 3 )
    {
      v9 = 0;
      goto LABEL_30;
    }
    if ( v9 == 2 )
    {
      ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
      if ( ApartmentType < 0 )
        goto LABEL_35;
      v9 = 0;
      if ( pAptType == APTTYPE_STA )
      {
LABEL_29:
        ApartmentType = Windows::Internal::ComTaskPool::s_AddThreadAffineWrapper(a5, &v20);
        v16 = v20;
        v10 = (HMODULE *)v20;
        goto LABEL_30;
      }
      if ( pAptType <= APTTYPE_STA )
      {
LABEL_28:
        ApartmentType = -2147418113;
LABEL_35:
        if ( v16 )
          (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v16 + 16LL))(v16);
        return (unsigned int)ApartmentType;
      }
      if ( pAptType > APTTYPE_NA )
      {
        if ( pAptType != APTTYPE_MAINSTA )
          goto LABEL_28;
        goto LABEL_29;
      }
    }
LABEL_30:
    if ( ApartmentType >= 0 )
    {
      if ( a4 )
        v17 = Windows::Internal::ComTaskPool::s_QueueDelayedTask(v9, a2, a3, a4, (__int64)v10, a6);
      else
        v17 = Windows::Internal::ComTaskPool::s_QueuePoolTask(v9, a2, a3, v10);
      ApartmentType = v17;
    }
    goto LABEL_35;
  }
  return (unsigned int)ApartmentType;
}

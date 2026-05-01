/*
 * XREFs of ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0
 * Callers:
 *     ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000693C (-ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collecti.c)
 *     ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x180007390 (-RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z.c)
 *     ?_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ @ 0x180010C64 (-_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ.c)
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800165C0 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2baf3fdec4539f0a74e4b03503ed3c33__&___ptr64_ @ 0x180019924 (Windows--Internal--ComTaskPool--QueueTask__lambda_2baf3fdec4539f0a74e4b03503ed3c33__-___ptr64_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a730ada88cbae26163c74f230d1e84ab___ @ 0x180019B18 (Windows--Internal--ComTaskPool--QueueTask__lambda_a730ada88cbae26163c74f230d1e84ab___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9cb18b263c1718fe66259f5b7bf08150___ @ 0x18001B9E4 (Windows--Internal--ComTaskPool--QueueTask__lambda_9cb18b263c1718fe66259f5b7bf08150___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4135c6296786dedba9398dc027119617___ @ 0x18001BAE4 (Windows--Internal--ComTaskPool--QueueTask__lambda_4135c6296786dedba9398dc027119617___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_47b043ceeb74943e17a9cab237fd2472___ @ 0x18001BBE4 (Windows--Internal--ComTaskPool--QueueTask__lambda_47b043ceeb74943e17a9cab237fd2472___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8bbfadf2e685d49e62efb1365d07c1d5___ @ 0x18001BCE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_8bbfadf2e685d49e62efb1365d07c1d5___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_67fff51ef85bdb7f782db56f669e2f17___ @ 0x18001BDE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_67fff51ef85bdb7f782db56f669e2f17___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9bfcdedc9431ed62816a8472b97e3b70___ @ 0x18001BEE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_9bfcdedc9431ed62816a8472b97e3b70___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7f98d2e01e22d2c20437399d24fb9aeb___ @ 0x18001BFF0 (Windows--Internal--ComTaskPool--QueueTask__lambda_7f98d2e01e22d2c20437399d24fb9aeb___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_497cdd3be1990e13318bbe793e150545___ @ 0x180031170 (Windows--Internal--ComTaskPool--QueueTask__lambda_497cdd3be1990e13318bbe793e150545___.c)
 *     ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x180032E3C (-_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ.c)
 *     ?ImmersiveLauncherWNFCallback@CImmersiveMode@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180033B80 (-ImmersiveLauncherWNFCallback@CImmersiveMode@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_32debc2fc80ca1e0059f85a00ba9919c___ @ 0x180034200 (Windows--Internal--ComTaskPool--QueueTask__lambda_32debc2fc80ca1e0059f85a00ba9919c___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7aef9f6174acb3d73b407d8c046faaf1___ @ 0x18003430C (Windows--Internal--ComTaskPool--QueueTask__lambda_7aef9f6174acb3d73b407d8c046faaf1___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_844449e548af17c9f319f8c2e0def985___ @ 0x180039D1C (Windows--Internal--ComTaskPool--QueueTask__lambda_844449e548af17c9f319f8c2e0def985___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7a26999a8ff8ee75627551ee74790a9c___ @ 0x180039ED0 (Windows--Internal--ComTaskPool--QueueTask__lambda_7a26999a8ff8ee75627551ee74790a9c___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_94e78e0ab61cd36278875a1a9164841b___ @ 0x180039FD0 (Windows--Internal--ComTaskPool--QueueTask__lambda_94e78e0ab61cd36278875a1a9164841b___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_818e1247758777a74d4013294a5c3000___ @ 0x18003A0D4 (Windows--Internal--ComTaskPool--QueueTask__lambda_818e1247758777a74d4013294a5c3000___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_85c6a334ae9166c0f52272825a986cb2___ @ 0x18003A1C4 (Windows--Internal--ComTaskPool--QueueTask__lambda_85c6a334ae9166c0f52272825a986cb2___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___ @ 0x18003B6D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_fc741a4743938d06b405cea5fdae9784___.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x1800445C4 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180045654 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18004DAF0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_96e0e644045a5df6c639af1253b871cf__&___ptr64_ @ 0x180050CBC (Windows--Internal--ComTaskPool--QueueTask__lambda_96e0e644045a5df6c639af1253b871cf__-___ptr64_.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1800597E0 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c35d5355421e51b91e1b7dc40faf7951___ @ 0x18005DEE0 (Windows--Internal--ComTaskPool--QueueTask__lambda_c35d5355421e51b91e1b7dc40faf7951___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_102cb1b6072dd63b95fe430bfc6a8a40___ @ 0x18005DFCC (Windows--Internal--ComTaskPool--QueueTask__lambda_102cb1b6072dd63b95fe430bfc6a8a40___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_de7a847248f7e9ff51c83bca1460305a___ @ 0x180061A28 (Windows--Internal--ComTaskPool--QueueTask__lambda_de7a847248f7e9ff51c83bca1460305a___.c)
 *     ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x18006B50C (-_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b9a5d3aef815fc73238a5c81fbaaa2c3___ @ 0x18006C958 (Windows--Internal--ComTaskPool--QueueTask__lambda_b9a5d3aef815fc73238a5c81fbaaa2c3___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3a86b7f81a3339fd1802a7db538923d1___ @ 0x18006CA70 (Windows--Internal--ComTaskPool--QueueTask__lambda_3a86b7f81a3339fd1802a7db538923d1___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_11a7567f3465c52bdf1b4059be609446___ @ 0x18006CB60 (Windows--Internal--ComTaskPool--QueueTask__lambda_11a7567f3465c52bdf1b4059be609446___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7ae01d123478e9bd18be70bedd94d30f___ @ 0x18006CC90 (Windows--Internal--ComTaskPool--QueueTask__lambda_7ae01d123478e9bd18be70bedd94d30f___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8ef6d4805f8528fcb28166bccfad057a___ @ 0x18006CDC0 (Windows--Internal--ComTaskPool--QueueTask__lambda_8ef6d4805f8528fcb28166bccfad057a___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e79e1f0f999b9aa8ee4060ee9f370fc9___ @ 0x18006CEE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_e79e1f0f999b9aa8ee4060ee9f370fc9___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___ @ 0x18006CFE0 (Windows--Internal--ComTaskPool--QueueTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c375c8f4cb799a2f5bee00a6619de85c___ @ 0x18006D0D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_c375c8f4cb799a2f5bee00a6619de85c___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7501b2786f907cffab375e4c2c89740a___ @ 0x18006D1E8 (Windows--Internal--ComTaskPool--QueueTask__lambda_7501b2786f907cffab375e4c2c89740a___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_378c660b1cef11ab9222d9a9f7813f6b___ @ 0x18006D2E8 (Windows--Internal--ComTaskPool--QueueTask__lambda_378c660b1cef11ab9222d9a9f7813f6b___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e97912004d4e96f3bec37740b2aa1798___ @ 0x18006D3F8 (Windows--Internal--ComTaskPool--QueueTask__lambda_e97912004d4e96f3bec37740b2aa1798___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_11368385320830d8a241e2fe32d21e6b___ @ 0x18006D508 (Windows--Internal--ComTaskPool--QueueTask__lambda_11368385320830d8a241e2fe32d21e6b___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a713dc744d2e33656eb13ccb399d0571___ @ 0x18006D600 (Windows--Internal--ComTaskPool--QueueTask__lambda_a713dc744d2e33656eb13ccb399d0571___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a9ee8af99aca72ecf026a7a37da514a5___ @ 0x18006D6F8 (Windows--Internal--ComTaskPool--QueueTask__lambda_a9ee8af99aca72ecf026a7a37da514a5___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_67eef396734d09a1eef436dbd1978d71___ @ 0x18006D7F8 (Windows--Internal--ComTaskPool--QueueTask__lambda_67eef396734d09a1eef436dbd1978d71___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___ @ 0x18006D8F0 (Windows--Internal--ComTaskPool--QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2b7e715354e88d4a97496f3ccdfd0602___ @ 0x18006D9F8 (Windows--Internal--ComTaskPool--QueueTask__lambda_2b7e715354e88d4a97496f3ccdfd0602___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2647a080773a9fa4ef6a91f024d7dfff___ @ 0x18006DAF0 (Windows--Internal--ComTaskPool--QueueTask__lambda_2647a080773a9fa4ef6a91f024d7dfff___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___ @ 0x18006DBE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_61a39d48d2d904a91076d611a129569d___ @ 0x18006DCE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_61a39d48d2d904a91076d611a129569d___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_46f447173730af1e316e4d8e7839b9be___ @ 0x18006DDE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_46f447173730af1e316e4d8e7839b9be___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_efacefe1f9a132f9192ecba0e8d88571___ @ 0x18006DEE0 (Windows--Internal--ComTaskPool--QueueTask__lambda_efacefe1f9a132f9192ecba0e8d88571___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_153d02fd68e04791af94e0f734ac69a8___ @ 0x18006DFD8 (Windows--Internal--ComTaskPool--QueueTask__lambda_153d02fd68e04791af94e0f734ac69a8___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___ @ 0x180072CE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___.c)
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216___::Invoke @ 0x1800732E0 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216___--Invoke.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18007BC20 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x18007ED60 (-v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ.c)
 *     ?v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ @ 0x180082820 (-v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ.c)
 *     ?OnMessage@DesktopBlueLightReductionManager@@UEAAJI_K_J@Z @ 0x180086510 (-OnMessage@DesktopBlueLightReductionManager@@UEAAJI_K_J@Z.c)
 *     ?OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180086A20 (-OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4b7ea3d11b6265e9fdfb78b2e903649a___ @ 0x180087028 (Windows--Internal--ComTaskPool--QueueTask__lambda_4b7ea3d11b6265e9fdfb78b2e903649a___.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096D0C (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800985E0 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1800C6AB8 (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5aad080f89fc0f806acb3154381eca88___ @ 0x1800C8EC4 (Windows--Internal--ComTaskPool--QueueTask__lambda_5aad080f89fc0f806acb3154381eca88___.c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800CBA60 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_33e66b590dea71948f9c2c80860a78e8___ @ 0x1800CD78C (Windows--Internal--ComTaskPool--QueueTask__lambda_33e66b590dea71948f9c2c80860a78e8___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___ @ 0x1800CFDA8 (Windows--Internal--ComTaskPool--QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___.c)
 *     ?ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z @ 0x1800E4590 (-ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4262453b2a750cdf384f2747cf54dd98___ @ 0x180103C9C (Windows--Internal--ComTaskPool--QueueTask__lambda_4262453b2a750cdf384f2747cf54dd98___.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_cfd27ea05118e91876b01966f7f941a5__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_Windows::Internal::Shell::Holographic::ShellState_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_Windows::Internal::Shell::Holographic::ShellState_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1801060E0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_cfd27ea05118e91876b01966f7f941a5__0__wistd--detai.c)
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x18011018C (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801108F0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180113B94 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ca651380094f5bc4672f860ee3183d95___ @ 0x180116BF4 (Windows--Internal--ComTaskPool--QueueTask__lambda_ca651380094f5bc4672f860ee3183d95___.c)
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x180125C94 (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_174fcf5b4a41f6f10b72d48900fe127a___ @ 0x180129774 (Windows--Internal--ComTaskPool--QueueTask__lambda_174fcf5b4a41f6f10b72d48900fe127a___.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_09d8618cc3129835da6ee2c10407f66c___ @ 0x180129928 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_09d8618cc3129835da6ee2c10407f66c___.c)
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180139E58 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x18013A0F4 (-NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e749f471b43b5c52416cbe595e41d9dc___ @ 0x18013BD6C (Windows--Internal--ComTaskPool--QueueTask__lambda_e749f471b43b5c52416cbe595e41d9dc___.c)
 *     ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x18013D5F0 (-ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@P.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18013E3F0 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     ?NotifyHostChanged@ViewWrapperBase@@UEAAXXZ @ 0x18013ED00 (-NotifyHostChanged@ViewWrapperBase@@UEAAXXZ.c)
 *     ?NotifyReadyForPresentationChanged@ViewWrapperBase@@IEAAX_N@Z @ 0x18014159C (-NotifyReadyForPresentationChanged@ViewWrapperBase@@IEAAX_N@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_04ffc410d54a5b59f3cef8d5da6c5c21___ @ 0x180144228 (Windows--Internal--ComTaskPool--QueueTask__lambda_04ffc410d54a5b59f3cef8d5da6c5c21___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d6acbb3e081afa0e4e5dd79f28d1dee4___ @ 0x18014461C (Windows--Internal--ComTaskPool--QueueTask__lambda_d6acbb3e081afa0e4e5dd79f28d1dee4___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___ @ 0x180144A08 (Windows--Internal--ComTaskPool--QueueTask__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___ @ 0x180153FE8 (CreationThreadDispatcher--RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_017c8a6d1bfeabdb7dd048ae7b3dbe5b__void_::Invoke @ 0x180154270 (Platform--Details--__abi_FunctorCapture__lambda_017c8a6d1bfeabdb7dd048ae7b3dbe5b__void_--Invoke.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_8b00f5316257bd8b39ae62d0d59af473__void_::Invoke @ 0x180154410 (Platform--Details--__abi_FunctorCapture__lambda_8b00f5316257bd8b39ae62d0d59af473__void_--Invoke.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_::Invoke @ 0x180154600 (Platform--Details--__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_--Invoke.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2982927e39568cdd3df99df702aa65a9___ @ 0x18015F404 (Windows--Internal--ComTaskPool--QueueTask__lambda_2982927e39568cdd3df99df702aa65a9___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7d4fab6c161d4dc93915730d1208882c___ @ 0x18016E390 (Windows--Internal--ComTaskPool--QueueTask__lambda_7d4fab6c161d4dc93915730d1208882c___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4c0281b189a4f50ab192cc99e41387bc___ @ 0x180170280 (Windows--Internal--ComTaskPool--QueueTask__lambda_4c0281b189a4f50ab192cc99e41387bc___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x1801750C8 (CreationThreadDispatcher--RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_10c47d2a085dd9f3462efe65dbc76ec9___ @ 0x1801752FC (CreationThreadDispatcher--RunAsync__lambda_10c47d2a085dd9f3462efe65dbc76ec9___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_403a39f84d2665c6c6e66947b8b7190c___ @ 0x180175504 (CreationThreadDispatcher--RunAsync__lambda_403a39f84d2665c6c6e66947b8b7190c___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_0a797daff9b242b959bbd8d51d98a883___ @ 0x18017570C (CreationThreadDispatcher--RunAsync__lambda_0a797daff9b242b959bbd8d51d98a883___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___ @ 0x180175914 (CreationThreadDispatcher--RunAsync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_a8a8a6fc1c15fdd6434ee6b8fb931e9b___ @ 0x1801797FC (CreationThreadDispatcher--RunAsync__lambda_a8a8a6fc1c15fdd6434ee6b8fb931e9b___.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18017A618 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitc.c)
 *     CreationThreadDispatcher::RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___ @ 0x18017AB08 (CreationThreadDispatcher--RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_509b9a9f35e2a008debf118f8fd212fd___ @ 0x18017AD10 (CreationThreadDispatcher--RunAsync__lambda_509b9a9f35e2a008debf118f8fd212fd___.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180180310 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_f11545691eb1c18d1795497ebae59dd5___ @ 0x180184FB0 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_f11545691eb1c18d1795497ebae59dd5___.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_c3db0f6e124d4bdd06e778fc848dc2f1___ @ 0x18018509C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_c3db0f6e124d4bdd06e778fc848dc2f1___.c)
 *     ?PrepareStartReadinessListener@XamlLauncherState@@AEAAXXZ @ 0x180188D2C (-PrepareStartReadinessListener@XamlLauncherState@@AEAAXXZ.c)
 *     ?RelaunchSIPWithDelay@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180199EE4 (-RelaunchSIPWithDelay@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18019C124 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?NotifyWorkspaceRect@AccessibilityExperienceManager@@UEAAXXZ @ 0x1801B0F90 (-NotifyWorkspaceRect@AccessibilityExperienceManager@@UEAAXXZ.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x1801B17BC (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a632cef2db327014c3fb5d2881c4369e___ @ 0x1801B2894 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_a632cef2db327014c3fb5d2881c4369e___.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_2846d5f76d01af9c30cc441784a7349d__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1801B2EB0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_2846d5f76d01af9c30cc441784a7349d__0__wistd--detai.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x1801CD2A0 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     ??$MakeAndInitializeOnSharedSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@AEAPEAUHSTRING__@@AEAPEAU6@@ComTaskPool@Internal@Windows@@SAJPEAPEAUIActivatedEventArgs@Activation@ApplicationModel@2@AEAPEAUHSTRING__@@1@Z @ 0x1801CE43C (--$MakeAndInitializeOnSharedSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activatio.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c093b048b1c12e288728af00af624558___ @ 0x1801D37D4 (Windows--Internal--ComTaskPool--QueueTask__lambda_c093b048b1c12e288728af00af624558___.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x1801DB81C (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1801DDD24 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 * Callees:
 *     ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x180021878 (-s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z.c)
 *     ?s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180021DD0 (-s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUI.c)
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x18002250C (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180023784 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::RunTask(
        int a1,
        unsigned int a2,
        int a3,
        DWORD a4,
        IUnknown *a5,
        _QWORD *a6)
{
  int v7; // esi
  HMODULE *v8; // r14
  signed int ApartmentType; // edi
  int v10; // r15d
  APTTYPE v11; // ecx
  int TaskPoolTlsSlot; // eax
  int *Value; // rax
  int v14; // edx
  struct Windows::Internal::IComPoolTask *v15; // rbx
  signed int v16; // eax
  APTTYPE pAptType; // [rsp+30h] [rbp-20h] BYREF
  int v19; // [rsp+34h] [rbp-1Ch]
  DWORD v20; // [rsp+38h] [rbp-18h]
  APTTYPEQUALIFIER pAptQualifier; // [rsp+3Ch] [rbp-14h] BYREF
  struct Windows::Internal::IComPoolTask *v22[2]; // [rsp+40h] [rbp-10h] BYREF

  v22[1] = (struct Windows::Internal::IComPoolTask *)-2LL;
  v20 = a4;
  v19 = a3;
  v7 = a1;
  v8 = (HMODULE *)a5;
  if ( a6 )
    *a6 = 0LL;
  ApartmentType = a5 == 0LL ? 0x8007000E : 0;
  if ( a5 )
  {
    if ( a1 == 5 )
    {
      v7 = 1;
      v10 = 1;
    }
    else
    {
      if ( a1 == 6 )
      {
        if ( CoGetApartmentType(&pAptType, &pAptQualifier) >= 0 && pAptType && pAptType != APTTYPE_MAINSTA )
          goto LABEL_42;
        v7 = 0;
      }
      v10 = v7;
      if ( v7 == 4 )
      {
LABEL_42:
        ((void (__fastcall *)(IUnknown *))a5->lpVtbl[1].QueryInterface)(a5);
        return (unsigned int)ApartmentType;
      }
    }
    if ( (a2 & 0x80u) == 0
      || ((v11 = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool,
           `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool != -1)
        ? (TaskPoolTlsSlot = 0)
        : (TaskPoolTlsSlot = Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot((unsigned int *)&pAptType),
           v11 = pAptType),
          TaskPoolTlsSlot < 0 || (Value = (int *)TlsGetValue(v11)) == 0LL ? (v14 = 0x7FFFFFFF) : (v14 = *Value),
          v14 == 0x7FFFFFFF
       || ((v14 - 1) & 0x800000) == 0
       || v7 != (v14 - 1) >> 24 && v7 != 3
       || (((unsigned __int8)(v14 - 1) ^ (unsigned __int8)a2) & 9) != 0) )
    {
      v15 = 0LL;
      v22[0] = 0LL;
      if ( v7 == 3 )
      {
        v10 = 0;
        goto LABEL_35;
      }
      if ( v7 == 2 )
      {
        ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
        if ( ApartmentType < 0 )
          goto LABEL_40;
        v10 = 0;
        if ( pAptType == APTTYPE_STA )
        {
LABEL_34:
          ApartmentType = Windows::Internal::ComTaskPool::s_AddThreadAffineWrapper(a5, v22);
          v15 = v22[0];
          v8 = (HMODULE *)v22[0];
          goto LABEL_35;
        }
        if ( pAptType <= APTTYPE_STA )
        {
LABEL_33:
          ApartmentType = -2147418113;
LABEL_40:
          if ( v15 )
            (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v15 + 16LL))(v15);
          return (unsigned int)ApartmentType;
        }
        if ( pAptType > APTTYPE_NA )
        {
          if ( pAptType != APTTYPE_MAINSTA )
            goto LABEL_33;
          goto LABEL_34;
        }
      }
LABEL_35:
      if ( ApartmentType >= 0 )
      {
        if ( v20 )
          v16 = Windows::Internal::ComTaskPool::s_QueueDelayedTask(v10, a2, v19, v20, (__int64)v8, a6);
        else
          v16 = Windows::Internal::ComTaskPool::s_QueuePoolTask(v10, a2, v19, v8);
        ApartmentType = v16;
      }
      goto LABEL_40;
    }
    goto LABEL_42;
  }
  return (unsigned int)ApartmentType;
}

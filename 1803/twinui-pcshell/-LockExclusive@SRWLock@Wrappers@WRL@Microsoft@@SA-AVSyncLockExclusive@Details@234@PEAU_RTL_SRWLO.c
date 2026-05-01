/*
 * XREFs of ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130
 * Callers:
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18002A770 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x18002FF80 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?add_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180053F60 (-add_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJPEAU-$ITypedEventHandler@PEAU.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180069034 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_4935cb68771a3c75d2224a753f78fcb0___ @ 0x18008582C (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18008582C.c)
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18008DBC0 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     Microsoft::WRL::EventSource_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_1236e2c0be9b000750d1b0bdd8ae8f82___ @ 0x180091860 (Microsoft--WRL--EventSource_Windows--Internal--Shell--Popups--IPopupPropertyChangedEventHandler_.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x1800F0290 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x1800F46C4 (-DispatchNotifications@NotificationDispatcher@@QEAAXXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800F5E74 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e___ @ 0x1800FB0D4 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Internal--Composabl.c)
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x1800FF8B4 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 *     ?OnIdleStateChanged@CVisibilityOverride@@UEAAJH@Z @ 0x1801135D0 (-OnIdleStateChanged@CVisibilityOverride@@UEAAJH@Z.c)
 *     ?s_DXModeWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1801138E0 (-s_DXModeWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?s_HoloShellWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180113930 (-s_HoloShellWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::Run @ 0x18013E000 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___--Run.c)
 *     ?Shutdown@NotificationDispatcher@@QEAAXXZ @ 0x18013E428 (-Shutdown@NotificationDispatcher@@QEAAXXZ.c)
 *     ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x18013F970 (-GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 *     ?HandleNeedinessChange@CApplicationViewBase@@UEAAX_N@Z @ 0x180142B80 (-HandleNeedinessChange@CApplicationViewBase@@UEAAX_N@Z.c)
 *     ?InvalidateEnterpriseId@CApplicationViewBase@@UEAAXXZ @ 0x180142CC0 (-InvalidateEnterpriseId@CApplicationViewBase@@UEAAXXZ.c)
 *     ?ResetEnterpriseIdOnProcessIdMatch@CApplicationViewBase@@UEAAJK@Z @ 0x180142CF0 (-ResetEnterpriseIdOnProcessIdMatch@CApplicationViewBase@@UEAAJK@Z.c)
 *     ?SetCanTab@CApplicationViewBase@@UEAAJH@Z @ 0x180142DA0 (-SetCanTab@CApplicationViewBase@@UEAAJH@Z.c)
 *     ?SetCompatibilityPolicyType@CApplicationViewBase@@UEAAJW4APPLICATION_VIEW_COMPATIBILITY_POLICY@@@Z @ 0x180142EC0 (-SetCompatibilityPolicyType@CApplicationViewBase@@UEAAJW4APPLICATION_VIEW_COMPATIBILITY_POLICY@@.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_8178a51d0eb57af575486b4cf7867d56___ @ 0x1801568E8 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_1801568E8.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_8241ab7c54b4c0e48d4fcc85deacecc3___ @ 0x18015A078 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18015A078.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_int__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_d789d36f4409f79ab6db7c104c5ebf63___ @ 0x180172598 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_180172598.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18019684C (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1801972C8 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180197468 (-PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Z@wistd@@@Z @ 0x1801B6FA0 (-DoAsyncInvoke@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Int.c)
 *     ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@Windows@@@Z@wistd@@@Z @ 0x1801B71AC (-DoAsyncInvoke@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holograp_ea_1801B71AC.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801E6048 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ?InitializePrivilegedOperations@XamlExplorerHostShellComponent@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801F8970 (-InitializePrivilegedOperations@XamlExplorerHostShellComponent@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?SubscribeToServices@XamlExplorerHostShellComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801F9420 (-SubscribeToServices@XamlExplorerHostShellComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1801FA99C (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180240060 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18025D430 (-CurrentVirtualDesktopChanged@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?GetWinRTDesktopForInternalDesktop@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18025DDA0 (-GetWinRTDesktopForInternalDesktop@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@PEAPEAU2M.c)
 *     ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18025DFE0 (-Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 *     ?Uninitialize@VirtualDesktopDataSource@@UEAAXXZ @ 0x18025EE70 (-Uninitialize@VirtualDesktopDataSource@@UEAAXXZ.c)
 *     ?VirtualDesktopCreated@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x18025EF20 (-VirtualDesktopCreated@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?VirtualDesktopDestroyed@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18025F170 (-VirtualDesktopDestroyed@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktopDataSourceInternal@@@Z @ 0x180260980 (-Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopMan.c)
 *     ?Uninitialize@VirtualDesktopController@@UEAAXXZ @ 0x180261530 (-Uninitialize@VirtualDesktopController@@UEAAXXZ.c)
 *     ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x180261EB4 (-CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ?FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z @ 0x1802B3CD0 (-FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z.c)
 *     ?DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x180300820 (-DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IIPEAUIInspectable@@@Z @ 0x180301980 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Int_ea_180301980.c)
 *     ?SetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAX@Z @ 0x180301ED0 (-SetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall Microsoft::WRL::Wrappers::SRWLock::LockExclusive(RTL_SRWLOCK **a1, RTL_SRWLOCK *a2)
{
  AcquireSRWLockExclusive(a2);
  *a1 = a2;
  return a1;
}

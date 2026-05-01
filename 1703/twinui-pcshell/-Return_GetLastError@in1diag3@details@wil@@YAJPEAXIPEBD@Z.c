/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C
 * Callers:
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180004360 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180005640 (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@.c)
 *     ?create@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEBGKKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180005CD8 (-create@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     ??$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z @ 0x180005F3C (--$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z.c)
 *     ?GetHostedRect@FrameWrapper@@UEAAJPEAUtagRECT@@@Z @ 0x180061A50 (-GetHostedRect@FrameWrapper@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?SetHostedPos@FrameWrapper@@UEAAJPEBUtagRECT@@@Z @ 0x180061B20 (-SetHostedPos@FrameWrapper@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z @ 0x1800620A0 (-SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z.c)
 *     ??$MakeAndInitialize@VNotificationDispatcher@@V1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x180074938 (--$MakeAndInitialize@VNotificationDispatcher@@V1@@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComP.c)
 *     ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x18007C460 (-SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x18007D878 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 *     ?Finalize@SingleShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18007DB84 (-Finalize@SingleShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@A.c)
 *     ?CheckBorderWindowAlignment@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x18007E02C (-CheckBorderWindowAlignment@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicatio.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18007ECCC (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180091414 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x18009461C (-PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x1800A53AC (-PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CPeopleTestExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A64E0 (-OnViewPropertiesChanging@CPeopleTestExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1800A7970 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800AD344 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?PositionApplicationOnPrimaryMonitor@CWelcomeScreenExperienceManager@@AEAAJXZ @ 0x1800B38A0 (-PositionApplicationOnPrimaryMonitor@CWelcomeScreenExperienceManager@@AEAAJXZ.c)
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJUtagPOINT@@_N@Z @ 0x1800B6834 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800B6FDC (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800B71C4 (-PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1800B7360 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 *     ?get_AreExperienceViewAndCursorOnTheSameMonitor@CVirtualTouchpadExperienceManager@@UEAAJPEAE@Z @ 0x1800B7A40 (-get_AreExperienceViewAndCursorOnTheSameMonitor@CVirtualTouchpadExperienceManager@@UEAAJPEAE@Z.c)
 *     ?AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManagerAnimationHelper@@@Z @ 0x1800B7EE4 (-AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManage.c)
 *     ?_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BCD08 (-_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BD4A4 (-_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BDCA4 (-_StartDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800CA37C (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     ?SetCancelRotationDelayHintWindow@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@@Z @ 0x1800CF280 (-SetCancelRotationDelayHintWindow@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?SetActiveProcess@CPrivilegedDesktopOperations@@EEAAJK@Z @ 0x1800CF300 (-SetActiveProcess@CPrivilegedDesktopOperations@@EEAAJK@Z.c)
 *     ?ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ @ 0x1800CF380 (-ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ.c)
 *     ?SetActivationFilter@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1800CF3F0 (-SetActivationFilter@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@H@Z.c)
 *     ?SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z @ 0x1800CF470 (-SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z.c)
 *     ?SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1800CF650 (-SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z.c)
 *     ?SetWindowArrangement@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEBUtagRECT@@PEAU3@K@Z @ 0x1800CF830 (-SetWindowArrangement@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEBUtagRECT@@PEAU3@K@Z.c)
 *     ?RegisterWindowArrangementCallout@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1800CF8C0 (-RegisterWindowArrangementCallout@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@H@Z.c)
 *     ?MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z @ 0x1800CF940 (-MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?InsertAfterWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1800CF9D0 (-InsertAfterWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@0@Z.c)
 *     ?UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z @ 0x1800CFA70 (-UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z.c)
 *     ?AllowSetForegroundWindow@CPrivilegedForegroundOperations@@EEAAJXZ @ 0x1800CFB00 (-AllowSetForegroundWindow@CPrivilegedForegroundOperations@@EEAAJXZ.c)
 *     ?EnableShellWindowManagementBehavior@CPrivilegedTabletModeOperations@@EEAAJKK@Z @ 0x1800CFB80 (-EnableShellWindowManagementBehavior@CPrivilegedTabletModeOperations@@EEAAJKK@Z.c)
 *     ?SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z @ 0x1800CFC00 (-SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z.c)
 *     ?SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1800CFD00 (-SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z.c)
 *     ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x1800CFDA4 (-SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1800D2110 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOper.c)
 *     ?GetPosition@HolographicPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D7FB0 (-GetPosition@HolographicPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?TryClose@Win32BackedViewHostItem@@UEAAJE@Z @ 0x1800E29C0 (-TryClose@Win32BackedViewHostItem@@UEAAJE@Z.c)
 *     ?Activate@Win32BackedViewHostItem@@UEAAJXZ @ 0x1800E2A00 (-Activate@Win32BackedViewHostItem@@UEAAJXZ.c)
 *     ?ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800E6370 (-ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Inter.c)
 *     ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800EA548 (-CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1800F76FC (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x1801085DC (-RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z.c)
 *     _lambda_e749f471b43b5c52416cbe595e41d9dc_::operator() @ 0x1801113D0 (_lambda_e749f471b43b5c52416cbe595e41d9dc_--operator().c)
 *     ?s_LoadResources@XamlExplorerHost@@CAJXZ @ 0x18011E38C (-s_LoadResources@XamlExplorerHost@@CAJXZ.c)
 *     ?SetPosition@XamlExplorerHostWindow@@UEAAJPEBUtagRECT@@@Z @ 0x18012AF80 (-SetPosition@XamlExplorerHostWindow@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z @ 0x180147434 (-GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ @ 0x18014BEE4 (-LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ.c)
 *     ?QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z @ 0x1801583E8 (-QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1801585AC (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?RuntimeClassInitialize@ThumbnailInteropWindow@ThumbnailInteropDevice@@QEAAJPEAV2@@Z @ 0x180166D30 (-RuntimeClassInitialize@ThumbnailInteropWindow@ThumbnailInteropDevice@@QEAAJPEAV2@@Z.c)
 *     ?GetFrameRect@KBViewInfo@@QEBAJPEAUtagRECT@@@Z @ 0x18016AB9C (-GetFrameRect@KBViewInfo@@QEBAJPEAUtagRECT@@@Z.c)
 *     ?GetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAPEAX@Z @ 0x180179BA0 (-GetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJ.c)
 *     ?GetDesktopBrokerProcessHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJPEAPEAX@Z @ 0x180179F40 (-GetDesktopBrokerProcessHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x18017CEA8 (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 * Callees:
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x180003F04 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr((__int64)this, (unsigned int)a2, a3, (__int64)a4, v5, retaddr);
}

/*
 * XREFs of ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x18014CC88
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18014FAE8 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_18014FAE8.c)
 *     ??_ECFullScreenManager@@UEAAPEAXI@Z @ 0x18014FB24 (--_ECFullScreenManager@@UEAAPEAXI@Z.c)
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x180266DB0 (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositionerManagerPriv@@UITabletModePositionerManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180267100 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@U-.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModeViewManagerInternal@@UITabletModeViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIEdgeUiTouchInvocation@@UIEdgeUiMouseInvocation@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802ABBD8 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1802ABBD8.c)
 *     ??_ECAppTransitionManager@@UEAAPEAXI@Z @ 0x1802ABC10 (--_ECAppTransitionManager@@UEAAPEAXI@Z.c)
 *     ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x1802C2950 (--_GTabletModePositionerManager@@UEAAPEAXI@Z.c)
 *     ??1TabletModePositioner@@UEAA@XZ @ 0x1802C3BB8 (--1TabletModePositioner@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITabletModePositionerInternal@@UITabletModePositionerPriv@@UIStartDismissalPolicy@@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIImmersiveMonitorNotification@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerWindowingDelegationHandler@@UIImmersiveShellHookNotification@@UIMultitaskingViewVisibilityNotification@@UIShellTargetingChangeNotification@@UIFullScreenPositionerPrivateNotification@@UITransitionNotification@@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802C3E3C (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1802C3E3C.c)
 *     ??_ETabletModeViewManager@@UEAAPEAXI@Z @ 0x1802D0158 (--_ETabletModeViewManager@@UEAAPEAXI@Z.c)
 *     ??1JointResize@@UEAA@XZ @ 0x1802E8760 (--1JointResize@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802E8A5C (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1802E8A5C.c)
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801048B4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(CWinRTApplicationView **this)
{
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponent *)(this + 3));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this + 2);
}

/*
 * XREFs of ??1CWRLObjectWithSite@@QEAA@XZ @ 0x1801134D4
 * Callers:
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x180224338 (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 *     ??_GAllUpViewUriHandler@@UEAAPEAXI@Z @ 0x180269EB0 (--_GAllUpViewUriHandler@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIAppResizeView@@UITabletModeInputCallback@@UIApplicationViewChangeListener@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18026AAA0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIAppResizeView@.c)
 *     ??_ECAllUpViewService@@UEAAPEAXI@Z @ 0x18026AB20 (--_ECAllUpViewService@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIExecuteCommand@@UIObjectWithSelection@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18026B2B0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIExecuteCommand.c)
 *     ??_GCPPIAllUpViewService@@UEAAPEAXI@Z @ 0x18026B2F0 (--_GCPPIAllUpViewService@@UEAAPEAXI@Z.c)
 *     ??_ECLauncherAndDefaultSwitchTransitionTarget@@UEAAPEAXI@Z @ 0x1802AEAF0 (--_ECLauncherAndDefaultSwitchTransitionTarget@@UEAAPEAXI@Z.c)
 *     ??_ECAppTransitionTargetManager@@UEAAPEAXI@Z @ 0x1802AEB30 (--_ECAppTransitionTargetManager@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UITabletModeChrome@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802D4000 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UITabletModeChro.c)
 *     ??_GChromeManager@@UEAAPEAXI@Z @ 0x1802D4040 (--_GChromeManager@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCAppLayoutOperation@@U?$ChainInterfaces@UITabletModePositionerOperation@@UIAppLayoutOperationBuilder@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802D6100 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCA_ea_1802D6100.c)
 *     ??_GTabletModePositionerOperation@@UEAAPEAXI@Z @ 0x1802D6C00 (--_GTabletModePositionerOperation@@UEAAPEAXI@Z.c)
 *     ??1WindowArrangementView@@UEAA@XZ @ 0x1802DA118 (--1WindowArrangementView@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIWindowArrangementView@@UITabletModeInputCallback@@UIApplicationViewChangeListener@@UIDragVisualHost@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802DA440 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIWindowArrangem.c)
 *     ??_EAppResizeView@@UEAAPEAXI@Z @ 0x1802DEF40 (--_EAppResizeView@@UEAAPEAXI@Z.c)
 *     ??_GJointDivider@@UEAAPEAXI@Z @ 0x1802E2E40 (--_GJointDivider@@UEAAPEAXI@Z.c)
 *     ??_EDragData@@UEAAPEAXI@Z @ 0x1802E3D80 (--_EDragData@@UEAAPEAXI@Z.c)
 *     ??_GAppResizeData@@UEAAPEAXI@Z @ 0x1802E6740 (--_GAppResizeData@@UEAAPEAXI@Z.c)
 *     ??1CDropFeedback@@UEAA@XZ @ 0x1802EDDEC (--1CDropFeedback@@UEAA@XZ.c)
 *     ??1CDragVisual@@MEAA@XZ @ 0x1802F06E0 (--1CDragVisual@@MEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIDragVisual@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802F08D0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIDragVisual@@UI.c)
 * Callees:
 *     <none>
 */

void __fastcall CWRLObjectWithSite::~CWRLObjectWithSite(CWinRTApplicationView **this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this + 2);
}

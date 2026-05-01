/*
 * XREFs of ??0CImmersiveShellComponentWithGITSite@@QEAA@XZ @ 0x1800185BC
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@@23@@WRL@Microsoft@@QEAA@XZ @ 0x180017A70 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@VCImmersiveShellComponentW.c)
 *     ??0CImmersiveWindowManager@@QEAA@XZ @ 0x18002F9E0 (--0CImmersiveWindowManager@@QEAA@XZ.c)
 *     ??0CApplicationViewManager@@QEAA@XZ @ 0x180073D2C (--0CApplicationViewManager@@QEAA@XZ.c)
 *     ??0DesktopBlueLightReductionManager@@QEAA@XZ @ 0x18008740C (--0DesktopBlueLightReductionManager@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VRemoteLauncherForegroundHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800DDFD4 (--$MakeAndInitialize@VRemoteLauncherForegroundHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJ.c)
 *     ??$MakeAndInitialize@VLockScreenDirectorServiceProviderImpl@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800E32E4 (--$MakeAndInitialize@VLockScreenDirectorServiceProviderImpl@@UIUnknown@@$$V@Details@WRL@Microsof.c)
 *     ??0PrivilegedOperationsService@@QEAA@XZ @ 0x1800F68D4 (--0PrivilegedOperationsService@@QEAA@XZ.c)
 *     ??0TaskFlowImmersiveShellBroker@@QEAA@XZ @ 0x1800F6D7C (--0TaskFlowImmersiveShellBroker@@QEAA@XZ.c)
 *     ??0HolographicPositioner@@QEAA@XZ @ 0x180105364 (--0HolographicPositioner@@QEAA@XZ.c)
 *     ??0ViewEventDispatcher@@QEAA@XZ @ 0x18011B80C (--0ViewEventDispatcher@@QEAA@XZ.c)
 *     ??0XamlExplorerHostShellComponent@@QEAA@XZ @ 0x180146D28 (--0XamlExplorerHostShellComponent@@QEAA@XZ.c)
 *     ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x180198A90 (--0TouchKeyboardExperienceManager@@QEAA@XZ.c)
 *     ??0AccessibilityExperienceManager@@QEAA@XZ @ 0x1801AFC20 (--0AccessibilityExperienceManager@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VVirtualDesktopDataSourceComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801B4104 (--$MakeAndInitialize@VVirtualDesktopDataSourceComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     <none>
 */

CImmersiveShellComponentWithGITSite *__fastcall CImmersiveShellComponentWithGITSite::CImmersiveShellComponentWithGITSite(
        CImmersiveShellComponentWithGITSite *this)
{
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &CWRLObjectWithGITSite::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 2);
  *((_QWORD *)this + 5) = &CImmersiveShellComponent::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 6) = &CImmersiveShellComponentWithSite::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *(_QWORD *)this = &CWRLObjectWithGITSite::`vftable';
  *((_QWORD *)this + 5) = &CImmersiveShellComponentWithGITSite::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 6) = &CImmersiveShellComponentWithSite::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  return this;
}

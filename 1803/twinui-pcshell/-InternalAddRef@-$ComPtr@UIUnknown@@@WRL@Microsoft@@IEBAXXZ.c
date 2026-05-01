/*
 * XREFs of ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0
 * Callers:
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x180006FE0 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x180031A34 (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180031B50 (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18003FB80 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x18004EC5C (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 *     ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x180052D20 (-ViewDestroyed@ViewWrapperBase@@UEAAXXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18006D738 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ??0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z @ 0x180097C78 (--0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z.c)
 *     ??$FindEx@VCImmersiveAppFinderByHostId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800F8570 (--$FindEx@VCImmersiveAppFinderByHostId@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationIn.c)
 *     ??$FindEx@VCImmersiveAppFinderByTaskWindow@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800F8688 (--$FindEx@VCImmersiveAppFinderByTaskWindow@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicati.c)
 *     ??$FindEx@VCImmersiveAppFinderByHostIdAndGlomId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHostIdAndGlomId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1801021EC (--$FindEx@VCImmersiveAppFinderByHostIdAndGlomId@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveAppl.c)
 *     ??$FindEx@VCClassicWindowFinderByAppID@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByAppID@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180118F00 (--$FindEx@VCClassicWindowFinderByAppID@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd1385ca299a5b2ab1a689d13634879a__&___ptr64___lambda_fd1385ca299a5b2ab1a689d13634879a__&___ptr64_ @ 0x18017FEDC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fd1385ca299a5.c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18018177C (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?AddObject@ObjectArray@Discover@PenWorkspace@@QEAAXPEAUIUnknown@@@Z @ 0x180191C54 (-AddObject@ObjectArray@Discover@PenWorkspace@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?put_Completed@?$AsyncOperation@U?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@23@V?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@3@@Z @ 0x1801A7CA0 (-put_Completed@-$AsyncOperation@U-$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults.c)
 *     ??0RecoveredViewInfo@@QEAA@AEBU0@@Z @ 0x1801C7ECC (--0RecoveredViewInfo@@QEAA@AEBU0@@Z.c)
 *     ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x1801D7550 (-QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801DB938 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA?AW4StateChangeResult@@W4PopupCountOperation@@_K@Z @ 0x1801E4E60 (-ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA-AW4StateChangeResult@@W4PopupCountOperation@@_K.c)
 *     ?GetSwitchItemElementIndex@CSwitchItemGrid@@UEAAJPEAUISwitchItem@@PEA_K@Z @ 0x18028ECD0 (-GetSwitchItemElementIndex@CSwitchItemGrid@@UEAAJPEAUISwitchItem@@PEA_K@Z.c)
 *     ?ItemRemoved@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x18028EEF0 (-ItemRemoved@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z.c)
 *     ?NavigateToItem@CSwitchItemGrid@@UEAAJPEAUIUnknown@@@Z @ 0x18028F5B0 (-NavigateToItem@CSwitchItemGrid@@UEAAJPEAUIUnknown@@@Z.c)
 *     _lambda_55e0f220ed6030f2589a6e9858a32f89_::_lambda_55e0f220ed6030f2589a6e9858a32f89_ @ 0x1802978D4 (_lambda_55e0f220ed6030f2589a6e9858a32f89_--_lambda_55e0f220ed6030f2589a6e9858a32f89_.c)
 *     ?BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ @ 0x180298090 (-BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ.c)
 *     ??$FindEx@VCTempAppVisualFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@@@@@QEBAJAEBVCTempAppVisualFinderByApplication@@AEBV?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1802F4A48 (--$FindEx@VCTempAppVisualFinderByApplication@@@-$CTSimpleFixedArray@V-$ComPtr@UITemporaryAppVisu.c)
 *     ??$FindEx@VCTempAppVisualFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@@@@@QEBAJAEBVCTempAppVisualFinderByView@@AEBV?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1802F4AE8 (--$FindEx@VCTempAppVisualFinderByView@@@-$CTSimpleFixedArray@V-$ComPtr@UITemporaryAppVisual@@@WR.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 8LL);
    if ( (char *)v2 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IWindowDispatcherConnectedStandby,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::AddRef )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IWindowDispatcherConnectedStandby,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::AddRef(v1);
    else
      v2();
  }
}

/*
 * XREFs of ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008380 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x18000CAB0 (-HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x180013290 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x180014108 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x180015CCC (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ??1AddWindowToGlom@CAppManagerTelemetry@@QEAA@XZ @ 0x18001F564 (--1AddWindowToGlom@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ??1HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAA@XZ @ 0x180020744 (--1HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ??1CloseHungApp@CAppManagerTelemetry@@QEAA@XZ @ 0x180024404 (--1CloseHungApp@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ??1OnShellHookMessage@IamTraceLogging@@QEAA@XZ @ 0x180026B30 (--1OnShellHookMessage@IamTraceLogging@@QEAA@XZ.c)
 *     ?DragEnter@CAppViewManager@@UEAAJU_GUID@@PEBGUtagPOINT@@@Z @ 0x18003E1A0 (-DragEnter@CAppViewManager@@UEAAJU_GUID@@PEBGUtagPOINT@@@Z.c)
 *     ?DragLeave@CAppViewManager@@UEAAJU_GUID@@UtagPOINT@@@Z @ 0x18003E8F0 (-DragLeave@CAppViewManager@@UEAAJU_GUID@@UtagPOINT@@@Z.c)
 *     ?DragComplete@CAppViewManager@@UEAAJU_GUID@@UtagPOINT@@@Z @ 0x18003E970 (-DragComplete@CAppViewManager@@UEAAJU_GUID@@UtagPOINT@@@Z.c)
 *     ?DragCancel@CAppViewManager@@UEAAJU_GUID@@@Z @ 0x18003EEE0 (-DragCancel@CAppViewManager@@UEAAJU_GUID@@@Z.c)
 *     ?WindowProvided@CAppViewManager@@UEAAJU_GUID@@PEAUHWND__@@@Z @ 0x18003EF80 (-WindowProvided@CAppViewManager@@UEAAJU_GUID@@PEAUHWND__@@@Z.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x18003F7A8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180040140 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCall.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180040B88 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 *     ?SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z @ 0x180042700 (-SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z.c)
 *     ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x180042970 (-ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z.c)
 *     Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b__&___ptr64_1__1_::Invoke @ 0x180044BE0 (Microsoft--WRL--Details--InvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b__-.c)
 *     ??1ConsolidateView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180047814 (--1ConsolidateView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1SplitView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180047C04 (--1SplitView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180048174 (--1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180048564 (--1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180048D24 (--1ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1WindowProvided@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180049114 (--1WindowProvided@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1DragCancel@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180049504 (--1DragCancel@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1DragComplete@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1800498F4 (--1DragComplete@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1DragEnter@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18004A0B4 (--1DragEnter@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@@Z @ 0x1800504E8 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180054140 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180055340 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180055EA0 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18005664C (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x1800580AC (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1800589A0 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ??1SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x18005F024 (--1SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1DeleteWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x18005F414 (--1DeleteWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1ProcessNewWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1800604F4 (--1ProcessNewWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1800608E4 (--1GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1SetApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x180060CD4 (--1SetApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1SetViewPosition@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1800611B4 (--1SetViewPosition@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1Initialization@CImmersiveAppTelemetry@@QEAA@XZ @ 0x180061654 (--1Initialization@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180065F64 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x1800663F0 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 *     _lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_::__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_ @ 0x1800668C8 (_lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_--__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_.c)
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180066920 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     _lambda_1d725a211fae648eb22a29137fc16fd7_::__lambda_1d725a211fae648eb22a29137fc16fd7_ @ 0x180066C28 (_lambda_1d725a211fae648eb22a29137fc16fd7_--__lambda_1d725a211fae648eb22a29137fc16fd7_.c)
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180066C80 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     _lambda_c4af78c0c8077c37e96163482dfb0569_::__lambda_c4af78c0c8077c37e96163482dfb0569_ @ 0x180066F74 (_lambda_c4af78c0c8077c37e96163482dfb0569_--__lambda_c4af78c0c8077c37e96163482dfb0569_.c)
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800677F0 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1___ @ 0x180069B64 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1___.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_1d725a211fae648eb22a29137fc16fd7___ @ 0x180069E64 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_1d725a211fae648eb22a29137fc16fd7___.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_c4af78c0c8077c37e96163482dfb0569___ @ 0x18006A21C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_c4af78c0c8077c37e96163482dfb0569___.c)
 *     _lambda_917667f80511e4bec41c80ee8a028167_::__lambda_917667f80511e4bec41c80ee8a028167_ @ 0x18006A7BC (_lambda_917667f80511e4bec41c80ee8a028167_--__lambda_917667f80511e4bec41c80ee8a028167_.c)
 *     _lambda_0cd635be87c787a0220700b97c104318_::__lambda_0cd635be87c787a0220700b97c104318_ @ 0x18006A828 (_lambda_0cd635be87c787a0220700b97c104318_--__lambda_0cd635be87c787a0220700b97c104318_.c)
 *     _lambda_a12f61aea3debf81db7797da6f154ad8_::__lambda_a12f61aea3debf81db7797da6f154ad8_ @ 0x18006A894 (_lambda_a12f61aea3debf81db7797da6f154ad8_--__lambda_a12f61aea3debf81db7797da6f154ad8_.c)
 *     ??_E?$CTaskWrapper@V_lambda_917667f80511e4bec41c80ee8a028167_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18006D0E0 (--_E-$CTaskWrapper@V_lambda_917667f80511e4bec41c80ee8a028167_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??_E?$CTaskWrapper@V_lambda_0cd635be87c787a0220700b97c104318_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18006D180 (--_E-$CTaskWrapper@V_lambda_0cd635be87c787a0220700b97c104318_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??_G?$CTaskWrapper@V_lambda_a12f61aea3debf81db7797da6f154ad8_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18006D220 (--_G-$CTaskWrapper@V_lambda_a12f61aea3debf81db7797da6f154ad8_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??1ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAA@XZ @ 0x18006E024 (--1ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x18006E04C (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x18006E444 (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x18006E834 (--1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026274 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180026274.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi

  v2 = *(volatile signed __int32 **)(a1 + 304);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(char **)(a1 + 304);
      if ( v3 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

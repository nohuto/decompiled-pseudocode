/*
 * XREFs of ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574
 * Callers:
 *     ??_E?$CTaskWrapper@V_lambda_b5b3b11bf504546ef5d7da292238c7b0_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18000EE10 (--_E-$CTaskWrapper@V_lambda_b5b3b11bf504546ef5d7da292238c7b0_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_8e77f3627fbb508724cf2b62e627d849___ @ 0x180012700 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_8e77f3627fbb508724cf2b62e627d849___.c)
 *     ?QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180013820 (-QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180013FD0 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180014FA0 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800157F0 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800167C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAs_ea_1800167C0.c)
 *     ??_E?$CAsyncCallbackWithLambda@V_lambda_fe83376184101c6f34c22c2b5aa5bb70_@@@@UEAAPEAXI@Z @ 0x180017330 (--_E-$CAsyncCallbackWithLambda@V_lambda_fe83376184101c6f34c22c2b5aa5bb70_@@@@UEAAPEAXI@Z.c)
 *     NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x180017610 (NotificationDispatcher--RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180018630 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x180034860 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x180035DF0 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18003FB80 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180049130 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180049D40 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180049F20 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18004DCF0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x180054F60 (-RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z.c)
 *     ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x180056710 (-OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 *     ?GetViewClientExtensionMapPropertyAsInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAH@Z @ 0x180057290 (-GetViewClientExtensionMapPropertyAsInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEA.c)
 *     ?GetViewClientExtensionMapPropertyAsUInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAI@Z @ 0x180057850 (-GetViewClientExtensionMapPropertyAsUInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PE.c)
 *     ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x180057FC0 (-OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBl.c)
 *     ?OnRequestEndPresentView@ViewManagerBridge@@UEAAJI_NW4Direction@Navigation@@W4AnimationType@3@W4AnimationFlags@3@@Z @ 0x1800584D0 (-OnRequestEndPresentView@ViewManagerBridge@@UEAAJI_NW4Direction@Navigation@@W4AnimationType@3@W4.c)
 *     ?OnRequestBeginPresentView@ViewManagerBridge@@UEAAJI_N@Z @ 0x180058840 (-OnRequestBeginPresentView@ViewManagerBridge@@UEAAJI_N@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180065100 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180066C30 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006A7C0 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180072F34 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180072F34.c)
 *     ??1?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800764E0 (--1-$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x180077F80 (-GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ??1?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007C9B4 (--1-$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007CD1C (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??_G?$CTaskWrapper@V_lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180088AC0 (--_G-$CTaskWrapper@V_lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?reset@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180088E58 (-reset@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Para.c)
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x180088EE0 (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008DE98 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_18008DE98.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008E914 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflector_ea_18008E914.c)
 *     ??1?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FD64 (--1-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ??1?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800922A4 (--1-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderT_ea_1800922A4.c)
 *     ??1?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180095244 (--1-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x1800FA064 (--1-$_TlgActivityBase@V-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VCommonStartTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x1800FA1D4 (--1-$_TlgActivityBase@V-$ActivityData@VCommonStartTelemetryLogging@@U_TlgReflectorTag_Param0IsPr.c)
 *     ??1?$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180145A04 (--1-$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VTask.c)
 *     ??1?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18018DF00 (--1-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ??1?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802475F4 (--1-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsP_ea_1802475F4.c)
 *     ??1?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802630B8 (--1-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x18028C5FC (--1-$_TlgActivityBase@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_P_ea_18028C5FC.c)
 *     ??1?$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803026AC (--1-$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 * Callees:
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall _TlgWriteActivityAutoStop<0,5>(const struct _TlgProvider_t *a1, const GUID *a2)
{
  TLG_STATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 5u )
    return TlgWrite(a1, &unk_180385B41, a2, 0LL, 2u, &pData);
  return result;
}

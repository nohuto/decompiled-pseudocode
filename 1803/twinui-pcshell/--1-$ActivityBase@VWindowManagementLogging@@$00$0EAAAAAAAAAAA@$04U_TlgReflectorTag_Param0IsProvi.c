/*
 * XREFs of ??1?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014F634
 * Callers:
 *     ??1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ @ 0x18014F850 (--1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ??1FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ @ 0x18014F878 (--1FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ??1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180207514 (--1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1ShowSnapAssist@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180217FF0 (--1ShowSnapAssist@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180274DE8 (--1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180277F84 (--1ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ @ 0x1802B885C (--1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ.c)
 *     ??1AppToAppSwitch@TabletModeTelemetry@@QEAA@XZ @ 0x1802C3AEC (--1AppToAppSwitch@TabletModeTelemetry@@QEAA@XZ.c)
 *     ??1WindowArrangementView_Show@TabletModeTelemetry@@QEAA@XZ @ 0x1802D0084 (--1WindowArrangementView_Show@TabletModeTelemetry@@QEAA@XZ.c)
 *     ??1TMAppArrange@TabletModeTelemetry@@QEAA@XZ @ 0x1802DA0F0 (--1TMAppArrange@TabletModeTelemetry@@QEAA@XZ.c)
 *     ??1TMAppResize@TabletModeTelemetry@@QEAA@XZ @ 0x1802DEE60 (--1TMAppResize@TabletModeTelemetry@@QEAA@XZ.c)
 *     ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x1802E8828 (--1JointResize@JointResizeTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014F690 (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_18014F690.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801529CC (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_1801529CC.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

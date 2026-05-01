/*
 * XREFs of ??1ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ @ 0x1802B885C
 * Callers:
 *     ??4ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802B8A5C (--4ExitCompactOverlayModeForView@OverlayModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x1802B8FD8 (-ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 *     _ShellPositionerManager::ChangePositionerForView_::_1_::dtor$1 @ 0x1802B91B0 (_ShellPositionerManager--ChangePositionerForView_--_1_--dtor$1.c)
 *     _ShellPositionerManager::ChangePositionerForView_::_1_::dtor$2 @ 0x1802B91BC (_ShellPositionerManager--ChangePositionerForView_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014FD34 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 */

void __fastcall OverlayModeTelemetry::ExitCompactOverlayModeForView::~ExitCompactOverlayModeForView(
        OverlayModeTelemetry::ExitCompactOverlayModeForView *this)
{
  *(_QWORD *)this = &OverlayModeTelemetry::ExitCompactOverlayModeForView::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

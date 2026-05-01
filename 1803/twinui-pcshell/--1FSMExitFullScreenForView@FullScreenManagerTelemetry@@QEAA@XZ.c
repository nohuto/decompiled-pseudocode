/*
 * XREFs of ??1FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ @ 0x18014F878
 * Callers:
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180150180 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014FD34 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 */

void __fastcall FullScreenManagerTelemetry::FSMExitFullScreenForView::~FSMExitFullScreenForView(
        FullScreenManagerTelemetry::FSMExitFullScreenForView *this)
{
  *(_QWORD *)this = &FullScreenManagerTelemetry::FSMExitFullScreenForView::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

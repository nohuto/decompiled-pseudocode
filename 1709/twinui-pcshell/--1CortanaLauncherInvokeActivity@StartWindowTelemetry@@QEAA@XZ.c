/*
 * XREFs of ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x18017D8BC
 * Callers:
 *     _XamlLauncherState::OnSessionBecameIdle_::_1_::dtor$2 @ 0x1801F5760 (_XamlLauncherState--OnSessionBecameIdle_--_1_--dtor$2.c)
 *     _XamlLauncherState::ShowStartView_::_1_::dtor$2 @ 0x1801F5778 (_XamlLauncherState--ShowStartView_--_1_--dtor$2.c)
 *     _XamlLauncherState::OnCortanaShown_::_1_::dtor$3 @ 0x1801F5874 (_XamlLauncherState--OnCortanaShown_--_1_--dtor$3.c)
 *     _XamlLauncherState::OnCortanaFailedToGetForeground_::_1_::dtor$1 @ 0x1801F58A4 (_XamlLauncherState--OnCortanaFailedToGetForeground_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801829F0 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity(
        StartWindowTelemetry::CortanaLauncherInvokeActivity *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

/*
 * XREFs of ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x180148BA8
 * Callers:
 *     _XamlLauncherState::OnSessionBecameIdle_::_1_::dtor$2 @ 0x1801A3E60 (_XamlLauncherState--OnSessionBecameIdle_--_1_--dtor$2.c)
 *     _XamlLauncherState::OnCortanaShown_::_1_::dtor$3 @ 0x1801A3F68 (_XamlLauncherState--OnCortanaShown_--_1_--dtor$3.c)
 *     _XamlLauncherState::OnCortanaFailedToGetForeground_::_1_::dtor$1 @ 0x1801A3F98 (_XamlLauncherState--OnCortanaFailedToGetForeground_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014DC80 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity(
        StartWindowTelemetry::CortanaLauncherInvokeActivity *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

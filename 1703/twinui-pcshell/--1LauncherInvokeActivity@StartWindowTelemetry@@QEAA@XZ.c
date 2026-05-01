/*
 * XREFs of ??1LauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x1801487D8
 * Callers:
 *     _XamlLauncherState::OnSessionBecameIdle_::_1_::dtor$1 @ 0x1801A3E54 (_XamlLauncherState--OnSessionBecameIdle_--_1_--dtor$1.c)
 *     _XamlLauncherState::ShowStartView_::_1_::dtor$2 @ 0x1801A3E78 (_XamlLauncherState--ShowStartView_--_1_--dtor$2.c)
 *     _XamlLauncherState::HideStartAndCortana_::_1_::dtor$1 @ 0x1801A3E90 (_XamlLauncherState--HideStartAndCortana_--_1_--dtor$1.c)
 *     _XamlLauncherState::TryToCompleteStartShowWithoutCortana_::_1_::dtor$0 @ 0x1801A3ECC (_XamlLauncherState--TryToCompleteStartShowWithoutCortana_--_1_--dtor$0.c)
 *     _XamlLauncherState::OnStartShown_::_1_::dtor$1 @ 0x1801A3EE4 (_XamlLauncherState--OnStartShown_--_1_--dtor$1.c)
 *     _XamlLauncherState::OnStartShown_::_1_::dtor$2 @ 0x1801A3EF0 (_XamlLauncherState--OnStartShown_--_1_--dtor$2.c)
 *     _XamlLauncherState::OnStartFailedToGetForegroundImpl_::_1_::dtor$1 @ 0x1801A3F2C (_XamlLauncherState--OnStartFailedToGetForegroundImpl_--_1_--dtor$1.c)
 *     _XamlLauncherState::OnCortanaShown_::_1_::dtor$1 @ 0x1801A3F50 (_XamlLauncherState--OnCortanaShown_--_1_--dtor$1.c)
 *     _XamlLauncherState::OnCortanaFailedToGetForeground_::_1_::dtor$2 @ 0x1801A3FA4 (_XamlLauncherState--OnCortanaFailedToGetForeground_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014DC80 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall StartWindowTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(
        StartWindowTelemetry::LauncherInvokeActivity *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

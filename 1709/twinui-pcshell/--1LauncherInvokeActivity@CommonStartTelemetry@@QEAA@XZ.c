/*
 * XREFs of ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18017D18C
 * Callers:
 *     _XamlLauncherState::OnSessionBecameIdle_::_1_::dtor$1 @ 0x1801F5754 (_XamlLauncherState--OnSessionBecameIdle_--_1_--dtor$1.c)
 *     _XamlLauncherState::ShowStartView_::_1_::dtor$3 @ 0x1801F5784 (_XamlLauncherState--ShowStartView_--_1_--dtor$3.c)
 *     _XamlLauncherState::HideStartAndCortana_::_1_::dtor$1 @ 0x1801F579C (_XamlLauncherState--HideStartAndCortana_--_1_--dtor$1.c)
 *     _XamlLauncherState::TryToCompleteStartShowWithoutCortana_::_1_::dtor$0 @ 0x1801F57D8 (_XamlLauncherState--TryToCompleteStartShowWithoutCortana_--_1_--dtor$0.c)
 *     _XamlLauncherState::OnStartShown_::_1_::dtor$1 @ 0x1801F57F0 (_XamlLauncherState--OnStartShown_--_1_--dtor$1.c)
 *     _XamlLauncherState::OnStartShown_::_1_::dtor$2 @ 0x1801F57FC (_XamlLauncherState--OnStartShown_--_1_--dtor$2.c)
 *     _XamlLauncherState::OnStartFailedToGetForegroundImpl_::_1_::dtor$1 @ 0x1801F5838 (_XamlLauncherState--OnStartFailedToGetForegroundImpl_--_1_--dtor$1.c)
 *     _XamlLauncherState::OnCortanaShown_::_1_::dtor$1 @ 0x1801F585C (_XamlLauncherState--OnCortanaShown_--_1_--dtor$1.c)
 *     _XamlLauncherState::OnCortanaFailedToGetForeground_::_1_::dtor$2 @ 0x1801F58B0 (_XamlLauncherState--OnCortanaFailedToGetForeground_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801829F0 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(
        CommonStartTelemetry::LauncherInvokeActivity *this)
{
  *(_QWORD *)this = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(this);
}

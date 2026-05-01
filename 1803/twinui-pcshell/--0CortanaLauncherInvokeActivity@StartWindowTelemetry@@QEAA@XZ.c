/*
 * XREFs of ??0CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x180225A78
 * Callers:
 *     ??0XamlLauncherState@@QEAA@XZ @ 0x180225C4C (--0XamlLauncherState@@QEAA@XZ.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18022DFD8 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007A340 (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 */

StartWindowTelemetry::CortanaLauncherInvokeActivity *__fastcall StartWindowTelemetry::CortanaLauncherInvokeActivity::CortanaLauncherInvokeActivity(
        StartWindowTelemetry::CortanaLauncherInvokeActivity *this)
{
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)this,
    (__int64)"CortanaLauncherInvokeActivity");
  *(_QWORD *)this = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
  return this;
}

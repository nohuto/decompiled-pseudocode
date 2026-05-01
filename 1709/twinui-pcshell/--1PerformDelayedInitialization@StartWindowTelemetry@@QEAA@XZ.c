/*
 * XREFs of ??1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ @ 0x18017E3D4
 * Callers:
 *     _XamlLauncher::PerformDelayedInitialization_::_1_::dtor$0 @ 0x1801F54FC (_XamlLauncher--PerformDelayedInitialization_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180183268 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

void __fastcall StartWindowTelemetry::PerformDelayedInitialization::~PerformDelayedInitialization(
        StartWindowTelemetry::PerformDelayedInitialization *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::PerformDelayedInitialization::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

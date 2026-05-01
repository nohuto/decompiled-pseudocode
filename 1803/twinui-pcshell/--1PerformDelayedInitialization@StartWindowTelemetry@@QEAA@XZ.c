/*
 * XREFs of ??1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ @ 0x180225E88
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1802281D0 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     _XamlLauncher::PerformDelayedInitialization_::_1_::dtor$0 @ 0x18022845F (_XamlLauncher--PerformDelayedInitialization_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007854C (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

void __fastcall StartWindowTelemetry::PerformDelayedInitialization::~PerformDelayedInitialization(
        StartWindowTelemetry::PerformDelayedInitialization *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::PerformDelayedInitialization::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

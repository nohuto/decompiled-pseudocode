/*
 * XREFs of ??1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ @ 0x18017DE94
 * Callers:
 *     _XamlLauncher::SubscribeToServices_::_1_::dtor$0 @ 0x1801F54D8 (_XamlLauncher--SubscribeToServices_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180183268 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

void __fastcall StartWindowTelemetry::SubscribeToServices::~SubscribeToServices(
        StartWindowTelemetry::SubscribeToServices *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::SubscribeToServices::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

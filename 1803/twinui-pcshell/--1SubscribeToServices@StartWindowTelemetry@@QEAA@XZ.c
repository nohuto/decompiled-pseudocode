/*
 * XREFs of ??1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ @ 0x180225EB0
 * Callers:
 *     ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180229EA0 (-SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     _XamlLauncher::SubscribeToServices_::_1_::dtor$0 @ 0x18022A0A6 (_XamlLauncher--SubscribeToServices_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007854C (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

void __fastcall StartWindowTelemetry::SubscribeToServices::~SubscribeToServices(
        StartWindowTelemetry::SubscribeToServices *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::SubscribeToServices::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

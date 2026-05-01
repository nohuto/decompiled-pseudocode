/*
 * XREFs of ??1ActivateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x18015C5C4
 * Callers:
 *     _FocusHoldingTank::s_WndProc_::_1_::dtor$0 @ 0x1801A4010 (_FocusHoldingTank--s_WndProc_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014E3C4 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

void __fastcall StartWindowTelemetry::ActivateHoldingTankWindow::~ActivateHoldingTankWindow(
        StartWindowTelemetry::ActivateHoldingTankWindow *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::ActivateHoldingTankWindow::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

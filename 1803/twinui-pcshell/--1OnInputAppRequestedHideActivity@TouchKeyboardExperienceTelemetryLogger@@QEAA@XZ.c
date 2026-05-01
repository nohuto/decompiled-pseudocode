/*
 * XREFs of ??1OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18024772C
 * Callers:
 *     ??4OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@Z @ 0x180247AA4 (--4OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAAEAV01@$$QEAV01@@.c)
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x18024AE00 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedHide_::_1_::dtor$0 @ 0x18024AFD9 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedHide_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18023CD14 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::~OnInputAppRequestedHideActivity(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

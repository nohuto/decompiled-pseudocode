/*
 * XREFs of ??1OnShellHotKeyActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1801A82A4
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnShellHotKey_::_1_::dtor$0 @ 0x1801F6A0B (_KeyboardHosting--TabTipAdapter--OnShellHotKey_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801A8BE4 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity::~OnShellHotKeyActivity(
        TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnShellHotKeyActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}

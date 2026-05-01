/*
 * XREFs of ??1InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18023BFFC
 * Callers:
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18023CF18 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::EnsureInputAppIsActivated_::_1_::dtor$1 @ 0x18023D074 (_TouchKeyboardExperienceManager--EnsureInputAppIsActivated_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18023CD14 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::~InputAppResumeRequested(
        TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

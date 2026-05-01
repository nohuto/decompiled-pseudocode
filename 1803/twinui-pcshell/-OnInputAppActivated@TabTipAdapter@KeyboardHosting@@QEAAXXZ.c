/*
 * XREFs of ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18024AA44
 * Callers:
 *     _lambda_65c0f5c4ae095b6c4d2379132d65e3aa_::operator() @ 0x1800A1A4C (_lambda_65c0f5c4ae095b6c4d2379132d65e3aa_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18023B800 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18023BEAC (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18023CD14 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180241D84 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180249038 (-ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?StartActivity@InputAppActivated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18024D77C (-StartActivity@InputAppActivated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardHosting::TabTipAdapter::OnInputAppActivated(KeyboardHosting::TabTipAdapter *this)
{
  int v2; // eax
  _QWORD v3[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v3,
    (__int64)"InputAppActivated");
  v3[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivated::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppActivated::StartActivity((TouchKeyboardExperienceTelemetryLogger::InputAppActivated *)v3);
  v2 = KeyboardHosting::TabTipAdapter::ExecutePendingRequest(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      941LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v2);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v3,
    0);
  v3[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivated::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v3);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v3);
}

/*
 * XREFs of _anonymous_namespace_::ScreenOnStudySessionStateTracker::Start @ 0x180124AF0
 * Callers:
 *     _anonymous_namespace_::State::State @ 0x180124788 (_anonymous_namespace_--State--State.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

void __fastcall anonymous_namespace_::ScreenOnStudySessionStateTracker::Start(__int64 a1)
{
  _QWORD *v1; // rdi
  signed int v3; // eax
  int v4; // eax
  const void *retaddr; // [rsp+48h] [rbp+0h]

  v1 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = anonymous_namespace_::OnScreenOnStudySessionStateChange;
  *(_BYTE *)a1 = 1;
  v3 = RtlSubscribeWnfStateChangeNotification(
         a1 + 16,
         WNF_SRUM_SCREENONSTUDY_SESSION,
         0LL,
         anonymous_namespace_::ScreenOnStudySessionStateTracker::WnfCallback,
         a1,
         0LL,
         0,
         0) | 0x10000000;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x128u);
    if ( *(_BYTE *)a1 )
    {
      *(_BYTE *)a1 = 0;
      if ( *v1 )
      {
        v4 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
        if ( v4 < 0 )
          ModuleFailFastForHRESULT(v4, retaddr);
        *v1 = 0LL;
      }
    }
  }
}

/*
 * XREFs of ?Reset@CDWMInputThread@@QEAAJXZ @ 0x1801A08E8
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x180194F14 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Start@CDWMInputThread@@QEAAJXZ @ 0x1801A0A58 (-Start@CDWMInputThread@@QEAAJXZ.c)
 */

__int64 __fastcall CDWMInputThread::Reset(HANDLE *this)
{
  unsigned int v1; // edi
  signed int v3; // eax

  v1 = 0;
  if ( this[1] || (v3 = CDWMInputThread::Start((CDWMInputThread *)this), v1 = v3, v3 >= 0) )
  {
    if ( !*((_BYTE *)this + 24) )
      SetEvent(this[2]);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x9Bu);
  }
  return v1;
}

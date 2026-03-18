/*
 * XREFs of ?Reset@CMit@@QEAAJXZ @ 0x1801A0608
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x180194F14 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Start@CMit@@QEAAJXZ @ 0x1801A0668 (-Start@CMit@@QEAAJXZ.c)
 */

__int64 __fastcall CMit::Reset(HANDLE *this)
{
  unsigned int v1; // edi
  signed int v3; // eax

  v1 = 0;
  if ( this[1] || (v3 = CMit::Start((CMit *)this), v1 = v3, v3 >= 0) )
  {
    if ( !*((_BYTE *)this + 24) )
      SetEvent(this[2]);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB9u);
  }
  return v1;
}

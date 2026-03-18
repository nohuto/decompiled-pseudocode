/*
 * XREFs of ?Reset@CISMInputThread@@QEAAJXZ @ 0x1801A0C0C
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x180194F14 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Start@CISMInputThread@@QEAAJXZ @ 0x1801A0D68 (-Start@CISMInputThread@@QEAAJXZ.c)
 *     ?Stop@CISMInputThread@@QEAAXXZ @ 0x1801A0DE4 (-Stop@CISMInputThread@@QEAAXXZ.c)
 */

__int64 __fastcall CISMInputThread::Reset(CISMInputThread *this)
{
  signed int v2; // eax
  unsigned int v3; // ebx

  if ( *(_QWORD *)this )
    CISMInputThread::Stop(this);
  v2 = CISMInputThread::Start(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x5Fu);
  return v3;
}

/*
 * XREFs of ?Create@CISMInputThread@@SAJPEAPEAV1@@Z @ 0x1801A0B3C
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x180194F14 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CISMInputThread::Create(struct CISMInputThread **a1)
{
  unsigned int v2; // ebx
  struct CISMInputThread *v3; // rax

  v2 = 0;
  v3 = (struct CISMInputThread *)operator new(0x30uLL);
  if ( v3 )
  {
    *((_QWORD *)v3 + 5) = 0LL;
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    *a1 = v3;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x29u);
  }
  return v2;
}

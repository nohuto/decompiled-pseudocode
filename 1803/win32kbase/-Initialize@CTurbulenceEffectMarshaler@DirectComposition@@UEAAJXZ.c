/*
 * XREFs of ?Initialize@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C015C340
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0151F40 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CTurbulenceEffectMarshaler::Initialize(
        DirectComposition::CTurbulenceEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 24) = 1008981770;
    result = 0LL;
    *(_QWORD *)((char *)this + 100) = 1008981770LL;
    *((_DWORD *)this + 27) = 0;
  }
  *((_QWORD *)this + 14) = 1LL;
  *((_QWORD *)this + 15) = 0LL;
  return result;
}

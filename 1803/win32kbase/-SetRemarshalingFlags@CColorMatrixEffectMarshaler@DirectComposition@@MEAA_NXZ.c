/*
 * XREFs of ?SetRemarshalingFlags@CColorMatrixEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C015BB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CColorMatrixEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CColorMatrixEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12)
    || *((_DWORD *)this + 42) != 1
    || *((_DWORD *)this + 43)
    || *((float *)this + 22) != 1.0
    || *((float *)this + 23) != 0.0
    || *((float *)this + 24) != 0.0
    || *((float *)this + 25) != 0.0
    || *((float *)this + 26) != 0.0
    || *((float *)this + 27) != 1.0
    || *((float *)this + 28) != 0.0
    || *((float *)this + 29) != 0.0
    || *((float *)this + 30) != 0.0
    || *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 1.0
    || *((float *)this + 33) != 0.0
    || *((float *)this + 34) != 0.0
    || *((float *)this + 35) != 0.0
    || *((float *)this + 36) != 0.0
    || *((float *)this + 37) != 1.0
    || *((float *)this + 38) != 0.0
    || *((float *)this + 39) != 0.0
    || *((float *)this + 40) != 0.0
    || *((float *)this + 41) != 0.0 )
  {
    return 1;
  }
  return result;
}

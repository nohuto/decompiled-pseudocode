/*
 * XREFs of ?SetRemarshalingFlags@CTurbulenceEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C015C480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CTurbulenceEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CTurbulenceEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12)
    || *((float *)this + 22) != 0.0
    || *((float *)this + 23) != 0.0
    || *((float *)this + 24) != 0.0099999998
    || *((float *)this + 25) != 0.0099999998
    || *((float *)this + 26) != 0.0
    || *((float *)this + 27) != 0.0
    || *((_DWORD *)this + 28) != 1
    || *((_DWORD *)this + 29)
    || *((_DWORD *)this + 30)
    || *((_DWORD *)this + 31) )
  {
    return 1;
  }
  return result;
}

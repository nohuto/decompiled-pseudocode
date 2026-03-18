/*
 * XREFs of ?SetRemarshalingFlags@CShadowEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C015BFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CShadowEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CShadowEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12)
    || *((float *)this + 22) != 3.0
    || *((_DWORD *)this + 27)
    || *((float *)this + 23) != 0.0
    || *((float *)this + 24) != 0.0
    || *((float *)this + 25) != 0.0
    || *((float *)this + 26) != 1.0 )
  {
    return 1;
  }
  return result;
}

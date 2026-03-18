/*
 * XREFs of ?SetRemarshalingFlags@CBrightnessEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C015B7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CBrightnessEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CBrightnessEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12)
    || *((float *)this + 22) != 1.0
    || *((float *)this + 23) != 1.0
    || *((float *)this + 24) != 0.0
    || *((float *)this + 25) != 0.0 )
  {
    return 1;
  }
  return result;
}

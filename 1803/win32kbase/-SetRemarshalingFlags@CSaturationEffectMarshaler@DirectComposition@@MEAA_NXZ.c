/*
 * XREFs of ?SetRemarshalingFlags@CSaturationEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C015C210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSaturationEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CSaturationEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12) || *((float *)this + 22) != 0.5 )
    return 1;
  return result;
}

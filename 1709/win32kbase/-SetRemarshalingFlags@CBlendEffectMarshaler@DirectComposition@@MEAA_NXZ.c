/*
 * XREFs of ?SetRemarshalingFlags@CBlendEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014F410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CBlendEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CBlendEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12) || *((_DWORD *)this + 22) )
    return 1;
  return result;
}

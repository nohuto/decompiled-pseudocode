/*
 * XREFs of ?SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0152160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CFilterEffectMarshaler *this)
{
  *((_DWORD *)this + 20) = 0;
  return *((_DWORD *)this + 12) != 0;
}

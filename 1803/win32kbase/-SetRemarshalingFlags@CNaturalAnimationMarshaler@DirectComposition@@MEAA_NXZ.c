/*
 * XREFs of ?SetRemarshalingFlags@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014FF20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014B0B0 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CNaturalAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CNaturalAnimationMarshaler *this)
{
  int v1; // eax

  *((_DWORD *)this + 4) |= 0x38000u;
  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 0x800) != 0 )
  {
    v1 |= 0x1000u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( (v1 & 0x2000) != 0 )
    *((_DWORD *)this + 4) = v1 | 0x4000;
  DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this);
  return 1;
}

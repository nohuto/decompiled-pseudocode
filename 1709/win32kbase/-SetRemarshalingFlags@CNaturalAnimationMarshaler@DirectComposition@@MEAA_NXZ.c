/*
 * XREFs of ?SetRemarshalingFlags@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0147500
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01434A0 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CNaturalAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CNaturalAnimationMarshaler *this)
{
  int v1; // eax
  int v2; // eax

  *((_DWORD *)this + 4) |= 0x38000u;
  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 0x800) != 0 )
    *((_DWORD *)this + 4) = v1 | 0x1000;
  v2 = *((_DWORD *)this + 4);
  if ( (v2 & 0x2000) != 0 )
    *((_DWORD *)this + 4) = v2 | 0x4000;
  DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this);
  return 1;
}

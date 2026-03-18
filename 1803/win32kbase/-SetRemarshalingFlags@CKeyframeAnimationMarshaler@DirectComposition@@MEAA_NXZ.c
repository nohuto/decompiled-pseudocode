/*
 * XREFs of ?SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014AF30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014B0B0 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CKeyframeAnimationMarshaler *this)
{
  float v2; // xmm0_4
  unsigned int v3; // eax
  char v4; // bl

  v2 = *((float *)this + 76);
  v3 = *((_DWORD *)this + 4) & 0xFFFF07FF;
  *((_DWORD *)this + 4) = v3;
  if ( v2 != 1.0 )
  {
    v3 &= ~0x10000u;
    *((_DWORD *)this + 4) = v3;
  }
  v4 = 0;
  if ( *((_DWORD *)this + 52) )
    *((_DWORD *)this + 4) = v3 & 0xFFFDFFFF;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 53) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_QWORD *)this + 15) && *((_QWORD *)this + 17)
    || *((_DWORD *)this + 48)
    || *((_DWORD *)this + 52) )
  {
    return 1;
  }
  return v4;
}

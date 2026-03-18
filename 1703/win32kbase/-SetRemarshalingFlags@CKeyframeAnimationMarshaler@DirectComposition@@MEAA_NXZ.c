/*
 * XREFs of ?SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01439F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0143A50 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CKeyframeAnimationMarshaler *this)
{
  char v1; // bl

  *((_DWORD *)this + 4) &= 0xFFFFE3FF;
  v1 = 0;
  *((_DWORD *)this + 45) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_QWORD *)this + 13) && *((_QWORD *)this + 15)
    || *((_DWORD *)this + 44) )
  {
    return 1;
  }
  return v1;
}

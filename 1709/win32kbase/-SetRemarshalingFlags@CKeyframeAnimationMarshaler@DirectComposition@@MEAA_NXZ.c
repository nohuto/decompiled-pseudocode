/*
 * XREFs of ?SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0143350
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01434A0 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CKeyframeAnimationMarshaler *this)
{
  char v1; // bl

  *((_DWORD *)this + 4) &= 0xFFFFC7FF;
  v1 = 0;
  *((_DWORD *)this + 49) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_QWORD *)this + 15) && *((_QWORD *)this + 17)
    || *((_DWORD *)this + 48) )
  {
    return 1;
  }
  return v1;
}

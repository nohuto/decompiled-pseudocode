/*
 * XREFs of ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0143A50
 * Callers:
 *     ?SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01439F0 (-SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0148F50 (-SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014A720 (-SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0143810 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CBaseExpressionMarshaler *this)
{
  char v2; // al
  char v3; // dl

  *((_DWORD *)this + 4) &= 0xFFFFFD3F;
  v2 = DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*((_BYTE *)this + 84) & 1) != 0 )
    return 1;
  return v3;
}

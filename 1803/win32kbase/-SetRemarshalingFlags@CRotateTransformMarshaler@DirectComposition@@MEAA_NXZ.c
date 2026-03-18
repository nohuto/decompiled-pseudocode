/*
 * XREFs of ?SetRemarshalingFlags@CRotateTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0158330
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149E90 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRotateTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CRotateTransformMarshaler *this)
{
  char v2; // al
  char v3; // cl
  float v4; // xmm0_4
  float v5; // xmm2_4

  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 )
    return 1;
  if ( *((float *)this + 14) != 0.0 )
    return 1;
  v4 = *((float *)this + 15);
  if ( v4 != 0.0 )
    return 1;
  v5 = *((float *)this + 16);
  if ( v5 != 0.0 || v4 != 0.0 || v5 != 0.0 )
    return 1;
  return v3;
}

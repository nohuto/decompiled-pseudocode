/*
 * XREFs of ?SetRemarshalingFlags@CMatrixTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0157D80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149E90 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CMatrixTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CMatrixTransformMarshaler *this)
{
  char v2; // al
  char v3; // cl

  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2
    || *((float *)this + 14) != 1.0
    || *((float *)this + 15) != 0.0
    || *((float *)this + 16) != 0.0
    || *((float *)this + 17) != 1.0
    || *((float *)this + 18) != 0.0
    || *((float *)this + 19) != 0.0 )
  {
    return 1;
  }
  return v3;
}

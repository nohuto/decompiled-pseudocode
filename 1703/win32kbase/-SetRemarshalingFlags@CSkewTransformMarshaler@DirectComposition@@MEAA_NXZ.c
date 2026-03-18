/*
 * XREFs of ?SetRemarshalingFlags@CSkewTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014B7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CSkewTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CSkewTransformMarshaler *this)
{
  return *((float *)this + 14) != 0.0
      || *((float *)this + 15) != 0.0
      || *((float *)this + 16) != 0.0
      || *((float *)this + 17) != 0.0;
}

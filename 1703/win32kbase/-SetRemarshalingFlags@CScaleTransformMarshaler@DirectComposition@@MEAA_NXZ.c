/*
 * XREFs of ?SetRemarshalingFlags@CScaleTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014B3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CScaleTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CScaleTransformMarshaler *this)
{
  return *((float *)this + 14) != 1.0
      || *((float *)this + 15) != 1.0
      || *((float *)this + 16) != 0.0
      || *((float *)this + 17) != 0.0;
}

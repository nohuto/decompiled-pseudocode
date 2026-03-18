/*
 * XREFs of ?SetRemarshalingFlags@CRotateTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014B340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CRotateTransform3DMarshaler::SetRemarshalingFlags(
        DirectComposition::CRotateTransform3DMarshaler *this)
{
  return *((float *)this + 14) != 0.0
      || *((float *)this + 15) != 0.0
      || *((float *)this + 16) != 0.0
      || *((float *)this + 17) != 1.0
      || *((float *)this + 18) != 0.0
      || *((float *)this + 19) != 0.0
      || *((float *)this + 20) != 0.0;
}

/*
 * XREFs of ?SetRemarshalingFlags@CSkewTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014C4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CSkewTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CSkewTransformMarshaler *this)
{
  return *((float *)this + 14) != 0.0
      || *((float *)this + 15) != 0.0
      || *((float *)this + 16) != 0.0
      || *((float *)this + 17) != 0.0;
}

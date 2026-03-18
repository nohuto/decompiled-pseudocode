/*
 * XREFs of ?SetRemarshalingFlags@CLinearGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C009CC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CLinearGradientBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CLinearGradientBrushMarshaler *this)
{
  bool result; // al

  *((_DWORD *)this + 4) |= 0x7E0u;
  result = 1;
  *((_DWORD *)this + 17) = 0;
  return result;
}

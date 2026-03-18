/*
 * XREFs of ?SetRemarshalingFlags@CLinearGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0154340
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01527B8 (-SetRemarshalingFlags@CGradientBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CLinearGradientBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CLinearGradientBrushMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0xC00u;
  DirectComposition::CGradientBrushMarshaler::SetRemarshalingFlags(this);
  return 1;
}

/*
 * XREFs of ?SetRemarshalingFlags@CLinearGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01488B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CLinearGradientBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CLinearGradientBrushMarshaler *this)
{
  if ( *((_QWORD *)this + 5) )
    *((_DWORD *)this + 4) |= 0x20u;
  *((_DWORD *)this + 4) |= 0x1C0u;
  return 1;
}

/*
 * XREFs of ?SetRemarshalingFlags@CSpatialVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C015B410
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149B90 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSpatialVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CSpatialVisualMarshaler *this)
{
  char result; // al

  result = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( *((_DWORD *)this + 70) )
  {
    *((_DWORD *)this + 4) |= 0x20000000u;
    return 1;
  }
  return result;
}

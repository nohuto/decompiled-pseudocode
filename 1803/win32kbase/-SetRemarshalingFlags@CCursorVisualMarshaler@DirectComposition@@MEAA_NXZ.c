/*
 * XREFs of ?SetRemarshalingFlags@CCursorVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014C1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149B90 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CCursorVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CCursorVisualMarshaler *this)
{
  if ( *((_DWORD *)this + 70) )
    *((_DWORD *)this + 4) |= 0x20000000u;
  if ( *((_DWORD *)this + 71) )
    *((_DWORD *)this + 4) |= 0x40000000u;
  if ( *((_BYTE *)this + 288) )
    *((_DWORD *)this + 4) |= 0x80000000;
  DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  return 1;
}

/*
 * XREFs of ?SetRemarshalingFlags@CLayerVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0153B30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149B90 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CLayerVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CLayerVisualMarshaler *this)
{
  char v1; // di
  char v3; // al

  v1 = 0;
  if ( *((_QWORD *)this + 35) )
    *((_DWORD *)this + 4) |= 0x20000000u;
  if ( *((_QWORD *)this + 36) )
    *((_DWORD *)this + 4) |= 0x40000000u;
  if ( *((_BYTE *)this + 296) )
    *((_DWORD *)this + 4) |= 0x80000000;
  v3 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  if ( (*((_DWORD *)this + 4) & 0xE0000000) != 0 || v3 )
    return 1;
  return v1;
}

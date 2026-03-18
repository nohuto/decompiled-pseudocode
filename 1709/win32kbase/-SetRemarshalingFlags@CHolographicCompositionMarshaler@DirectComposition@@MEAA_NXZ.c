/*
 * XREFs of ?SetRemarshalingFlags@CHolographicCompositionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014CAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CHolographicCompositionMarshaler::SetRemarshalingFlags(
        DirectComposition::CHolographicCompositionMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_BYTE *)this + 44) )
    *((_DWORD *)this + 4) |= 0x40u;
  return 1;
}

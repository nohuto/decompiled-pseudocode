/*
 * XREFs of ?SetRemarshalingFlags@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014DAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CVisualSurfaceMarshaler::SetRemarshalingFlags(
        DirectComposition::CVisualSurfaceMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_BYTE *)this + 80) )
    *((_DWORD *)this + 4) |= 0x40u;
  *((_DWORD *)this + 4) |= 0x780u;
  return 1;
}

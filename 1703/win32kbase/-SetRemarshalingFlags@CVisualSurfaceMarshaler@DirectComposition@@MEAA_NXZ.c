/*
 * XREFs of ?SetRemarshalingFlags@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0095B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CVisualSurfaceMarshaler::SetRemarshalingFlags(
        DirectComposition::CVisualSurfaceMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x7E0u;
  return 1;
}

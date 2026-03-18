/*
 * XREFs of ?SetRemarshalingFlags@CLineGeometryMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01590E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0152AC0 (-SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CLineGeometryMarshaler::SetRemarshalingFlags(
        DirectComposition::CLineGeometryMarshaler *this)
{
  DirectComposition::CBaseClipMarshaler::SetRemarshalingFlags(this);
  *((_DWORD *)this + 4) |= 0x1800u;
  return 1;
}

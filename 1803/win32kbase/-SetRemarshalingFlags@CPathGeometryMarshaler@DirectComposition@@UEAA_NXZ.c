/*
 * XREFs of ?SetRemarshalingFlags@CPathGeometryMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0155520
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0152AC0 (-SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CPathGeometryMarshaler::SetRemarshalingFlags(
        DirectComposition::CPathGeometryMarshaler *this)
{
  char result; // al

  result = DirectComposition::CBaseClipMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 10) )
  {
    *((_DWORD *)this + 4) |= 0x800u;
    return 1;
  }
  return result;
}

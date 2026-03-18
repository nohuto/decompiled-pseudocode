/*
 * XREFs of ?SetRemarshalingFlags@CBaseClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0148770
 * Callers:
 *     ?SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014C6F0 (-SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CBaseClipMarshaler::SetRemarshalingFlags(
        DirectComposition::CBaseClipMarshaler *this)
{
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x80u;
  return (*((_DWORD *)this + 4) & 0x80) != 0;
}

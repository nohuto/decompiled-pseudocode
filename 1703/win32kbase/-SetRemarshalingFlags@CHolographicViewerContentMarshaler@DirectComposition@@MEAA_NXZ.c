/*
 * XREFs of ?SetRemarshalingFlags@CHolographicViewerContentMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014C3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicViewerContentMarshaler::SetRemarshalingFlags(
        DirectComposition::CHolographicViewerContentMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_DWORD *)this + 10) || *((_DWORD *)this + 11) )
    *((_DWORD *)this + 4) |= 0x40u;
  return (*((unsigned __int8 *)this + 16) >> 6) & 1;
}

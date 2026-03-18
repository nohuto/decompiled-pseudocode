/*
 * XREFs of ?SetRemarshalingFlags@CHolographicInteropTextureMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0144A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CHolographicInteropTextureMarshaler::SetRemarshalingFlags(
        DirectComposition::CHolographicInteropTextureMarshaler *this)
{
  char v1; // dl

  *((_DWORD *)this + 4) |= 0x20u;
  v1 = 0;
  if ( *((_DWORD *)this + 13) || *((_DWORD *)this + 14) || *((_DWORD *)this + 11) || *((_DWORD *)this + 12) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_DWORD *)this + 15) || (*((_DWORD *)this + 4) & 0xC0) != 0 )
    return 1;
  return v1;
}

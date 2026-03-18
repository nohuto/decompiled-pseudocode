/*
 * XREFs of ?SetRemarshalingFlags@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014A3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCompositionDistantLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionDistantLightMarshaler *this)
{
  if ( *((float *)this + 18) != 1.0 || *((float *)this + 19) != 1.0 || *((float *)this + 20) != 1.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 11) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((float *)this + 24) != 0.0 || *((float *)this + 25) != 0.0 || *((float *)this + 26) != -1.0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 27) != 1.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  *((_DWORD *)this + 4) |= 0x60u;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 17) = 0;
  return 1;
}

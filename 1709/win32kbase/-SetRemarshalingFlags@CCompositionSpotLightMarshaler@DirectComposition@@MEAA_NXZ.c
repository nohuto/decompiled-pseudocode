/*
 * XREFs of ?SetRemarshalingFlags@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014B030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCompositionSpotLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionSpotLightMarshaler *this)
{
  if ( *((float *)this + 18) != 1.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 19) != 0.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((float *)this + 20) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_QWORD *)this + 11) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((float *)this + 27) != 0.0 || *((float *)this + 28) != 0.0 || *((float *)this + 29) != -1.0 )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((float *)this + 24) != 0.0 || *((float *)this + 25) != 0.0 || *((float *)this + 26) != 100.0 )
    *((_DWORD *)this + 4) |= 0x8000u;
  if ( *((float *)this + 30) != 0.52359879 )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( *((float *)this + 31) != 1.5707964 )
    *((_DWORD *)this + 4) |= 0x10000u;
  if ( *((float *)this + 32) != 1.0 || *((float *)this + 33) != 1.0 || *((float *)this + 34) != 1.0 )
    *((_DWORD *)this + 4) |= 0x2000u;
  if ( *((float *)this + 36) != 1.0 || *((float *)this + 37) != 1.0 || *((float *)this + 38) != 1.0 )
    *((_DWORD *)this + 4) |= 0x20000u;
  if ( *((float *)this + 40) != 1.0 )
    *((_DWORD *)this + 4) |= 0x4000u;
  if ( *((float *)this + 41) != 1.0 )
    *((_DWORD *)this + 4) |= 0x40000u;
  *((_DWORD *)this + 4) |= 0x60u;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 17) = 0;
  return 1;
}

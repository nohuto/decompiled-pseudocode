/*
 * XREFs of ?SetRemarshalingFlags@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014AB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCompositionPointLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionPointLightMarshaler *this)
{
  if ( *((float *)this + 18) != 1.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 19) != 0.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((float *)this + 20) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((float *)this + 21) != 1.0 || *((float *)this + 22) != 1.0 || *((float *)this + 23) != 1.0 )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_QWORD *)this + 13) )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((float *)this + 28) != 0.0 || *((float *)this + 29) != 0.0 || *((float *)this + 30) != 100.0 )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( *((float *)this + 31) != 1.0 )
    *((_DWORD *)this + 4) |= 0x2000u;
  *((_DWORD *)this + 4) |= 0x60u;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 17) = 0;
  return 1;
}

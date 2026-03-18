/*
 * XREFs of ?SetRemarshalingFlags@CCompositionPointLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCompositionPointLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionPointLightMarshaler *this)
{
  bool result; // al

  if ( *((float *)this + 14) != 1.0 )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((float *)this + 15) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 16) != 0.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((float *)this + 17) != 1.0 || *((float *)this + 18) != 1.0 || *((float *)this + 19) != 1.0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_QWORD *)this + 11) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((float *)this + 24) != 0.0 || *((float *)this + 25) != 0.0 || *((float *)this + 26) != 100.0 )
    *((_DWORD *)this + 4) |= 0x800u;
  *((_DWORD *)this + 13) = 0;
  result = 1;
  *((_DWORD *)this + 4) |= 0x20u;
  return result;
}

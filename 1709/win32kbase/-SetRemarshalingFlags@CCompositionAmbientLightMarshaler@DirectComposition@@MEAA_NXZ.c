/*
 * XREFs of ?SetRemarshalingFlags@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCompositionAmbientLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionAmbientLightMarshaler *this)
{
  bool result; // al

  if ( *((float *)this + 18) != 1.0 || *((float *)this + 19) != 1.0 || *((float *)this + 20) != 1.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 22) != 1.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  *((_DWORD *)this + 13) = 0;
  result = 1;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 4) |= 0x60u;
  return result;
}

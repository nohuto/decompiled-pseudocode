/*
 * XREFs of ?SetRemarshalingFlags@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01490D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCompositionAmbientLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionAmbientLightMarshaler *this)
{
  bool result; // al

  if ( *((float *)this + 14) != 1.0 || *((float *)this + 15) != 1.0 || *((float *)this + 16) != 1.0 )
    *((_DWORD *)this + 4) |= 0x40u;
  *((_DWORD *)this + 13) = 0;
  result = 1;
  *((_DWORD *)this + 4) |= 0x20u;
  return result;
}

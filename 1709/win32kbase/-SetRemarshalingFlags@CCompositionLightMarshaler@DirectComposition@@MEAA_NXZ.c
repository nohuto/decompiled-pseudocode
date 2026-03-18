/*
 * XREFs of ?SetRemarshalingFlags@CCompositionLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C009CAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCompositionLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionLightMarshaler *this)
{
  bool result; // al

  *((_DWORD *)this + 13) = 0;
  result = 1;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 4) |= 0x60u;
  return result;
}

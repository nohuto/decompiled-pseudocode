/*
 * XREFs of ?SetRemarshalingFlags@CCompositionDistantLightMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCompositionDistantLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionDistantLightMarshaler *this)
{
  bool result; // al

  if ( *((float *)this + 14) != 1.0 || *((float *)this + 15) != 1.0 || *((float *)this + 16) != 1.0 )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 20) != 0.0 || *((float *)this + 21) != 0.0 || *((float *)this + 22) != -1.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  *((_DWORD *)this + 13) = 0;
  result = 1;
  *((_DWORD *)this + 4) |= 0x20u;
  return result;
}

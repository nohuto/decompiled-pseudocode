/*
 * XREFs of ?SetRemarshalingFlags@CGenericInkMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0095B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CGenericInkMarshaler::SetRemarshalingFlags(
        DirectComposition::CGenericInkMarshaler *this)
{
  bool result; // al

  *((_DWORD *)this + 4) &= 0xFFFFFF9F;
  result = 1;
  *((_DWORD *)this + 38) = 0;
  return result;
}

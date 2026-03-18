/*
 * XREFs of ?SetRemarshalingFlags@CPencilMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0095BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CPencilMarshaler::SetRemarshalingFlags(DirectComposition::CPencilMarshaler *this)
{
  bool result; // al

  *((_DWORD *)this + 4) &= 0xFFFFFF1F;
  result = 1;
  *((_DWORD *)this + 48) = 0;
  return result;
}

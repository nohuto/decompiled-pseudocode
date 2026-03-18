/*
 * XREFs of ?SetRemarshalingFlags@CManipulationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C009CA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CManipulationMarshaler::SetRemarshalingFlags(
        DirectComposition::CManipulationMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x1C0u;
  return 1;
}

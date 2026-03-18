/*
 * XREFs of ?IsManipulationCaptured@CManipulation@@UEAA_NXZ @ 0x180170690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CManipulation::IsManipulationCaptured(CManipulation *this)
{
  return *((_DWORD *)this + 89) != 0;
}

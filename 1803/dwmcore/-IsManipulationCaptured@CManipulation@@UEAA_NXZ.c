/*
 * XREFs of ?IsManipulationCaptured@CManipulation@@UEAA_NXZ @ 0x180199390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CManipulation::IsManipulationCaptured(CManipulation *this)
{
  return *((_DWORD *)this + 95) != 0;
}

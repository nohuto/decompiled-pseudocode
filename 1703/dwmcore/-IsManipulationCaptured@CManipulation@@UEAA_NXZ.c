/*
 * XREFs of ?IsManipulationCaptured@CManipulation@@UEAA_NXZ @ 0x180167EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CManipulation::IsManipulationCaptured(CManipulation *this)
{
  return *((_DWORD *)this + 103) != 0;
}

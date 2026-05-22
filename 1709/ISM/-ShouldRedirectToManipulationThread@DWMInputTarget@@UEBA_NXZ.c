/*
 * XREFs of ?ShouldRedirectToManipulationThread@DWMInputTarget@@UEBA_NXZ @ 0x1800220C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DWMInputTarget::ShouldRedirectToManipulationThread(DWMInputTarget *this)
{
  return *((_DWORD *)this + 20) != 0;
}

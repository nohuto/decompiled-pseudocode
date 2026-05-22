/*
 * XREFs of ?ShouldRedirectToManipulationThread@CShellEdgyInputTarget@@UEBA_NXZ @ 0x18002C8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CShellEdgyInputTarget::ShouldRedirectToManipulationThread(CShellEdgyInputTarget *this)
{
  return *((_DWORD *)this + 6) != 0;
}

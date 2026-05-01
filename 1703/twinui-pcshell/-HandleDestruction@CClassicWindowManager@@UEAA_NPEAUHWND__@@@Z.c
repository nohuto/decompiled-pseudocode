/*
 * XREFs of ?HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180035640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindowManager::HandleDestruction(CClassicWindowManager *this, HWND a2)
{
  return CClassicWindowManager::_HandleDestructionOrHide((CClassicWindowManager *)((char *)this - 56), a2, 1);
}

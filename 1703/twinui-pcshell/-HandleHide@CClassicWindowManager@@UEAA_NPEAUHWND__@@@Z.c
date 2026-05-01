/*
 * XREFs of ?HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180035650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindowManager::HandleHide(CClassicWindowManager *this, HWND a2)
{
  return CClassicWindowManager::_HandleDestructionOrHide((CClassicWindowManager *)((char *)this - 56), a2, 0);
}

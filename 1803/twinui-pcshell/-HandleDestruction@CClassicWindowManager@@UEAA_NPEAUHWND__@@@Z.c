/*
 * XREFs of ?HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180005BD0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindowManager::HandleDestruction(CClassicWindowManager *this, HWND a2)
{
  return CClassicWindowManager::_HandleDestructionOrHide((char *)this - 72, a2, 1LL);
}

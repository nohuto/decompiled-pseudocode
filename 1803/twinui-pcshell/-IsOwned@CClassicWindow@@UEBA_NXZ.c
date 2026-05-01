/*
 * XREFs of ?IsOwned@CClassicWindow@@UEBA_NXZ @ 0x180007E40
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___ @ 0x180005CD8 (CClassicWindowManager--ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___.c)
 *     CClassicWindowManager::ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___ @ 0x180005DE4 (CClassicWindowManager--ForEachWindow__lambda_8f91229ca0b975f4700222af4a25ef43___.c)
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180005F80 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::IsOwned(CClassicWindow *this)
{
  return (*((_DWORD *)this + 18) & 4) != 0;
}

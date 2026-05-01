/*
 * XREFs of ?IsUnownedNonTrayWindow@CClassicWindow@@UEBA_NXZ @ 0x180007E50
 * Callers:
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180005F80 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x1800061F8 (-_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicW.c)
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::IsUnownedNonTrayWindow(CClassicWindow *this)
{
  return *((_DWORD *)this + 18) == 0;
}

/*
 * XREFs of ?IsTrayWindow@CClassicWindow@@UEBA_NXZ @ 0x180007E60
 * Callers:
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180006EB4 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindow::IsTrayWindow(CClassicWindow *this)
{
  return *((_DWORD *)this + 18) & 1;
}

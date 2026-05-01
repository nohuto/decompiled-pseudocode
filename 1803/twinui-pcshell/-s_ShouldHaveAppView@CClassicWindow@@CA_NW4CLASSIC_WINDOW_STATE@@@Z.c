/*
 * XREFs of ?s_ShouldHaveAppView@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x18000ACC0
 * Callers:
 *     ?ShouldHaveAppView@CClassicWindow@@UEBA_NXZ @ 0x180007E90 (-ShouldHaveAppView@CClassicWindow@@UEBA_NXZ.c)
 *     ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x180007EA0 (-ChangeWindowType@CClassicWindow@@UEAA-AW4WindowChangeFlags@@W42@@Z.c)
 * Callees:
 *     ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x18000ACE0 (-s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 */

char __fastcall CClassicWindow::s_ShouldHaveAppView(__int64 a1)
{
  char ShouldShowInSwitchers; // al
  char v2; // cl
  char v3; // dl

  ShouldShowInSwitchers = CClassicWindow::s_ShouldShowInSwitchers(a1);
  v3 = 0;
  if ( ShouldShowInSwitchers || (v2 & 5) != 0 )
    return 1;
  return v3;
}

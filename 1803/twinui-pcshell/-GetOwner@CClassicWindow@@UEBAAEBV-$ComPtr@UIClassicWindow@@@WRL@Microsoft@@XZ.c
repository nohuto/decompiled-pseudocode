/*
 * XREFs of ?GetOwner@CClassicWindow@@UEBAAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@XZ @ 0x180007F80
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___ @ 0x180005BE0 (CClassicWindowManager--ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___.c)
 *     CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___ @ 0x180005CD8 (CClassicWindowManager--ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180006D44 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x180007BF4 (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindow::GetOwner(__int64 a1)
{
  return a1 + 64;
}

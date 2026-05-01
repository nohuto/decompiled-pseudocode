/*
 * XREFs of ?ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ @ 0x180007E70
 * Callers:
 *     ?ShouldShowInSwitchers@CClassicWindowExternal@@UEAAHXZ @ 0x1800057A0 (-ShouldShowInSwitchers@CClassicWindowExternal@@UEAAHXZ.c)
 *     CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___ @ 0x180005E98 (CClassicWindowManager--ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___.c)
 *     ?GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z @ 0x1800068C0 (-GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180006D44 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::ShouldShowInSwitchers(CClassicWindow *this)
{
  return (*((_BYTE *)this + 72) & 3) != 0 && (*((_BYTE *)this + 72) & 8) == 0;
}

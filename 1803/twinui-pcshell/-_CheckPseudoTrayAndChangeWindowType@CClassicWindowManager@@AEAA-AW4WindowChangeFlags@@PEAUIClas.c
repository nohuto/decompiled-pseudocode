/*
 * XREFs of ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x18011AE40
 * Callers:
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180006C30 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1800079C0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     CClassicWindowManager::ForEachWindow__lambda_bcfdc10875d1c6a0a37f2a81b156c163___ @ 0x1801190C4 (CClassicWindowManager--ForEachWindow__lambda_bcfdc10875d1c6a0a37f2a81b156c163___.c)
 *     ?RefreshCollection@CClassicWindowManager@@UEAAJXZ @ 0x18011A790 (-RefreshCollection@CClassicWindowManager@@UEAAJXZ.c)
 * Callees:
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180006EB4 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 */

__int64 __fastcall CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(
        CClassicWindowManager *a1,
        CClassicWindow *a2,
        int a3)
{
  char v6; // al

  v6 = CClassicWindowManager::IsWindowPseudoTrayAfterChange((__int64)a1, a2, a3);
  return CClassicWindowManager::_ChangeWindowType(a1, a2, a3 | (v6 != 0 ? 32 : 64));
}

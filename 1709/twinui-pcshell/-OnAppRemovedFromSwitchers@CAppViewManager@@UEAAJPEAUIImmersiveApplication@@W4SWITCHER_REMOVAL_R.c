/*
 * XREFs of ?OnAppRemovedFromSwitchers@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_REASON@@@Z @ 0x18003F850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppViewManager::OnAppRemovedFromSwitchers(__int64 a1, __int64 a2, unsigned int a3)
{
  return CAppViewManager::_TransferAllWindowsToNextGlom(a1 - 72, a2, 0LL, a3);
}

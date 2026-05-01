/*
 * XREFs of ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180112794
 * Callers:
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180006EB4 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x1801125B4 (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 *     ShouldWindowBeConsideredForRecovery @ 0x180113220 (ShouldWindowBeConsideredForRecovery.c)
 * Callees:
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180112698 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CApplicationManagerUtility::IsTrayWindowStyleCheck(CApplicationManagerUtility *hWnd, HWND a2)
{
  char v3; // bl

  v3 = 0;
  if ( CApplicationManagerUtility::IsForcedAppWindow(hWnd, a2) || (GetWindowLongPtrW((HWND)hWnd, -20) & 0x8000080) == 0 )
    return 1;
  return v3;
}

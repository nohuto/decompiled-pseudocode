/*
 * XREFs of ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A584
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18001129C (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?GetRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@_N@Z @ 0x18002A5CC (-GetRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@_N@Z.c)
 *     RecoverWindowsProc @ 0x18002B220 (RecoverWindowsProc.c)
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x1800358B4 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 * Callees:
 *     <none>
 */

char __fastcall CApplicationManagerUtility::IsTrayWindowStyleCheck(HWND hWnd, HWND a2)
{
  char v3; // bl

  v3 = 1;
  if ( (GetWindowLongPtrW(hWnd, -20) & 0x40000) == 0 )
    return (GetWindowLongPtrW(hWnd, -20) & 0x8000080) == 0;
  return v3;
}

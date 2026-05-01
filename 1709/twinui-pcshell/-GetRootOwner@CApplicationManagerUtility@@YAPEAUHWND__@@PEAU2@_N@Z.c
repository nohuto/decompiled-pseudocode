/*
 * XREFs of ?GetRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@_N@Z @ 0x18002BEC4
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800119C0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180058B04 (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 * Callees:
 *     ?IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BD98 (-IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BE7C (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CApplicationManagerUtility::GetRootOwner(HWND hWnd, HWND a2)
{
  HWND v3; // rdi
  HWND Window; // rbx
  HWND v5; // rdx

  IsWindowVisible(hWnd);
  v3 = 0LL;
  Window = GetWindow(hWnd, 4u);
  if ( Window )
  {
    do
    {
      if ( IsWindowVisible(Window) )
        v3 = Window;
      Window = GetWindow(Window, 4u);
    }
    while ( Window );
    if ( v3 )
    {
      if ( (GetWindowLongPtrW(v3, -20) & 0x40000) == 0
        && (!CApplicationManagerUtility::IsTrayWindowStyleCheck(v3, v5) || GetWindow(v3, 4u)) )
      {
        v3 = 0LL;
      }
      if ( v3 && CApplicationManagerUtility::IsGhostWindow(v3, v5) )
        return HungWindowFromGhostWindow(v3);
    }
  }
  return (__int64)v3;
}

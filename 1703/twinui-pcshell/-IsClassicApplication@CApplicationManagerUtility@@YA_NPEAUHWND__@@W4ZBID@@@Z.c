/*
 * XREFs of ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x18002A448
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18001129C (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     RecoverWindowsProc @ 0x18002B220 (RecoverWindowsProc.c)
 * Callees:
 *     <none>
 */

char __fastcall CApplicationManagerUtility::IsClassicApplication(HWND a1, int a2)
{
  char v4; // bl

  if ( (unsigned int)(a2 - 1) > 1 && a2 != 16 )
    return 0;
  v4 = 0;
  if ( !(unsigned int)IsShellManagedWindow(a1) || GetPropW(a1, L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
    return 1;
  return v4;
}

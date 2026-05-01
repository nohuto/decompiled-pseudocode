/*
 * XREFs of ?GetNativeWindow@CImmersiveApplicationWindow@@UEAAJPEAPEAUHWND__@@@Z @ 0x180008D60
 * Callers:
 *     _lambda_6aced788dff8c658a873d98bde52dc09_::operator() @ 0x1800085E4 (_lambda_6aced788dff8c658a873d98bde52dc09_--operator().c)
 *     ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x180008800 (-ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180009F28 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?SwitchTo@CWinRTApplicationView@@UEAAJXZ @ 0x18001C890 (-SwitchTo@CWinRTApplicationView@@UEAAJXZ.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAJW4AppViewExecutionState@23456@PEAUIApplicationView@@PEAPEAUIAppViewExecutionData@23456@@Z @ 0x18001F6E0 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationWindow::GetNativeWindow(CImmersiveApplicationWindow *this, HWND *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi

  v3 = 0;
  *a2 = 0LL;
  v5 = *((_QWORD *)this + 2);
  SetLastError(0);
  if ( !(unsigned int)IsWindowInDestroy(v5) && GetLastError() != 1400 )
    *a2 = (HWND)*((_QWORD *)this + 2);
  else
    return (unsigned int)-2147023496;
  return v3;
}

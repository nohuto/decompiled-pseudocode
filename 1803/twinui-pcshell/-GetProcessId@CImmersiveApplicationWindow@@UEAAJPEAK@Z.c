/*
 * XREFs of ?GetProcessId@CImmersiveApplicationWindow@@UEAAJPEAK@Z @ 0x180008D20
 * Callers:
 *     ?GetProcessIdForAppViewId@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEAI@Z @ 0x18001F390 (-GetProcessIdForAppViewId@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEA.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAJW4AppViewExecutionState@23456@PEAUIApplicationView@@PEAPEAUIAppViewExecutionData@23456@@Z @ 0x18001F6E0 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationWindow::GetProcessId(HWND *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  signed int LastError; // eax

  v2 = 0;
  if ( !GetWindowThreadProcessId(this[2], a2) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      return (unsigned int)-2147467259;
    return (unsigned int)LastError;
  }
  return v2;
}

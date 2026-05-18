/*
 * XREFs of ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800024B0
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x1800027F4 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     DwmpTerminateSessionProcess @ 0x1800033A0 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     ?SignalDwmExited@@YA_NXZ @ 0x18000169C (-SignalDwmExited@@YA_NXZ.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003CF4 (-DoStackCapture@@YAXJI@Z.c)
 *     DwmpResetPortConnection @ 0x180004474 (DwmpResetPortConnection.c)
 */

__int64 __fastcall WaitForDwmExit(LPDWORD lpExitCode, LPFILETIME lpExitTime)
{
  signed int v4; // ebx
  signed int v5; // eax
  signed int v6; // eax
  unsigned int v7; // edx
  signed int LastError; // eax
  _FILETIME CreationTime; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  DwmpResetPortConnection();
  if ( !WaitForSingleObject(ghDwmProcess, 0x12Cu)
    || TerminateProcess(ghDwmProcess, 0x42Bu)
    || (v5 = GetLastError(), v5 == 5) )
  {
    if ( WaitForSingleObject(ghDwmProcess, 0xFFFFFFFF) )
    {
      v4 = -2147467259;
      v7 = 976;
    }
    else
    {
      SetLastError(0);
      if ( GetExitCodeProcess(ghDwmProcess, lpExitCode) )
      {
        if ( !lpExitTime
          || (SetLastError(0), GetProcessTimes(ghDwmProcess, &CreationTime, lpExitTime, &CreationTime, &CreationTime)) )
        {
          SignalDwmExited();
          goto LABEL_24;
        }
        LastError = GetLastError();
        v7 = 971;
        v4 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v4 = LastError;
        if ( v4 >= 0 )
          v4 = -2003304445;
      }
      else
      {
        v6 = GetLastError();
        v7 = 961;
        v4 = (unsigned __int16)v6 | 0x80070000;
        if ( v6 <= 0 )
          v4 = v6;
        if ( v4 >= 0 )
          v4 = -2003304445;
      }
    }
    DoStackCapture(v4, v7);
  }
  else
  {
    v4 = (unsigned __int16)v5 | 0x80070000;
    if ( v5 <= 0 )
      v4 = v5;
  }
LABEL_24:
  if ( ghDwmProcess )
  {
    CloseHandle(ghDwmProcess);
    ghDwmProcess = 0LL;
  }
  return (unsigned int)v4;
}

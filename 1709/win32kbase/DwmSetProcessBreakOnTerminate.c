/*
 * XREFs of DwmSetProcessBreakOnTerminate @ 0x1C00FE000
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007AADC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     GreLockDwmState @ 0x1C003CA30 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C003CA70 (GreUnlockDwmState.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C007ACF4 (-IsMobileCore@@YAEXZ.c)
 */

__int64 __fastcall DwmSetProcessBreakOnTerminate(__int64 a1, __int64 a2)
{
  int v2; // esi
  NTSTATUS v3; // edi
  int v4; // ebx
  int ProcessInformation; // [rsp+58h] [rbp+10h] BYREF
  HANDLE ProcessHandle; // [rsp+60h] [rbp+18h] BYREF

  v2 = a1;
  v3 = -1073741823;
  v4 = 0;
  if ( IsMobileCore(a1, a2) )
  {
    GreLockDwmState();
    if ( g_pepDwm )
    {
      ProcessHandle = (HANDLE)-1LL;
      v3 = ObOpenObjectByPointer(g_pepDwm, 0x200u, 0LL, 0x200u, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle);
      if ( v3 >= 0 )
      {
        LOBYTE(v4) = v2 != 0;
        ProcessInformation = v4;
        v3 = ZwSetInformationProcess(ProcessHandle, ProcessBreakOnTermination, &ProcessInformation, 4u);
        ObCloseHandle(ProcessHandle, 0);
      }
    }
    GreUnlockDwmState();
  }
  return (unsigned int)v3;
}

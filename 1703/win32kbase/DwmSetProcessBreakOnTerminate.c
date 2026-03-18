/*
 * XREFs of DwmSetProcessBreakOnTerminate @ 0x1C00FDCE0
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00663B4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     GreLockDwmState @ 0x1C0027890 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00278D0 (GreUnlockDwmState.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C00666D8 (-IsMobileCore@@YAEXZ.c)
 */

__int64 __fastcall DwmSetProcessBreakOnTerminate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  NTSTATUS v5; // edi
  int v6; // ebx
  int ProcessInformation; // [rsp+58h] [rbp+10h] BYREF
  HANDLE ProcessHandle; // [rsp+60h] [rbp+18h] BYREF

  v4 = a1;
  v5 = -1073741823;
  v6 = 0;
  if ( IsMobileCore(a1, a2, a3, a4) )
  {
    GreLockDwmState();
    if ( g_pepDwm )
    {
      ProcessHandle = (HANDLE)-1LL;
      v5 = ObOpenObjectByPointer(g_pepDwm, 0x200u, 0LL, 0x200u, (POBJECT_TYPE)PsProcessType, 0, &ProcessHandle);
      if ( v5 >= 0 )
      {
        LOBYTE(v6) = v4 != 0;
        ProcessInformation = v6;
        v5 = ZwSetInformationProcess(ProcessHandle, ProcessBreakOnTermination, &ProcessInformation, 4u);
        ObCloseHandle(ProcessHandle, 0);
      }
    }
    GreUnlockDwmState();
  }
  return (unsigned int)v5;
}

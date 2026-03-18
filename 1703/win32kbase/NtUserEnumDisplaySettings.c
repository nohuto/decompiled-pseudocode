/*
 * XREFs of NtUserEnumDisplaySettings @ 0x1C0061A90
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C002ECD4 (EtwTraceReleaseUserCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     DrvEnumDisplaySettings @ 0x1C0061B40 (DrvEnumDisplaySettings.c)
 *     UserSessionSwitchEnterCrit @ 0x1C007E4D0 (UserSessionSwitchEnterCrit.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8

  UserSessionSwitchEnterCrit();
  if ( gbVideoInitialized )
    v8 = DrvEnumDisplaySettings(a1, *(_QWORD *)(*((_QWORD *)gpDispInfo + 11) + 120LL), a2, a3, a4);
  else
    v8 = -1073741823;
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && !gbRITBlockedOnDIT )
  {
    v11 = (unsigned int)gcRITBlockedOnDITWaiters;
    if ( gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore(gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v10, v9, v11);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v8;
}

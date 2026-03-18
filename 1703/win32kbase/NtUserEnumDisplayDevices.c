/*
 * XREFs of NtUserEnumDisplayDevices @ 0x1C0043630
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C002ECD4 (EtwTraceReleaseUserCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     DrvEnumDisplayDevices @ 0x1C0041380 (DrvEnumDisplayDevices.c)
 *     UpdateGraphicsDeviceList @ 0x1C00436FC (UpdateGraphicsDeviceList.c)
 *     UserSessionSwitchEnterCrit @ 0x1C007E4D0 (UserSessionSwitchEnterCrit.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD v16[6]; // [rsp+30h] [rbp-18h] BYREF

  UserSessionSwitchEnterCrit();
  if ( gbVideoInitialized )
  {
    UpdateGraphicsDeviceList(v16);
    if ( v16[0] )
    {
      if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit
        && !gbRITBlockedOnDIT )
      {
        v15 = (unsigned int)gcRITBlockedOnDITWaiters;
        if ( gcRITBlockedOnDITWaiters )
        {
          KeReleaseSemaphore(gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
          gcRITBlockedOnDITWaiters = 0;
        }
      }
      gptiCurrent = 0LL;
      gbValidateHandleForIL = 0;
      EtwTraceReleaseUserCrit(v14, v13, v15);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      UserSessionSwitchEnterCrit();
    }
    v8 = DrvEnumDisplayDevices(a1, *(_QWORD *)(*((_QWORD *)gpDispInfo + 11) + 120LL), a2, a3, a4, 1u);
  }
  else
  {
    v8 = -1073741823;
  }
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

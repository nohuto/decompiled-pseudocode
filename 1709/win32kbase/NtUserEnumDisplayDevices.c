/*
 * XREFs of NtUserEnumDisplayDevices @ 0x1C003C480
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x1C003BA60 (UserSessionSwitchEnterCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C003C194 (EtwTraceReleaseUserCrit.c)
 *     DrvEnumDisplayDevices @ 0x1C003EEB0 (DrvEnumDisplayDevices.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     UpdateGraphicsDeviceList @ 0x1C0058504 (UpdateGraphicsDeviceList.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _DWORD v28[6]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  UserSessionSwitchEnterCrit(a1, a2, a3, a4);
  if ( gbVideoInitialized )
  {
    UpdateGraphicsDeviceList(v28);
    if ( v28[0] )
    {
      if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread(), v11, v12, v13) == gptiRit
        && !gbRITBlockedOnDIT )
      {
        v22 = (unsigned int)gcRITBlockedOnDITWaiters;
        if ( gcRITBlockedOnDITWaiters )
        {
          KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
          gcRITBlockedOnDITWaiters = 0;
        }
      }
      gptiCurrent = 0LL;
      gbValidateHandleForIL = 0;
      EtwTraceReleaseUserCrit(v21, v20, v22, v23);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      UserSessionSwitchEnterCrit(v25, v24, v26, v27);
    }
    v14 = DrvEnumDisplayDevices(v7, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 232LL), v6, v5, v4, 1);
  }
  else
  {
    v14 = -1073741823;
  }
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread(), v8, v9, v10) == gptiRit
    && !gbRITBlockedOnDIT )
  {
    v17 = (unsigned int)gcRITBlockedOnDITWaiters;
    if ( gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v16, v15, v17, v18);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v14;
}

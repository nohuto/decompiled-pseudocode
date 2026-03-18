/*
 * XREFs of NtUserEnumDisplaySettings @ 0x1C005C380
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x1C003BA60 (UserSessionSwitchEnterCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C003C194 (EtwTraceReleaseUserCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     DrvEnumDisplaySettings @ 0x1C005B8A0 (DrvEnumDisplaySettings.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // esi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v4 = a4;
  v6 = a2;
  UserSessionSwitchEnterCrit((__int64)a1, a2, a3, a4);
  if ( gbVideoInitialized )
    v8 = DrvEnumDisplaySettings(a1, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 232LL), v6, a3, v4);
  else
    v8 = -1073741823;
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && !gbRITBlockedOnDIT )
  {
    v11 = (unsigned int)gcRITBlockedOnDITWaiters;
    if ( gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v10, v9, v11, v12);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v8;
}

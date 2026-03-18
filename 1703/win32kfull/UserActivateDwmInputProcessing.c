/*
 * XREFs of UserActivateDwmInputProcessing @ 0x1C01A0F20
 * Callers:
 *     <none>
 * Callees:
 *     WaitForRitDisEngagement @ 0x1C0109034 (WaitForRitDisEngagement.c)
 *     ?InitalizeDitInfoObjectArray@@YAJPEAUDIT_INFO@@@Z @ 0x1C019C9C8 (-InitalizeDitInfoObjectArray@@YAJPEAUDIT_INFO@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UserActivateDwmInputProcessing(struct DIT_INFO *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx

  EnterCrit(0LL, 1LL);
  if ( *((_DWORD *)a1 + 14) )
    EtwTraceDitMmcssWorkStop();
  else
    gbDITInHitTest = 1;
  if ( gbEnableDwmTouchProcessing || gbEnableDwmMouseProcessing )
  {
    v6 = InitalizeDitInfoObjectArray(a1);
    if ( v6 >= 0 )
    {
      gpDitInfo = (__int64)a1;
      gptiDit = gptiCurrent;
      if ( !grpdeskDitStartup )
        MEMORY[0] = *(_QWORD *)(gptiCurrent + 408LL);
      LockObjectAssignment(gptiCurrent + 408LL, *(_QWORD *)(gptiRit + 408LL));
      if ( (unsigned int)WaitForRitDisEngagement(*((_DWORD *)a1 + 14)) )
      {
        gbNoMoreDITHitTest = 0;
        v6 = 0;
      }
      else
      {
        LockObjectAssignment(gptiDit + 408, grpdeskDitStartup);
        gpDitInfo = 0LL;
        v6 = -1073741823;
        gptiDit = 0LL;
      }
    }
  }
  else
  {
    v6 = -1073741822;
  }
  if ( gbDITInHitTest == 1 )
  {
    gbDITInHitTest = 0;
    v4 = gcDITHitTestWaiters;
    if ( gcDITHitTestWaiters )
    {
      KeReleaseSemaphore(gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
      gcDITHitTestWaiters = 0;
    }
  }
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return (unsigned int)v6;
}

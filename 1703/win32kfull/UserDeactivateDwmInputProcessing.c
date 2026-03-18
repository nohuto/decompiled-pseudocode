/*
 * XREFs of UserDeactivateDwmInputProcessing @ 0x1C01A1080
 * Callers:
 *     <none>
 * Callees:
 *     WaitForRitToCompleteLastCommand @ 0x1C0109144 (WaitForRitToCompleteLastCommand.c)
 *     WakeRIT @ 0x1C0109844 (WakeRIT.c)
 *     DitPrepRitTakeOver @ 0x1C0109914 (DitPrepRitTakeOver.c)
 *     CleanupDitIocpSupport @ 0x1C019FF28 (CleanupDitIocpSupport.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __fastcall UserDeactivateDwmInputProcessing(__int64 a1)
{
  NTSTATUS result; // eax
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 56) )
  {
    if ( gbDIT )
    {
      if ( grpdeskDitStartup )
      {
        LockObjectAssignment(gptiDit + 408, grpdeskDitStartup);
        gpDitInfo = 0LL;
        gptiDit = 0LL;
      }
      EtwTraceDitMmcssWorkStart();
      ghDITResetEvent = 0LL;
      ghDITMmcssEvent = 0LL;
      ghDITInputApcDoneEvent = 0LL;
      return CleanupDitIocpSupport(1);
    }
  }
  else
  {
    result = EtwTraceDitShutdown();
    if ( gbDIT )
    {
      gbDITInHitTest = 1;
      _InterlockedExchange(&glDitMouseHandling, 0);
      v2 = (gdwDITWakeReason & 0x40 | 0x200u) >> 4;
      DitPrepRitTakeOver();
      if ( grpdeskDitStartup )
      {
        LockObjectAssignment(gptiDit + 408, grpdeskDitStartup);
        gpDitInfo = 0LL;
        gptiDit = 0LL;
      }
      gbDIT = 0;
      if ( gbRITBlockedOnDIT )
        KeSetEvent(gpkeDITResponseEvent, 1, 0);
      if ( gbTouchInjectionBlockedOnDIT )
        KeSetEvent(gpkeDITTouchInjectionResponseEvent, 1, 0);
      if ( gbMouseInjectionBlockedOnDIT )
        KeSetEvent(gpkeDITMouseInjectionResponseEvent, 1, 0);
      if ( gpDitTouchInjectionDeviceInfo )
      {
        EnterDeviceInfoListCrit_(v3);
        HMAssignmentUnlock(&gpDitTouchInjectionDeviceInfo);
        LeaveDeviceInfoListCrit_(v4);
      }
      if ( gbCompositionInputSinkQueryBlockedOnDIT )
        KeSetEvent((PRKEVENT)gpkeDITCompositionInputSinkQueryResponseEvent, 1, 0);
      gdwInAtomicOperation = 0;
      gdwDeferWinEvent = 0;
      ghDITResetEvent = 0LL;
      ghDITMmcssEvent = 0LL;
      ghDITInputApcDoneEvent = 0LL;
      CleanupDitIocpSupport(0);
      WakeRIT(v2);
      v6 = 0;
      WaitForRitToCompleteLastCommand(0LL, 0LL, &v6, v5);
      gbDITInHitTest = 0;
      result = gcDITHitTestWaiters;
      if ( gcDITHitTestWaiters )
      {
        KeReleaseSemaphore(gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
        result = gcDITHitTestWaiters;
        gcDITHitTestWaiters = 0;
      }
    }
  }
  return result;
}

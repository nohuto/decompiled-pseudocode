/*
 * XREFs of EditionDeactivateMitInput @ 0x1C0108D50
 * Callers:
 *     <none>
 * Callees:
 *     WaitForRitToCompleteLastCommand @ 0x1C0109144 (WaitForRitToCompleteLastCommand.c)
 *     WakeRIT @ 0x1C0109844 (WakeRIT.c)
 *     DitPrepRitTakeOver @ 0x1C0109914 (DitPrepRitTakeOver.c)
 *     ?CleanupMitIocpSupport@@YAXHH@Z @ 0x1C0109C50 (-CleanupMitIocpSupport@@YAXHH@Z.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void *__fastcall EditionDeactivateMitInput(int a1)
{
  void *result; // rax
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( gbDIT )
    {
      if ( grpdeskDitStartup )
        LockInputThreadDesktop(grpdeskDitStartup);
      EtwTraceDitMmcssWorkStart();
      result = gpMitInfo;
      *((_DWORD *)gpMitInfo + 14) = 1;
    }
  }
  else
  {
    result = (void *)EtwTraceDitShutdown();
    if ( gbDIT )
    {
      gbDITInHitTest = 1;
      _InterlockedExchange(&glDitMouseHandling, 0);
      v2 = (gdwDITWakeReason & 0x40 | 0x200u) >> 4;
      DitPrepRitTakeOver();
      v3 = grpdeskDitStartup;
      if ( grpdeskDitStartup )
        LockInputThreadDesktop(grpdeskDitStartup);
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
      CleanupMitIocpSupport(0, 1);
      WakeRIT(v2);
      v5 = 0;
      WaitForRitToCompleteLastCommand(0LL, 0LL, &v5);
      gbDITInHitTest = 0;
      if ( gcDITHitTestWaiters )
      {
        KeReleaseSemaphore(gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
        gcDITHitTestWaiters = 0;
      }
      result = memset(gpMitInfo, 0, 0x50uLL);
      gpMitInfo = 0LL;
    }
  }
  return result;
}

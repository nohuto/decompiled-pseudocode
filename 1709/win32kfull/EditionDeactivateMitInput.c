/*
 * XREFs of EditionDeactivateMitInput @ 0x1C00FD450
 * Callers:
 *     <none>
 * Callees:
 *     ResetPointerDevices @ 0x1C00FD5F4 (ResetPointerDevices.c)
 *     WaitForRitToCompleteLastCommand @ 0x1C00FD870 (WaitForRitToCompleteLastCommand.c)
 *     WakeRIT @ 0x1C00FDA94 (WakeRIT.c)
 *     ?CleanupMitIocpSupport@@YAXHH@Z @ 0x1C00FDB64 (-CleanupMitIocpSupport@@YAXHH@Z.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void *__fastcall EditionDeactivateMitInput(int a1)
{
  void *result; // rax
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( gbDIT )
    {
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
      ResetPointerDevices();
      gbPendRecreateTouchInjectionDevices = 1;
      CleanupSensorExplicitly(2LL);
      EtwTraceDitDisEngaged();
      gbDIT = 0;
      if ( gbRITBlockedOnDIT )
        KeSetEvent(*(PRKEVENT *)&WPP_MAIN_CB.SectorSize, 1, 0);
      if ( gbTouchInjectionBlockedOnDIT )
        KeSetEvent((PRKEVENT)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink, 1, 0);
      if ( gbMouseInjectionBlockedOnDIT )
        KeSetEvent(gpkeDITMouseInjectionResponseEvent, 1, 0);
      if ( gpDitTouchInjectionDeviceInfo )
      {
        EnterDeviceInfoListCrit_();
        HMAssignmentUnlock(&gpDitTouchInjectionDeviceInfo);
        LeaveDeviceInfoListCrit_(v4, v3, v5);
      }
      if ( gbCompositionInputSinkQueryBlockedOnDIT )
        KeSetEvent(*(PRKEVENT *)&WPP_MAIN_CB.DeviceLock.Header.Lock, 1, 0);
      gdwInAtomicOperation = 0;
      gdwDeferWinEvent = 0;
      CleanupMitIocpSupport(0, 1);
      WakeRIT(v2);
      v6 = 0;
      WaitForRitToCompleteLastCommand(0LL, 0LL, &v6);
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

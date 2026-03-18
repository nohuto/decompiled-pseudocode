/*
 * XREFs of CleanupDwmInputProcessing @ 0x1C01253D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS CleanupDwmInputProcessing()
{
  NTSTATUS result; // eax
  __int64 v1; // rdx
  __int64 v2; // r8

  result = CInputManager::DestroySessionGlobal();
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    result = Win32FreePool(*(_QWORD *)&WPP_MAIN_CB.SectorSize, v1, v2);
    *(_QWORD *)&WPP_MAIN_CB.SectorSize = 0LL;
  }
  if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
  {
    result = Win32FreePool(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink, v1, v2);
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = 0LL;
  }
  if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) )
  {
    result = ZwClose(*(&WPP_MAIN_CB.Reserved + 1));
    *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = 0LL;
  }
  if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink )
  {
    result = ZwClose(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink);
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = 0LL;
  }
  if ( gpkeDITMouseInjectionResponseEvent )
  {
    result = Win32FreePool(gpkeDITMouseInjectionResponseEvent, v1, v2);
    gpkeDITMouseInjectionResponseEvent = 0LL;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock )
  {
    result = Win32FreePool(*(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock, v1, v2);
    *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock = 0LL;
  }
  if ( gpkeComputeInputSinkInfo )
  {
    result = Win32FreePool(gpkeComputeInputSinkInfo, v1, v2);
    gpkeComputeInputSinkInfo = 0LL;
  }
  if ( gpsemDITMouseInjectionWaiters )
  {
    result = Win32FreePool(gpsemDITMouseInjectionWaiters, v1, v2);
    gpsemDITMouseInjectionWaiters = 0LL;
  }
  return result;
}

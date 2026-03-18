/*
 * XREFs of CleanupDwmInputProcessing @ 0x1C011B620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS CleanupDwmInputProcessing()
{
  NTSTATUS result; // eax

  result = CInputManager::DestroySessionGlobal();
  if ( gpkeDITResponseEvent )
  {
    result = Win32FreePool(gpkeDITResponseEvent);
    gpkeDITResponseEvent = 0LL;
  }
  if ( gpkeDITTouchInjectionResponseEvent )
  {
    result = Win32FreePool(gpkeDITTouchInjectionResponseEvent);
    gpkeDITTouchInjectionResponseEvent = 0LL;
  }
  if ( ghDITEvent )
  {
    result = ZwClose(ghDITEvent);
    ghDITEvent = 0LL;
  }
  if ( ghDITRITEvent )
  {
    result = ZwClose(ghDITRITEvent);
    ghDITRITEvent = 0LL;
  }
  if ( gpkeDITMouseInjectionResponseEvent )
  {
    result = Win32FreePool(gpkeDITMouseInjectionResponseEvent);
    gpkeDITMouseInjectionResponseEvent = 0LL;
  }
  if ( gpkeDITCompositionInputSinkQueryResponseEvent )
  {
    result = Win32FreePool(gpkeDITCompositionInputSinkQueryResponseEvent);
    gpkeDITCompositionInputSinkQueryResponseEvent = 0LL;
  }
  if ( gpsemDITMouseInjectionWaiters )
  {
    result = Win32FreePool(gpsemDITMouseInjectionWaiters);
    gpsemDITMouseInjectionWaiters = 0LL;
  }
  return result;
}

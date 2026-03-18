/*
 * XREFs of AcpiShutdownNotificationTimerWorkItem @ 0x1C0039B10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalEvaluateOST @ 0x1C0029B5C (ACPIInternalEvaluateOST.c)
 *     ACPIInitShutdownInProgress @ 0x1C0038F54 (ACPIInitShutdownInProgress.c)
 *     ACPIStopShutdownInProgress @ 0x1C0039A0C (ACPIStopShutdownInProgress.c)
 */

void __fastcall AcpiShutdownNotificationTimerWorkItem(PVOID DeferredContext)
{
  KeAcquireGuardedMutex(&AcpiShutdownInProgressWorkerLock);
  if ( *(_BYTE *)DeferredContext )
  {
    if ( ++*((_DWORD *)DeferredContext + 48) < 3u )
    {
      ACPIInitShutdownInProgress((char *)DeferredContext);
    }
    else
    {
      ACPIInternalEvaluateOST(*((_QWORD *)DeferredContext + 25), 129, 128);
      ACPIStopShutdownInProgress(*((_QWORD *)DeferredContext + 25));
    }
  }
  KeReleaseGuardedMutex(&AcpiShutdownInProgressWorkerLock);
}

/*
 * XREFs of AmliDisableWatchdog @ 0x1C0003034
 * Callers:
 *     FreeContext @ 0x1C0002E08 (FreeContext.c)
 * Callees:
 *     AcpiQueueRecordBlackboxInformation @ 0x1C00425DC (AcpiQueueRecordBlackboxInformation.c)
 *     AmliWatchdogTimeoutAction @ 0x1C0042970 (AmliWatchdogTimeoutAction.c)
 */

void __fastcall AmliDisableWatchdog(__int64 *a1)
{
  KIRQL v2; // si
  __int64 v3; // rdi

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiWatchdogLock);
  v3 = *a1;
  if ( *((_BYTE *)a1 + 88) || *(_BYTE *)(v3 + 472) )
  {
    *((_BYTE *)a1 + 88) = 0;
    if ( !KeCancelTimer((PKTIMER)(a1 + 13)) )
    {
      if ( *(_BYTE *)(v3 + 472) )
        AcpiQueueRecordBlackboxInformation();
      else
        AmliWatchdogTimeoutAction(a1);
    }
  }
  KeReleaseSpinLock(&AcpiWatchdogLock, v2);
}

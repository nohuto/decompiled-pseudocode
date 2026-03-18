/*
 * XREFs of PnpDisableWatchdog @ 0x140075428
 * Callers:
 *     PnpDisablePnpEventWorkerWatchdog @ 0x1400753DC (PnpDisablePnpEventWorkerWatchdog.c)
 *     PnpDisableDeviceCompletionQueueWatchdog @ 0x1401468A8 (PnpDisableDeviceCompletionQueueWatchdog.c)
 *     PnpDisableDelayedRemoveWorkerWatchdog @ 0x14023C64C (PnpDisableDelayedRemoveWorkerWatchdog.c)
 * Callees:
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     PnpRecordBlackbox @ 0x140075484 (PnpRecordBlackbox.c)
 *     PnpQueryWatchdogBugcheckEnabled @ 0x14015EF80 (PnpQueryWatchdogBugcheckEnabled.c)
 *     PnpWatchdogBugcheck @ 0x14023C71C (PnpWatchdogBugcheck.c)
 */

char __fastcall PnpDisableWatchdog(__int64 a1)
{
  char v1; // di

  v1 = 0;
  if ( a1 )
  {
    *(_BYTE *)(a1 + 136) = 0;
    if ( !KeCancelTimer((PKTIMER)(a1 + 8)) )
    {
      v1 = 1;
      if ( *(_BYTE *)(a1 + 137) )
      {
        if ( (unsigned __int8)PnpQueryWatchdogBugcheckEnabled() )
          PnpWatchdogBugcheck(a1);
      }
    }
    PnpRecordBlackbox(0LL, *(unsigned int *)(a1 + 200));
  }
  return v1;
}

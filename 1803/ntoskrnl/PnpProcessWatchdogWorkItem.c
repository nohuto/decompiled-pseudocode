/*
 * XREFs of PnpProcessWatchdogWorkItem @ 0x14015F108
 * Callers:
 *     PnpDeviceCompletionQueueWatchdogWorkItem @ 0x14015F0C0 (PnpDeviceCompletionQueueWatchdogWorkItem.c)
 *     PnpDelayedRemoveWorkerWatchdogWorkItem @ 0x14023C610 (PnpDelayedRemoveWorkerWatchdogWorkItem.c)
 *     PnpEventWorkerWatchdogWorkItem @ 0x14023C6E0 (PnpEventWorkerWatchdogWorkItem.c)
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     PnpRecordBlackbox @ 0x140075484 (PnpRecordBlackbox.c)
 *     PnpWatchdogInitializeTimer @ 0x140075888 (PnpWatchdogInitializeTimer.c)
 *     PnpQueryWatchdogTimeout @ 0x1400758EC (PnpQueryWatchdogTimeout.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     PnpQueryWatchdogBugcheckEnabled @ 0x14015EF80 (PnpQueryWatchdogBugcheckEnabled.c)
 *     PnpWatchdogBugcheck @ 0x14023C71C (PnpWatchdogBugcheck.c)
 */

LONG __fastcall PnpProcessWatchdogWorkItem(__int64 a1, __int64 a2)
{
  struct _KEVENT *v4; // rcx
  int v6; // r8d
  __int64 v7; // r10

  if ( !*(_BYTE *)(a1 + 136) )
  {
    v4 = (struct _KEVENT *)(a1 + 144);
    return KeSetEvent(v4, 0, 0);
  }
  if ( *(_BYTE *)(a1 + 137) )
  {
    if ( PnpQueryWatchdogBugcheckEnabled() )
      PnpWatchdogBugcheck(a1);
    goto LABEL_4;
  }
  PnpRecordBlackbox(*(_QWORD *)(a1 + 208), *(_DWORD *)(a1 + 200));
  if ( !(unsigned int)PnpQueryWatchdogTimeout(0) )
  {
LABEL_4:
    v4 = (struct _KEVENT *)(a1 + 144);
    *(_BYTE *)(a1 + 136) = 0;
    return KeSetEvent(v4, 0, 0);
  }
  v6 = *(_DWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 137) = 1;
  PnpWatchdogInitializeTimer(a1, a2, v6, a1);
  return KiSetTimerEx(a1 + 8, -10000000 * v7, 0, 0, a1 + 72);
}

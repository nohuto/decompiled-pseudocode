/*
 * XREFs of NdisSetPeriodicTimer @ 0x1C0061CA0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMSetTimer @ 0x1C0025410 (NdisMSetTimer.c)
 */

void __stdcall NdisSetPeriodicTimer(PNDIS_TIMER NdisTimer, UINT MillisecondsPeriod)
{
  void (__fastcall *DeferredRoutine)(_KDPC *, void *, void *, void *); // rax

  DeferredRoutine = NdisTimer->Dpc.DeferredRoutine;
  if ( (char *)DeferredRoutine == (char *)ndisMTimerDpc || (char *)DeferredRoutine == (char *)ndisMTimerDpcX )
    NdisMSetTimer((_LIST_ENTRY *)NdisTimer, MillisecondsPeriod);
  else
    KeSetTimerEx(
      &NdisTimer->Timer,
      (LARGE_INTEGER)(-10000LL * (int)MillisecondsPeriod),
      MillisecondsPeriod,
      &NdisTimer->Dpc);
}

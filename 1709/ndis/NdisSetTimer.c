/*
 * XREFs of NdisSetTimer @ 0x1C0002A50
 * Callers:
 *     ndisSetMediaDisconnectTimer @ 0x1C001EADC (ndisSetMediaDisconnectTimer.c)
 *     ndisMStartInitMode @ 0x1C00AD2D4 (ndisMStartInitMode.c)
 * Callees:
 *     NdisMSetTimer @ 0x1C00027C0 (NdisMSetTimer.c)
 */

void __stdcall NdisSetTimer(PNDIS_TIMER Timer, UINT MillisecondsToDelay)
{
  void (__fastcall *DeferredRoutine)(_KDPC *, void *, void *, void *); // rax

  DeferredRoutine = Timer->Dpc.DeferredRoutine;
  if ( (char *)DeferredRoutine == (char *)ndisMTimerDpc || (char *)DeferredRoutine == (char *)ndisMTimerDpcX )
    NdisMSetTimer((_LIST_ENTRY *)Timer, MillisecondsToDelay);
  else
    KeSetTimer(&Timer->Timer, (LARGE_INTEGER)(-10000LL * (int)MillisecondsToDelay), &Timer->Dpc);
}

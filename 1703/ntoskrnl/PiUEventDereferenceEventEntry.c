/*
 * XREFs of PiUEventDereferenceEventEntry @ 0x140464968
 * Callers:
 *     PiUEventProcessEventWorker @ 0x1404647D0 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140464910 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyUserMode @ 0x1404A5D80 (PiUEventNotifyUserMode.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     PiUEventFreeEventEntry @ 0x1404649CC (PiUEventFreeEventEntry.c)
 */

__int64 __fastcall PiUEventDereferenceEventEntry(__int64 a1)
{
  unsigned int v2; // edi

  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = --*(_DWORD *)(a1 + 56);
  if ( *(_BYTE *)(a1 + 68) && v2 == 1 )
    KeSetEvent(*(PRKEVENT *)(a1 + 24), 0, 0);
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a1 + 16));
  if ( !v2 )
    PiUEventFreeEventEntry(a1);
  return v2;
}

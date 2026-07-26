/*
 * XREFs of NdisMSetPeriodicTimer @ 0x1C001ED00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisMSetPeriodicTimer(PNDIS_MINIPORT_TIMER Timer, UINT MillisecondPeriod)
{
  void (__fastcall *DeferredRoutine)(_KDPC *, void *, void *, void *); // rax
  __int64 v5; // rbx
  _NDIS_MINIPORT_BLOCK *Miniport; // rdx
  KIRQL v7; // al
  _NDIS_MINIPORT_BLOCK *v8; // rdx
  _NDIS_MINIPORT_TIMER *TimerQueue; // r8
  struct _NDIS_MINIPORT_TIMER *v10; // rcx

  DeferredRoutine = Timer->Dpc.DeferredRoutine;
  v5 = -10000LL * (int)MillisecondPeriod;
  if ( (char *)DeferredRoutine != (char *)ndisMWakeUpDpc && (char *)DeferredRoutine != (char *)ndisMWakeUpDpcX )
  {
    Miniport = Timer->Miniport;
    if ( (Miniport->DriverHandle->Flags & 2) != 0 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&Miniport->TimerQueueLock);
      v8 = Timer->Miniport;
      TimerQueue = v8->TimerQueue;
      v10 = TimerQueue;
      if ( !TimerQueue )
        goto LABEL_9;
      do
      {
        if ( v10 == Timer )
          break;
        v10 = v10->NextTimer;
      }
      while ( v10 );
      if ( !v10 )
      {
LABEL_9:
        Timer->NextTimer = TimerQueue;
        v8->TimerQueue = Timer;
      }
      KeReleaseSpinLock(&Timer->Miniport->TimerQueueLock, v7);
    }
  }
  KeSetTimerEx(&Timer->Timer, (LARGE_INTEGER)v5, MillisecondPeriod, &Timer->Dpc);
}

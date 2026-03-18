/*
 * XREFs of PiUEventNotifyClient @ 0x1404A69CC
 * Callers:
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140464688 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140464EF4 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1404A6744 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1405D8300 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140464910 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyClientPendingEvent @ 0x1404A6AA8 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventQueuePendingEvent @ 0x1404A6B08 (PiUEventQueuePendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x1404A6B48 (PiUEventReferenceEventEntry.c)
 *     PiUEventIsClientStuck @ 0x1404A6B80 (PiUEventIsClientStuck.c)
 */

__int64 __fastcall PiUEventNotifyClient(__int64 a1, __int64 a2)
{
  int v4; // edi
  char v5; // si
  _QWORD *PoolWithTag; // rsi

  v4 = 0;
  v5 = 0;
  ExAcquireFastMutex(*(PFAST_MUTEX *)(a2 + 16));
  if ( *(_BYTE *)(a2 + 140) )
  {
    if ( !(unsigned __int8)PiUEventIsClientStuck(a2) )
      goto LABEL_3;
    ++*(_DWORD *)(a2 + 136);
  }
  v5 = 1;
LABEL_3:
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
  if ( !v5 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x59706E50u);
    if ( PoolWithTag )
    {
      PiUEventReferenceEventEntry(a1);
      PoolWithTag[3] = a1;
      ExAcquireFastMutex(*(PFAST_MUTEX *)(a2 + 16));
      v4 = PiUEventQueuePendingEvent(a2, PoolWithTag);
      if ( v4 >= 0
        || (PiUEventDequeuePendingEventWorker(a2, *(__int64 **)(a2 + 112), 0),
            ++*(_DWORD *)(a2 + 136),
            v4 = PiUEventQueuePendingEvent(a2, PoolWithTag),
            v4 >= 0) )
      {
        PoolWithTag[2] = MEMORY[0xFFFFF78000000014];
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
        PiUEventNotifyClientPendingEvent(a2);
      }
      else
      {
        ++*(_DWORD *)(a2 + 136);
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}

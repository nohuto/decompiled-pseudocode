/*
 * XREFs of PiUEventNotifyClient @ 0x14051FAD4
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x14051F808 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1405E58A4 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1405F5B54 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140605498 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14051EC20 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14051FBB8 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventQueuePendingEvent @ 0x14051FC18 (PiUEventQueuePendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x14051FC58 (PiUEventReferenceEventEntry.c)
 *     PiUEventIsClientStuck @ 0x14051FC94 (PiUEventIsClientStuck.c)
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
      if ( v4 < 0 )
      {
        PiUEventDequeuePendingEventWorker(a2, *(void **)(a2 + 112), 0);
        ++*(_DWORD *)(a2 + 136);
        v4 = PiUEventQueuePendingEvent(a2, PoolWithTag);
      }
      if ( v4 < 0 )
      {
        ++*(_DWORD *)(a2 + 136);
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
      }
      else
      {
        PoolWithTag[2] = MEMORY[0xFFFFF78000000014];
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
        PiUEventNotifyClientPendingEvent(a2);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}

/*
 * XREFs of WmipWriteWnodeToObject @ 0x140154818
 * Callers:
 *     WmipProcessEvent @ 0x1405FF418 (WmipProcessEvent.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     WmipClearIrpObjectList @ 0x1400B7188 (WmipClearIrpObjectList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     WmipQueueNotification @ 0x1405ED690 (WmipQueueNotification.c)
 */

__int64 __fastcall WmipWriteWnodeToObject(PRKEVENT Event, unsigned int *Src)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  char v6; // bp
  unsigned int v7; // esi
  _DWORD *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
  v4 = *(_QWORD *)&Event[3].Header.Lock;
  v5 = 0;
  if ( v4 )
  {
    WmipClearIrpObjectList(*(_QWORD *)&Event[3].Header.Lock);
    v4 &= -(__int64)(_InterlockedExchange64((volatile __int64 *)(v4 + 104), 0LL) != 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  v6 = 1;
  if ( v4 )
  {
    v7 = *Src;
    v8 = *(_DWORD **)(v4 + 24);
    if ( *Src > *(_DWORD *)(*(_QWORD *)(v4 + 184) + 8LL) )
    {
      v8[12] = v7;
      *v8 = 56;
      v7 = 56;
      v8[11] = 32;
    }
    else
    {
      memmove(v8, Src, v7);
      v6 = 0;
    }
    *(_QWORD *)(v4 + 56) = v7;
    *(_DWORD *)(v4 + 48) = 0;
    IofCompleteRequest((PIRP)v4, 0);
  }
  if ( v6 )
    return (unsigned int)WmipQueueNotification(Event);
  return v5;
}

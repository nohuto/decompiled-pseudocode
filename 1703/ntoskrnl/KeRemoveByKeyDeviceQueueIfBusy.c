/*
 * XREFs of KeRemoveByKeyDeviceQueueIfBusy @ 0x140201980
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x14013FEB0 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x14013FEF0 (KeReleaseInStackQueuedSpinLockForDpc.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveByKeyDeviceQueueIfBusy(PKDEVICE_QUEUE DeviceQueue, ULONG SortKey)
{
  struct _KDEVICE_QUEUE_ENTRY *v4; // rbx
  LIST_ENTRY *p_DeviceListHead; // rax
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v8; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
  if ( DeviceQueue->Busy )
  {
    p_DeviceListHead = &DeviceQueue->DeviceListHead;
    Flink = DeviceQueue->DeviceListHead.Flink;
    if ( Flink == &DeviceQueue->DeviceListHead )
    {
      DeviceQueue->Busy = 0;
    }
    else
    {
      do
      {
        v4 = (struct _KDEVICE_QUEUE_ENTRY *)Flink;
        if ( SortKey <= LODWORD(Flink[1].Flink) )
          break;
        Flink = Flink->Flink;
      }
      while ( Flink != p_DeviceListHead );
      if ( Flink == p_DeviceListHead )
      {
        v4 = (struct _KDEVICE_QUEUE_ENTRY *)p_DeviceListHead->Flink;
        v8 = p_DeviceListHead->Flink->Flink;
        if ( p_DeviceListHead->Flink->Blink != p_DeviceListHead || (struct _KDEVICE_QUEUE_ENTRY *)v8->Blink != v4 )
          __fastfail(3u);
      }
      else
      {
        v8 = v4->DeviceListEntry.Flink;
        p_DeviceListHead = v4->DeviceListEntry.Blink;
        if ( (struct _KDEVICE_QUEUE_ENTRY *)v4->DeviceListEntry.Flink->Blink != v4
          || (struct _KDEVICE_QUEUE_ENTRY *)p_DeviceListHead->Flink != v4 )
        {
          __fastfail(3u);
        }
      }
      p_DeviceListHead->Flink = v8;
      v8->Blink = p_DeviceListHead;
      v4->Inserted = 0;
      v9 = DeviceQueue->1;
      if ( v4 == (struct _KDEVICE_QUEUE_ENTRY *)(*(__int64 *)&v9 >> 8) )
        DeviceQueue->1 = v9;
    }
  }
  KeReleaseInStackQueuedSpinLockForDpc(&LockHandle);
  return v4;
}

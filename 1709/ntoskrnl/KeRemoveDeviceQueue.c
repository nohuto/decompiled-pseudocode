/*
 * XREFs of KeRemoveDeviceQueue @ 0x140207ED0
 * Callers:
 *     IoFreeController @ 0x1401F9340 (IoFreeController.c)
 *     IopStartNextPacket @ 0x1401FA2A0 (IopStartNextPacket.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140204E50 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x140204EE0 (KeReleaseInStackQueuedSpinLockForDpc.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveDeviceQueue(PKDEVICE_QUEUE DeviceQueue)
{
  struct _KDEVICE_QUEUE_ENTRY *Flink; // rbx
  LIST_ENTRY *p_DeviceListHead; // rax
  struct _LIST_ENTRY *v4; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v5; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Flink = 0LL;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
  p_DeviceListHead = &DeviceQueue->DeviceListHead;
  if ( p_DeviceListHead->Flink == p_DeviceListHead )
  {
    DeviceQueue->Busy = 0;
  }
  else
  {
    Flink = (struct _KDEVICE_QUEUE_ENTRY *)p_DeviceListHead->Flink;
    if ( p_DeviceListHead->Flink->Blink != p_DeviceListHead
      || (v4 = Flink->DeviceListEntry.Flink, (struct _KDEVICE_QUEUE_ENTRY *)Flink->DeviceListEntry.Flink->Blink != Flink) )
    {
      __fastfail(3u);
    }
    p_DeviceListHead->Flink = v4;
    v4->Blink = p_DeviceListHead;
    Flink->Inserted = 0;
    v5 = DeviceQueue->1;
    if ( Flink == (struct _KDEVICE_QUEUE_ENTRY *)(*(__int64 *)&v5 >> 8) )
      DeviceQueue->1 = v5;
  }
  KeReleaseInStackQueuedSpinLockForDpc(&LockHandle);
  return Flink;
}

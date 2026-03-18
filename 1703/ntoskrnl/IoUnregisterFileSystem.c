/*
 * XREFs of IoUnregisterFileSystem @ 0x14059B5D0
 * Callers:
 *     RawShutdown @ 0x1406E4FF0 (RawShutdown.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __stdcall IoUnregisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 *v6; // rbx
  void (__fastcall *v7)(PDEVICE_OBJECT, _QWORD); // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  p_Queue = &DeviceObject->Queue;
  if ( DeviceObject->Queue.ListEntry.Flink )
  {
    Flink = p_Queue->ListEntry.Flink;
    Blink = DeviceObject->Queue.ListEntry.Blink;
    if ( (union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *)p_Queue->ListEntry.Flink->Blink != p_Queue
      || (union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *)Blink->Flink != p_Queue )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
  }
  v6 = (__int64 *)IopFsNotifyChangeQueueHead;
  while ( v6 != &IopFsNotifyChangeQueueHead )
  {
    v7 = (void (__fastcall *)(PDEVICE_OBJECT, _QWORD))v6[3];
    v6 = (__int64 *)*v6;
    v7(DeviceObject, 0LL);
  }
  ++IopFsRegistrationOps;
  ExReleaseResourceLite(&IopDatabaseResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  IopDecrementDeviceObjectRefCount((ULONG_PTR)DeviceObject, 1);
}

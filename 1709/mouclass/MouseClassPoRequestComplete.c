/*
 * XREFs of MouseClassPoRequestComplete @ 0x1C0002A40
 * Callers:
 *     <none>
 * Callees:
 *     MouseClassCheckWaitWakeEnabled @ 0x1C000255C (MouseClassCheckWaitWakeEnabled.c)
 *     MouseClassLogError @ 0x1C000299C (MouseClassLogError.c)
 *     WPP_RECORDER_SF_q @ 0x1C000494C (WPP_RECORDER_SF_q.c)
 */

void __fastcall MouseClassPoRequestComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context)
{
  PVOID DeviceExtension; // rdi
  char v6; // bp
  POWER_STATE v7; // ebx
  KIRQL v8; // al
  bool v9; // bl
  int v10; // edx
  _QWORD *PoolWithTag; // rbx
  int v12; // r8d
  PIO_WORKITEM WorkItem; // rax
  NTSTATUS v14; // eax
  struct _IO_WORKITEM *v15; // rcx
  ULONG RemlockSize; // [rsp+20h] [rbp-28h]

  DeviceExtension = DeviceObject->DeviceExtension;
  v6 = (char)DeviceObject;
  if ( Context )
  {
    v7.SystemState = (SYSTEM_POWER_STATE)Context->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    PoSetPowerState(*(PDEVICE_OBJECT *)DeviceExtension, SystemPowerState, v7);
    *((POWER_STATE *)DeviceExtension + 44) = v7;
    PoStartNextPowerIrp(Context);
    ++Context->CurrentLocation;
    ++Context->Tail.Overlay.CurrentStackLocation;
    PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Context);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Context, 0x20u);
    return;
  }
  if ( *((int *)DeviceExtension + 67) > 1 && *((int *)DeviceExtension + 68) > 1 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeviceExtension + 9);
    v9 = *((_QWORD *)DeviceExtension + 35) && !*((_BYTE *)DeviceExtension + 288);
    KeReleaseSpinLock((PKSPIN_LOCK)DeviceExtension + 9, v8);
    if ( !v9 )
    {
      if ( MouseClassCheckWaitWakeEnabled((__int64)DeviceExtension) )
      {
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x20uLL, 0x43756F4Du);
        if ( PoolWithTag )
        {
          WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)DeviceExtension);
          PoolWithTag[2] = WorkItem;
          if ( WorkItem )
          {
            *PoolWithTag = 0LL;
            PoolWithTag[1] = DeviceExtension;
            v14 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, PoolWithTag, File, 1u, 0x20u);
            v15 = (struct _IO_WORKITEM *)PoolWithTag[2];
            if ( v14 >= 0 )
            {
              IoQueueWorkItem(v15, MouseClassCreateWaitWakeIrpWorker, DelayedWorkQueue, PoolWithTag);
              return;
            }
            IoFreeWorkItem(v15);
          }
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v10, v12, 91, RemlockSize, v6);
        MouseClassLogError(*(void **)DeviceExtension, -2147155954, 2, -1073741670, 0, 0LL, 0);
      }
    }
  }
}

/*
 * XREFs of IoInitializeTimer @ 0x14071C2E0
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedInsertTailList @ 0x1400B1F80 (ExInterlockedInsertTailList.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoInitializeTimer(PDEVICE_OBJECT DeviceObject, PIO_TIMER_ROUTINE TimerRoutine, PVOID Context)
{
  PIO_TIMER Timer; // rbx
  struct _IO_TIMER *PoolWithTag; // rax

  Timer = DeviceObject->Timer;
  if ( !Timer )
  {
    PoolWithTag = (struct _IO_TIMER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69546F49u);
    Timer = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memset(PoolWithTag, 0, sizeof(struct _IO_TIMER));
    Timer->DeviceObject = DeviceObject;
    Timer->Type = 9;
    DeviceObject->Timer = Timer;
  }
  Timer->TimerRoutine = (void (__fastcall *)(_DEVICE_OBJECT *, void *))TimerRoutine;
  Timer->Context = Context;
  ExInterlockedInsertTailList(&IopTimerQueueHead, &Timer->TimerList, &IopTimerLock);
  return 0;
}

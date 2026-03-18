/*
 * XREFs of PoHandleIrp @ 0x140145564
 * Callers:
 *     IopPoHandleIrp @ 0x140145518 (IopPoHandleIrp.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     PoDeviceReleaseIrp @ 0x140145650 (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x140145734 (PoDeviceAcquireIrp.c)
 *     PopDispatchQuerySetIrp @ 0x140145880 (PopDispatchQuerySetIrp.c)
 */

char __fastcall PoHandleIrp(PIRP Irp, _DWORD *a2)
{
  char v2; // di
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  _DWORD *v4; // r14
  PDEVICE_OBJECT DeviceObject; // rsi
  __int64 v7; // rax
  __int64 v8; // r8
  ULONG Flags; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 1;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v4 = a2;
  DeviceObject = CurrentStackLocation->DeviceObject;
  v7 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v8 = *(_QWORD *)(v7 + 40);
  if ( !v8
    || (LOBYTE(a2) = *(_BYTE *)(v7 + 184),
        PoDeviceReleaseIrp(Irp, a2, v8),
        Flags = DeviceObject->Flags,
        (Flags & 0x8000) != 0)
    || (Flags & 0x2000) != 0 && KeGetCurrentIrql() == 2 )
  {
    if ( (DeviceObject->Flags & 0x8000) == 0 )
    {
LABEL_9:
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      PopDispatchQuerySetIrp(Irp);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      *v4 = 259;
      return v2;
    }
  }
  else
  {
    v2 = 0;
  }
  LOBYTE(a2) = CurrentStackLocation->MinorFunction;
  PoDeviceAcquireIrp(Irp, a2, DeviceObject);
  if ( v2 )
  {
    if ( (DeviceObject->Flags & 0x8000) != 0 )
    {
      Irp->IoStatus.Status = 0;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      *v4 = 0;
      return v2;
    }
    goto LABEL_9;
  }
  return v2;
}

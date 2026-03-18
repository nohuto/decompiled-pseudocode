/*
 * XREFs of PoHandleIrp @ 0x140166B54
 * Callers:
 *     IopPoHandleIrp @ 0x140166B0C (IopPoHandleIrp.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     PoDeviceReleaseIrp @ 0x140166C5C (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x140166D58 (PoDeviceAcquireIrp.c)
 *     PopDispatchQuerySetIrp @ 0x140166EB8 (PopDispatchQuerySetIrp.c)
 */

char __fastcall PoHandleIrp(PIRP Irp, _DWORD *a2)
{
  char v2; // si
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  _DWORD *v4; // r14
  PDEVICE_OBJECT DeviceObject; // rbp
  __int64 v7; // rax
  __int64 v8; // r8
  ULONG *p_Flags; // rdi
  ULONG Flags; // eax
  ULONG *v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = 1;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v4 = a2;
  DeviceObject = CurrentStackLocation->DeviceObject;
  v7 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v8 = *(_QWORD *)(v7 + 40);
  if ( v8 )
  {
    LOBYTE(a2) = *(_BYTE *)(v7 + 184);
    PoDeviceReleaseIrp(Irp, a2, v8);
    p_Flags = &DeviceObject->Flags;
    Flags = DeviceObject->Flags;
    v11 = &DeviceObject->Flags;
    if ( (Flags & 0x8000) == 0 && ((Flags & 0x2000) == 0 || KeGetCurrentIrql() != 2) )
    {
      v2 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    v11 = &DeviceObject->Flags;
  }
  p_Flags = v11;
  if ( (*v11 & 0x8000) != 0 )
  {
LABEL_5:
    LOBYTE(a2) = CurrentStackLocation->MinorFunction;
    PoDeviceAcquireIrp(Irp, a2, DeviceObject);
    if ( !v2 )
      return v2;
  }
  if ( (*p_Flags & 0x8000) != 0 )
  {
    Irp->IoStatus.Status = 0;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    *v4 = 0;
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
    PopDispatchQuerySetIrp(Irp);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    *v4 = 259;
  }
  return v2;
}

/*
 * XREFs of PopAllocateIrp @ 0x140146080
 * Callers:
 *     PopRequestPowerIrp @ 0x140145E60 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x140408C28 (PopNotifyDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14005302C (ExAllocateFromNPagedLookasideList.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140071FE0 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoAllocateIrp @ 0x140081530 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140081554 (IoGetAttachedDeviceReferenceWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     IoReuseIrp @ 0x14012C360 (IoReuseIrp.c)
 *     PopFxLockDevice @ 0x14013257C (PopFxLockDevice.c)
 *     PopFxAllocatePowerIrp @ 0x1401467CC (PopFxAllocatePowerIrp.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     VfIrpWatermark @ 0x14076ED00 (VfIrpWatermark.c)
 */

__int64 __fastcall PopAllocateIrp(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        char a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        IRP **a10,
        _QWORD *a11)
{
  ULONG_PTR BugCheckParameter4; // rdi
  int v12; // ebx
  IRP *Irp; // r14
  _QWORD *QuadPart; // rsi
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // r12
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v18; // r13
  char v19; // al
  int PowerIrp; // eax
  int v21; // r15d
  unsigned int v22; // r13d
  unsigned int v23; // r13d
  __int64 v24; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v26; // rax
  _QWORD *v27; // rax
  void *v28; // r13
  __int64 v30; // [rsp+40h] [rbp-38h] BYREF
  LARGE_INTEGER Interval; // [rsp+48h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF
  void *v34; // [rsp+C8h] [rbp+50h]

  BugCheckParameter4 = 0LL;
  v30 = 0LL;
  Interval.QuadPart = 0LL;
  v12 = a4;
  *a10 = 0LL;
  Irp = 0LL;
  QuadPart = 0LL;
  *a11 = 0LL;
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(a1, 0x746C6644u);
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)a1, 0x746C6644u);
  v34 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v18 = *(_QWORD *)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
  else
    v18 = 0LL;
  if ( !v18 )
  {
    v28 = DeviceAttachmentBaseRefWithTag;
    v21 = -1073741808;
LABEL_39:
    if ( a6 && v21 != 259 )
    {
      LOBYTE(BugCheckParameter4) = v12 != 0;
      KeBugCheckEx(0xA0u, 1uLL, 6uLL, (ULONG_PTR)AttachedDeviceReferenceWithTag, BugCheckParameter4);
    }
    goto LABEL_26;
  }
  v19 = a3;
  if ( a4 == 1 && a3 == 2 )
  {
    PowerIrp = PopFxAllocatePowerIrp(v18, (int)a1, a5, a8, a9, a7, (__int64)&v30, (PEX_SPIN_LOCK)&Interval);
    v21 = PowerIrp;
    if ( PowerIrp >= 0 || PowerIrp == -1073741130 )
    {
      Irp = (IRP *)v30;
      QuadPart = (_QWORD *)Interval.QuadPart;
      if ( PowerIrp != 259 )
      {
        v19 = 2;
        goto LABEL_11;
      }
    }
    else
    {
      Irp = (IRP *)v30;
      QuadPart = (_QWORD *)Interval.QuadPart;
    }
LABEL_43:
    v28 = v34;
LABEL_25:
    if ( Irp )
      goto LABEL_26;
LABEL_36:
    v12 = a4;
    goto LABEL_39;
  }
  v21 = -1073741130;
LABEL_11:
  if ( v21 >= 0 )
  {
    v24 = *(_QWORD *)(v18 + 80);
    if ( AttachedDeviceReferenceWithTag->StackSize > *(_BYTE *)(*(_QWORD *)(v24 + 16) + 66LL) )
    {
      ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x746C6644u);
      ObfReferenceObjectWithTag(*(PVOID *)(v24 + 104), 0x746C6644u);
      AttachedDeviceReferenceWithTag = *(PDEVICE_OBJECT *)(v24 + 104);
    }
LABEL_21:
    IoReuseIrp(Irp, -1073741637);
    if ( IovUtilVerifierEnabled )
      VfIrpWatermark(Irp, 1LL);
    Irp->IoStatus.Information = 0LL;
    Irp->Tail.Overlay.ListEntry.Blink = &Irp->Tail.Overlay.ListEntry;
    Irp->Tail.Overlay.ListEntry.Flink = &Irp->Tail.Overlay.ListEntry;
    memset(QuadPart, 0, 0xF8uLL);
    QuadPart[4] = AttachedDeviceReferenceWithTag;
    QuadPart[3] = v34;
    *((_BYTE *)QuadPart + 184) = a3;
    *((_DWORD *)QuadPart + 47) = a4;
    *((_DWORD *)QuadPart + 48) = a5;
    QuadPart[2] = Irp;
    QuadPart[25] = v24;
    QuadPart[27] = a8;
    QuadPart[28] = a9;
    QuadPart[29] = a1;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].DeviceObject = 0LL;
    CurrentStackLocation[-1].Context = QuadPart;
    v26 = --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    v26[-1].MajorFunction = 22;
    v26[-1].MinorFunction = a3;
    v26[-1].DeviceObject = AttachedDeviceReferenceWithTag;
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
    v27 = (_QWORD *)qword_14034B808;
    if ( *(__int64 **)qword_14034B808 != &PopIrpList )
      __fastfail(3u);
    *QuadPart = &PopIrpList;
    QuadPart[1] = v27;
    *v27 = QuadPart;
    qword_14034B808 = (__int64)QuadPart;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    AttachedDeviceReferenceWithTag = 0LL;
    v28 = 0LL;
    v21 = 0;
    *a10 = Irp;
    *a11 = QuadPart;
    QuadPart = 0LL;
    goto LABEL_25;
  }
  if ( v19 )
    v30 = 0LL;
  else
    v30 = PopFxLockDevice(v18, 0);
  Interval.QuadPart = -500000LL;
  v22 = 0;
  while ( 1 )
  {
    if ( v22 && KeGetCurrentIrql() <= 1u )
      KeDelayExecutionThread(0, 0, &Interval);
    ++v22;
    QuadPart = ExAllocateFromNPagedLookasideList(&PopIrpDataLookaside);
    if ( QuadPart )
      break;
    if ( !a6 || v22 >= 0xA )
      goto LABEL_43;
  }
  v23 = 0;
  while ( 1 )
  {
    if ( v23 && KeGetCurrentIrql() <= 1u )
      KeDelayExecutionThread(0, 0, &Interval);
    ++v23;
    Irp = IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize + 1, 0);
    if ( Irp )
    {
      v24 = v30;
      goto LABEL_21;
    }
    if ( !a6 )
      break;
    if ( v23 >= 0xA )
    {
      v28 = v34;
      goto LABEL_36;
    }
  }
  v28 = v34;
LABEL_26:
  if ( QuadPart )
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, QuadPart);
  if ( AttachedDeviceReferenceWithTag )
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x746C6644u);
  if ( v28 )
    ObfDereferenceObjectWithTag(v28, 0x746C6644u);
  return (unsigned int)v21;
}

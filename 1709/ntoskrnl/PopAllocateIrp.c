/*
 * XREFs of PopAllocateIrp @ 0x1400B3D54
 * Callers:
 *     PopRequestPowerIrp @ 0x1400B3BA0 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x140437350 (PopNotifyDevice.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14001509C (ExAllocateFromNPagedLookasideList.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400B05BC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoReuseIrp @ 0x1400B4070 (IoReuseIrp.c)
 *     PopFxAllocatePowerIrp @ 0x1400B420C (PopFxAllocatePowerIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1400DE5E8 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IoAllocateIrp @ 0x1400DEBD0 (IoAllocateIrp.c)
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     PopFxLockDevice @ 0x1400FF2FC (PopFxLockDevice.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     VfIrpWatermark @ 0x1407B0B20 (VfIrpWatermark.c)
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
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // r12
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
  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(a1, 0x746C6644u);
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
    goto LABEL_25;
  }
  v19 = a3;
  if ( a3 == 2 && a4 == 1 )
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
        goto LABEL_10;
      }
    }
    else
    {
      Irp = (IRP *)v30;
      QuadPart = (_QWORD *)Interval.QuadPart;
    }
LABEL_43:
    v28 = v34;
LABEL_24:
    if ( Irp )
      goto LABEL_25;
LABEL_36:
    v12 = a4;
    goto LABEL_39;
  }
  v21 = -1073741130;
LABEL_10:
  if ( v21 >= 0 )
  {
    v24 = *(_QWORD *)(v18 + 80);
    if ( AttachedDeviceReferenceWithTag->StackSize > *(_BYTE *)(*(_QWORD *)(v24 + 16) + 66LL) )
    {
      ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x746C6644u);
      ObfReferenceObjectWithTag(*(PVOID *)(v24 + 104), 0x746C6644u);
      AttachedDeviceReferenceWithTag = *(struct _DEVICE_OBJECT **)(v24 + 104);
    }
LABEL_20:
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
    v27 = (_QWORD *)qword_140365E68;
    if ( *(__int64 **)qword_140365E68 != &PopIrpList )
      __fastfail(3u);
    *QuadPart = &PopIrpList;
    QuadPart[1] = v27;
    *v27 = QuadPart;
    qword_140365E68 = (__int64)QuadPart;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    AttachedDeviceReferenceWithTag = 0LL;
    v28 = 0LL;
    v21 = 0;
    *a10 = Irp;
    *a11 = QuadPart;
    QuadPart = 0LL;
    goto LABEL_24;
  }
  if ( v19 )
    v30 = 0LL;
  else
    v30 = PopFxLockDevice(v18, 0LL);
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
      goto LABEL_20;
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
LABEL_25:
  if ( QuadPart )
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, QuadPart);
  if ( AttachedDeviceReferenceWithTag )
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x746C6644u);
  if ( v28 )
    ObfDereferenceObjectWithTag(v28, 0x746C6644u);
  return (unsigned int)v21;
}

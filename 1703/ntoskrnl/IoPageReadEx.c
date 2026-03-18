/*
 * XREFs of IoPageReadEx @ 0x14004AFE0
 * Callers:
 *     MiIssueHardFaultIo @ 0x140097C48 (MiIssueHardFaultIo.c)
 *     MiPageRead @ 0x14010AFC4 (MiPageRead.c)
 *     IoPageRead @ 0x140131300 (IoPageRead.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x140213D20 (MiPfIssueCoalescedSupport.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     PsGetBaseIoPriorityThread @ 0x14004AA70 (PsGetBaseIoPriorityThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14004B300 (IoSetDiskIoAttributionFromThread.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     IopSetDiskIoAttributionExtension @ 0x14012C8B4 (IopSetDiskIoAttributionExtension.c)
 *     MmIsFileObjectAPagingFile @ 0x1401300CC (MmIsFileObjectAPagingFile.c)
 *     IopAllocateBackpocketIrp @ 0x1401EF168 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401EF44C (IopAllocateReserveIrp.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 */

NTSTATUS __fastcall IoPageReadEx(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        struct _IO_STATUS_BLOCK *a5,
        char a6,
        __int64 a7)
{
  unsigned __int8 v9; // si
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  PDEVICE_OBJECT v11; // r12
  int v12; // ebp
  IRP *Irp; // rdi
  KIRQL v14; // al
  _QWORD *v15; // rbx
  KIRQL v16; // r12
  unsigned __int64 v17; // rcx
  int BaseIoPriorityThread; // edx
  struct _KTHREAD *v19; // r8
  __int64 v20; // r9
  LIST_ENTRY *p_ThreadListEntry; // rbx
  PETHREAD Thread; // rax
  struct _LIST_ENTRY *p_FirstArgument; // rsi
  unsigned __int8 CurrentIrql; // r14
  volatile signed __int64 *v25; // rbp
  struct _LIST_ENTRY *Flink; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 ReserveIrp; // rax
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v9 = (a6 & 2) == 0;
  if ( (a6 & 8) != 0 )
    v9 |= 2u;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  v11 = RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  v12 = 1027;
  if ( (a6 & 4) == 0 )
    v12 = 67;
  Irp = (IRP *)IopAllocateIrpExReturn(
                 RelatedDeviceObject,
                 (unsigned __int8)RelatedDeviceObject->StackSize,
                 0LL,
                 retaddr);
  if ( Irp )
    goto LABEL_6;
  if ( (unsigned int)MmIsFileObjectAPagingFile(a1) )
  {
    _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
    ReserveIrp = IopAllocateReserveIrp(v30, (unsigned __int8)v11->StackSize, 0LL);
  }
  else
  {
    _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
    if ( (a2->MdlFlags & 0x40) == 0 || (v12 & 0x40) == 0 )
      return -1073741670;
    LOBYTE(v31) = 1;
    ReserveIrp = IopAllocateBackpocketIrp(v11, (unsigned __int8)v11->StackSize, v31);
  }
  Irp = (IRP *)ReserveIrp;
  if ( !ReserveIrp )
    return -1073741670;
LABEL_6:
  v14 = ExAcquireSpinLockShared(&dword_14036CE78);
  v15 = (_QWORD *)qword_14036CE70;
  v16 = v14;
  if ( qword_14036CE70 )
  {
    do
    {
      v17 = *(v15 - 26);
      if ( (unsigned __int64)a1 < v17 )
      {
        v15 = (_QWORD *)*v15;
      }
      else
      {
        if ( (unsigned __int64)a1 <= v17 )
          break;
        v15 = (_QWORD *)v15[1];
      }
    }
    while ( v15 );
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14036CE78);
  __writecr8(v16);
  if ( v15 || (a2->MdlFlags & 0x40) != 0 && (v12 & 0x40) != 0 )
    Irp->AllocationFlags |= 0x20u;
  Irp->Flags = v12;
  BaseIoPriorityThread = PsGetBaseIoPriorityThread((__int64)KeGetCurrentThread());
  if ( BaseIoPriorityThread < 2 && v19 == KeGetCurrentThread() && v19[1].Timer.DueTime.LowPart )
    BaseIoPriorityThread = 2;
  if ( BaseIoPriorityThread < 2 )
  {
    if ( (v9 & 1) == 0 || (a6 & 1) == 1 || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    {
      ++IoPagingReadLowPriorityCount;
    }
    else
    {
      ++IoPagingReadLowPriorityBumpedCount;
      BaseIoPriorityThread = 2;
    }
  }
  if ( v9 >= 2u && BaseIoPriorityThread == 2 )
    BaseIoPriorityThread = 3;
  Irp->UserEvent = a4;
  Irp->MdlAddress = a2;
  Irp->RequestorMode = 0;
  Irp->UserIosb = a5;
  Irp->Flags = v12 & 0xFFF1FFFF | ((BaseIoPriorityThread << 17) + 0x20000);
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_BYTE *)(v20 - 72) = 3;
  *(_QWORD *)(v20 - 24) = a1;
  *(_DWORD *)(v20 - 64) = a2->ByteCount;
  *(_QWORD *)(v20 - 48) = *a3;
  if ( a7 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a7 + 24));
  else
    IoSetDiskIoAttributionFromThread(Irp, Irp->Tail.Overlay.Thread);
  a5->Information = (ULONG_PTR)Irp;
  p_ThreadListEntry = &Irp->ThreadListEntry;
  Thread = Irp->Tail.Overlay.Thread;
  p_FirstArgument = (struct _LIST_ENTRY *)&Thread[1].FirstArgument;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v25 = (volatile signed __int64 *)&Thread[1].WaitBlockFill11[16];
  KxAcquireSpinLock((PKSPIN_LOCK)&Thread[1].WaitBlockFill11[16]);
  Flink = p_FirstArgument->Flink;
  if ( p_FirstArgument->Flink->Blink != p_FirstArgument )
    __fastfail(3u);
  p_ThreadListEntry->Flink = Flink;
  Irp->ThreadListEntry.Blink = p_FirstArgument;
  Flink->Blink = p_ThreadListEntry;
  p_FirstArgument->Flink = p_ThreadListEntry;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v25, retaddr);
  else
    _InterlockedAnd64(v25, 0LL);
  __writecr8(CurrentIrql);
  CurrentThread = KeGetCurrentThread();
  if ( BYTE5(CurrentThread[1].Queue) || BYTE4(CurrentThread[1].Queue) == 1 )
  {
    v29 = KeGetCurrentThread();
    HIDWORD(v29[1].Timer.Header.WaitListHead.Blink) += (a2->ByteCount + 4095) >> 12;
  }
  return IofCallDriver(DeviceObject, Irp);
}

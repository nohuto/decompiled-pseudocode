/*
 * XREFs of IoSynchronousPageWriteEx @ 0x14012C59C
 * Callers:
 *     MiIssueSynchronousFlush @ 0x140025D14 (MiIssueSynchronousFlush.c)
 *     MiZeroPageWrite @ 0x14002FFC4 (MiZeroPageWrite.c)
 *     IoSynchronousPageWrite @ 0x14012C570 (IoSynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x1401599EC (MiSynchronousPageWrite.c)
 * Callees:
 *     IoSetDiskIoAttributionFromThread @ 0x14004B300 (IoSetDiskIoAttributionFromThread.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x14012C8B4 (IopSetDiskIoAttributionExtension.c)
 *     MmIsFileObjectAPagingFile @ 0x1401300CC (MmIsFileObjectAPagingFile.c)
 *     IopAllocateBackpocketIrp @ 0x1401EF168 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401EF44C (IopAllocateReserveIrp.c)
 */

NTSTATUS __fastcall IoSynchronousPageWriteEx(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        char a5,
        __int64 a6,
        struct _IO_STATUS_BLOCK *a7)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v13; // rdx
  IRP *Irp; // rbx
  int IoPriorityThread; // r8d
  __int64 v16; // r10
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 ReserveIrp; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x5EB4u);
    __addgsdword(0x5EB8u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v13) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v13, 0LL, retaddr);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile(a1) )
    {
      _InterlockedIncrement(&IoSynchronousPageWriteIrpAllocationFailure);
      LOBYTE(v19) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v20, v19, 1LL);
    }
    else
    {
      _InterlockedIncrement(&IoSynchronousPageWriteNonPagefileIrpAllocationFailure);
      LOBYTE(v19) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v19, 0LL);
    }
    Irp = (IRP *)ReserveIrp;
    if ( !ReserveIrp )
      return -1073741670;
  }
  Irp->AllocationFlags |= 0x20u;
  Irp->MdlAddress = a2;
  Irp->Flags = 67;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  if ( IoPriorityThread < 2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0
      || CurrentThread->PreviousMode == 1
      || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0
      || KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink == (struct _LIST_ENTRY *)2 )
    {
      ++IoPagingWriteLowPriorityCount;
    }
    else
    {
      ++IoPagingWriteLowPriorityBumpedCount;
      IoPriorityThread = 2;
    }
  }
  Irp->UserIosb = a7;
  Irp->RequestorMode = 0;
  Irp->UserEvent = a4;
  Irp->Flags = ((IoPriorityThread << 17) + 0x20000) | 0x43;
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_BYTE *)(v16 - 72) = 4;
  *(_DWORD *)(v16 - 64) = a2->ByteCount;
  *(_QWORD *)(v16 - 48) = *a3;
  *(_BYTE *)(v16 - 70) |= a5;
  *(_QWORD *)(v16 - 24) = a1;
  if ( a6 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a6 + 24));
  else
    IoSetDiskIoAttributionFromThread((__int64)Irp, Irp->Tail.Overlay.Thread);
  IopQueueThreadIrp((__int64)Irp);
  return IofCallDriver(RelatedDeviceObject, Irp);
}

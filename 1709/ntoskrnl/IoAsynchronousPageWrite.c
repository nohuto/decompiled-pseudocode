/*
 * XREFs of IoAsynchronousPageWrite @ 0x14012EDB0
 * Callers:
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 *     MiIssueAsynchronousFlush @ 0x14021FC34 (MiIssueAsynchronousFlush.c)
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x140008E14 (IopSetDiskIoAttributionExtension.c)
 *     MmIsFileObjectAPagingFile @ 0x140064CF0 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400668D0 (IoSetDiskIoAttributionFromThread.c)
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     IopAllocateBackpocketIrp @ 0x1401F4878 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401F4B5C (IopAllocateReserveIrp.c)
 *     StRtlIoStorInfoSetNvCachePriority @ 0x1402946E8 (StRtlIoStorInfoSetNvCachePriority.c)
 */

NTSTATUS __fastcall IoAsynchronousPageWrite(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        LARGE_INTEGER *a3,
        void (__fastcall *a4)(void *, struct _IO_STATUS_BLOCK *, _QWORD),
        void *a5,
        int a6,
        int a7,
        char a8,
        __int64 a9,
        struct _IO_STATUS_BLOCK *a10,
        IRP **a11)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v19; // rdx
  NTSTATUS result; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 ReserveIrp; // rax
  unsigned __int8 CurrentIrql; // bl

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x5E34u);
    __addgsdword(0x5E38u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  Irp = (IRP *)IopAllocateIrpExReturn();
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile((unsigned __int64)a1) )
    {
      _InterlockedAdd(&IoAsynchronousPageWriteIrpAllocationFailure, 1u);
      LOBYTE(v21) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v22, v21, 1LL);
    }
    else
    {
      _InterlockedAdd(&IoAsynchronousPageWriteNonPagefileIrpAllocationFailure, 1u);
      LOBYTE(v21) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v21, 0LL);
    }
    Irp = (IRP *)ReserveIrp;
    if ( !ReserveIrp )
      return -1073741670;
  }
  if ( a11 )
    *a11 = Irp;
  Irp->AllocationFlags |= 0x20u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->MdlAddress = a2;
  Irp->Flags = ((a6 << 17) + 0x20000) | 3;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->RequestorMode = 0;
  Irp->UserIosb = a10;
  Irp->Overlay.AllocationSize.QuadPart = (LONGLONG)a4;
  Irp->Overlay.AsynchronousParameters.UserApcContext = a5;
  CurrentStackLocation[-1].MajorFunction = 4;
  CurrentStackLocation[-1].Parameters.Read.Length = a2->ByteCount;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = *a3;
  CurrentStackLocation[-1].Flags |= a8;
  CurrentStackLocation[-1].FileObject = a1;
  if ( a9 )
    IopSetDiskIoAttributionExtension((__int64)Irp, *(_QWORD *)(a9 + 24), (__int64)KeGetCurrentThread(), 0);
  else
    IoSetDiskIoAttributionFromThread((__int64)Irp, KeGetCurrentThread());
  IopQueueThreadIrp((__int64)Irp);
  if ( a7 )
  {
    LOBYTE(v19) = a7;
    StRtlIoStorInfoSetNvCachePriority(Irp, v19);
  }
  result = IofCallDriver(RelatedDeviceObject, Irp);
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    a10->Status = result;
    a10->Information = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    a4(a5, a10, 0LL);
    __writecr8(CurrentIrql);
    return 259;
  }
  return result;
}

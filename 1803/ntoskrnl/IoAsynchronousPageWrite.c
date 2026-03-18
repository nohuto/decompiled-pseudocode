/*
 * XREFs of IoAsynchronousPageWrite @ 0x1400CCE90
 * Callers:
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 *     MiIssueAsynchronousFlush @ 0x14025B53C (MiIssueAsynchronousFlush.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x14003F0B0 (IopSetDiskIoAttributionExtension.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140048A10 (IoSetDiskIoAttributionFromThread.c)
 *     MmIsFileObjectAPagingFile @ 0x140048B54 (MmIsFileObjectAPagingFile.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     IopAllocateBackpocketIrp @ 0x140231DA8 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x14023208C (IopAllocateReserveIrp.c)
 *     StRtlIoStorInfoSetNvCachePriority @ 0x1402CA238 (StRtlIoStorInfoSetNvCachePriority.c)
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
  __int64 v17; // rdx
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v21; // rdx
  NTSTATUS result; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 ReserveIrp; // rax
  unsigned __int8 CurrentIrql; // bl
  void *retaddr; // [rsp+48h] [rbp+0h]

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x5E34u);
    __addgsdword(0x5E38u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v17) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn(RelatedDeviceObject, v17, 0LL, retaddr);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile((unsigned __int64)a1) )
    {
      _InterlockedAdd(&IoAsynchronousPageWriteIrpAllocationFailure, 1u);
      LOBYTE(v23) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v24, v23, 1LL);
    }
    else
    {
      _InterlockedAdd(&IoAsynchronousPageWriteNonPagefileIrpAllocationFailure, 1u);
      LOBYTE(v23) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v23, 0LL);
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
  CurrentThread = KeGetCurrentThread();
  if ( a9 )
    IopSetDiskIoAttributionExtension((__int64)Irp, *(_QWORD *)(a9 + 24), (__int64)CurrentThread, 0);
  else
    IoSetDiskIoAttributionFromThread((__int64)Irp, CurrentThread);
  IopQueueThreadIrp(Irp);
  if ( a7 )
  {
    LOBYTE(v21) = a7;
    StRtlIoStorInfoSetNvCachePriority(Irp, v21);
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

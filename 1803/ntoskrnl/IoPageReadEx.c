/*
 * XREFs of IoPageReadEx @ 0x140048610
 * Callers:
 *     MiPageRead @ 0x1400485DC (MiPageRead.c)
 *     MiIssueHardFaultIo @ 0x140057CF4 (MiIssueHardFaultIo.c)
 *     IoPageRead @ 0x14014CCD0 (IoPageRead.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x140257EB0 (MiPfIssueCoalescedSupport.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x14003F0B0 (IopSetDiskIoAttributionExtension.c)
 *     MmIsRecursiveIoFault @ 0x140048810 (MmIsRecursiveIoFault.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140048A10 (IoSetDiskIoAttributionFromThread.c)
 *     MmIsFileObjectAPagingFile @ 0x140048B54 (MmIsFileObjectAPagingFile.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     IopAllocateBackpocketIrp @ 0x140231DA8 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x14023208C (IopAllocateReserveIrp.c)
 */

NTSTATUS __fastcall IoPageReadEx(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  unsigned __int8 v10; // r15
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  __int64 v12; // rdx
  int v13; // esi
  __int64 Irp; // rbx
  int IoPriorityThread; // eax
  __int64 v16; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 ReserveIrp; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v10 = ((a6 & 2) == 0) | 2;
  if ( (a6 & 8) == 0 )
    v10 = (a6 & 2) == 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v12) = RelatedDeviceObject->StackSize;
  v13 = (a6 & 4) != 0 ? 1027 : 67;
  Irp = IopAllocateIrpExReturn(RelatedDeviceObject, v12, 0LL, retaddr);
  if ( Irp )
    goto LABEL_4;
  if ( (unsigned int)MmIsFileObjectAPagingFile(a1) )
  {
    _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
    LOBYTE(v19) = RelatedDeviceObject->StackSize;
    ReserveIrp = IopAllocateReserveIrp(v20, v19, 0LL);
  }
  else
  {
    _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
    if ( (*(_WORD *)(a2 + 10) & 0x40) == 0 || (v13 & 0x40) == 0 )
      return -1073741670;
    LOBYTE(v19) = RelatedDeviceObject->StackSize;
    LOBYTE(v21) = 1;
    ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v19, v21);
  }
  Irp = ReserveIrp;
  if ( !ReserveIrp )
    return -1073741670;
LABEL_4:
  if ( (unsigned int)MmIsFileObjectAPagingFile(a1) || (*(_WORD *)(a2 + 10) & 0x40) != 0 && (v13 & 0x40) != 0 )
    *(_BYTE *)(Irp + 71) |= 0x20u;
  *(_DWORD *)(Irp + 16) = v13;
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread());
  if ( IoPriorityThread < 2 )
  {
    if ( (v10 & 1) == 0 || (a6 & 1) == 1 || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    {
      ++IoPagingReadLowPriorityCount;
    }
    else
    {
      ++IoPagingReadLowPriorityBumpedCount;
      IoPriorityThread = 2;
    }
  }
  if ( v10 >= 2u && IoPriorityThread == 2 )
    IoPriorityThread = 3;
  *(_QWORD *)(Irp + 8) = a2;
  *(_BYTE *)(Irp + 64) = 0;
  *(_DWORD *)(Irp + 16) = v13 | ((IoPriorityThread << 17) + 0x20000);
  *(_QWORD *)(Irp + 72) = a5;
  *(_QWORD *)(Irp + 80) = a4;
  *(_QWORD *)(Irp + 112) = *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
  *(_QWORD *)(Irp + 192) = a1;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v16 - 72) = 3;
  *(_QWORD *)(v16 - 24) = a1;
  *(_DWORD *)(v16 - 64) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(v16 - 48) = *a3;
  if ( a7 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a7 + 24), *(_QWORD *)(Irp + 152), 0);
  else
    IoSetDiskIoAttributionFromThread(Irp, *(_QWORD *)(Irp + 152));
  *(_QWORD *)(a5 + 8) = Irp;
  IopQueueThreadIrp(Irp);
  if ( MmIsRecursiveIoFault() )
  {
    CurrentThread = KeGetCurrentThread();
    HIDWORD(CurrentThread[1].Timer.Header.WaitListHead.Blink) += (unsigned int)(*(_DWORD *)(a2 + 40) + 4095) >> 12;
  }
  return IofCallDriver(RelatedDeviceObject, (PIRP)Irp);
}

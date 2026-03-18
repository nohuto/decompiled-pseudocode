/*
 * XREFs of IoPageReadEx @ 0x140064A60
 * Callers:
 *     MiPageRead @ 0x1400258EC (MiPageRead.c)
 *     MiIssueHardFaultIo @ 0x140116084 (MiIssueHardFaultIo.c)
 *     IoPageRead @ 0x140130D90 (IoPageRead.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x14021BD28 (MiPfIssueCoalescedSupport.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x140008E14 (IopSetDiskIoAttributionExtension.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     MmIsRecursiveIoFault @ 0x140064CC0 (MmIsRecursiveIoFault.c)
 *     MmIsFileObjectAPagingFile @ 0x140064CF0 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400668D0 (IoSetDiskIoAttributionFromThread.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateBackpocketIrp @ 0x1401F4878 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401F4B5C (IopAllocateReserveIrp.c)
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
  char v9; // si
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v12; // r13
  int v13; // ebp
  __int64 Irp; // rbx
  int IoPriorityThread; // eax
  __int64 v16; // r8
  _QWORD *v17; // rsi
  __int64 v18; // rax
  __int64 *v19; // r14
  unsigned __int8 CurrentIrql; // r15
  KSPIN_LOCK *v21; // rbp
  __int64 v22; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 ReserveIrp; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v9 = (a6 & 2) == 0;
  if ( (a6 & 8) != 0 )
    v9 |= 2u;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  v12 = RelatedDeviceObject;
  v13 = 1027;
  if ( (a6 & 4) == 0 )
    v13 = 67;
  Irp = IopAllocateIrpExReturn(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL, retaddr);
  if ( Irp )
    goto LABEL_6;
  if ( (unsigned int)MmIsFileObjectAPagingFile(a1) )
  {
    _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
    ReserveIrp = IopAllocateReserveIrp(v25, (unsigned __int8)v12->StackSize, 0LL);
  }
  else
  {
    _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
    if ( (*(_WORD *)(a2 + 10) & 0x40) == 0 || (v13 & 0x40) == 0 )
      return -1073741670;
    LOBYTE(v26) = 1;
    ReserveIrp = IopAllocateBackpocketIrp(v12, (unsigned __int8)v12->StackSize, v26);
  }
  Irp = ReserveIrp;
  if ( !ReserveIrp )
    return -1073741670;
LABEL_6:
  if ( (unsigned int)MmIsFileObjectAPagingFile(a1) || (*(_WORD *)(a2 + 10) & 0x40) != 0 && (v13 & 0x40) != 0 )
    *(_BYTE *)(Irp + 71) |= 0x20u;
  *(_DWORD *)(Irp + 16) = v13;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  if ( IoPriorityThread < 2 )
  {
    if ( (v9 & 1) == 0 || (a6 & 1) == 1 || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    {
      ++IoPagingReadLowPriorityCount;
    }
    else
    {
      ++IoPagingReadLowPriorityBumpedCount;
      IoPriorityThread = 2;
    }
  }
  if ( (v9 & 2) != 0 && IoPriorityThread == 2 )
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
  v17 = (_QWORD *)(Irp + 32);
  v18 = *(_QWORD *)(Irp + 152);
  v19 = (__int64 *)(v18 + 1648);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v21 = (KSPIN_LOCK *)(v18 + 1856);
  KxAcquireSpinLock((PKSPIN_LOCK)(v18 + 1856));
  v22 = *v19;
  if ( *(__int64 **)(*v19 + 8) != v19 )
    __fastfail(3u);
  *v17 = v22;
  *(_QWORD *)(Irp + 40) = v19;
  *(_QWORD *)(v22 + 8) = v17;
  *v19 = (__int64)v17;
  KxReleaseSpinLock(v21);
  __writecr8(CurrentIrql);
  if ( MmIsRecursiveIoFault() )
  {
    CurrentThread = KeGetCurrentThread();
    HIDWORD(CurrentThread[1].Timer.Header.WaitListHead.Blink) += (unsigned int)(*(_DWORD *)(a2 + 40) + 4095) >> 12;
  }
  return IofCallDriver(v12, (PIRP)Irp);
}

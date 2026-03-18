/*
 * XREFs of IopSynchronousServiceTail @ 0x14059D990
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x1404D0BE0 (NtQueryVolumeInformationFile.c)
 *     NtWriteFile @ 0x1404D10C0 (NtWriteFile.c)
 *     NtLockFile @ 0x1404E39A0 (NtLockFile.c)
 *     NtReadFile @ 0x14052A160 (NtReadFile.c)
 *     NtUnlockFile @ 0x140557DC0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x140560E8C (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x140564750 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140572550 (NtNotifyChangeDirectoryFileEx.c)
 *     NtWriteFileGather @ 0x140580364 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1405810E8 (NtReadFileScatter.c)
 *     NtQueryDirectoryFileEx @ 0x140596030 (NtQueryDirectoryFileEx.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 *     NtSetVolumeInformationFile @ 0x1405E59A0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14071AB3C (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14071DE80 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14071E4E0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IoSetDiskIoAttributionFromThread @ 0x140048A10 (IoSetDiskIoAttributionFromThread.c)
 *     IopGetFileObjectExtension @ 0x140069628 (IopGetFileObjectExtension.c)
 *     IoSetActivityIdThread @ 0x140075980 (IoSetActivityIdThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     IoGetIoPriorityHint @ 0x1400A55F0 (IoGetIoPriorityHint.c)
 *     IopQueueIrpToFileObject @ 0x1400A99E0 (IopQueueIrpToFileObject.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PsIsProcessAppContainer @ 0x14058A3A4 (PsIsProcessAppContainer.c)
 *     IopCancelAlertedRequest @ 0x14071957C (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopSynchronousServiceTail(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        unsigned int a7)
{
  LARGE_INTEGER AllocationSize; // rax
  _QWORD *v8; // rdi
  __int64 v11; // r12
  __int64 FileObjectExtension; // r14
  _DWORD *v13; // rax
  struct _KTHREAD *v14; // rax
  unsigned int v15; // eax
  char *v16; // rbp
  PVOID v17; // r12
  __int64 v18; // rcx
  struct _KTHREAD *v19; // r8
  unsigned int v20; // edx
  ULONG v21; // eax
  int v22; // edx
  IO_PRIORITY_HINT IoPriorityHint; // edx
  __int64 v24; // rdx
  unsigned int v25; // r14d
  _BYTE *v27; // rsi
  int v28; // edi
  KPROCESSOR_MODE v29; // al
  NTSTATUS v30; // eax
  PVOID v31; // rbx
  struct _KTHREAD *v32; // rax
  bool v33; // zf
  unsigned __int8 CurrentIrql; // di
  ULONG DeviceType; // eax
  struct _KTHREAD *CurrentThread; // rax
  PETHREAD Thread; // rax
  ULONG Flags; // eax
  PIO_STATUS_BLOCK UserIosb; // rcx
  PVOID v40; // rdi
  bool v41; // cl
  unsigned __int8 v42; // al
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  __int64 v45; // [rsp+40h] [rbp-68h]
  __int64 v46; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v47[8]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v48; // [rsp+58h] [rbp-50h] BYREF

  AllocationSize = Irp->Overlay.AllocationSize;
  v8 = (_QWORD *)a3;
  Object = (PVOID)a3;
  if ( (AllocationSize.LowPart & 1) != 0 )
  {
    Irp->AllocationFlags |= 0x10u;
    AllocationSize.QuadPart &= ~1uLL;
    Irp->Overlay.AllocationSize = AllocationSize;
  }
  v11 = *(_QWORD *)(a3 + 176);
  v45 = v11;
  if ( a6 || AllocationSize.QuadPart )
  {
    if ( (*(_DWORD *)(a3 + 80) & 2) != 0 )
      Irp->AllocationFlags |= 2u;
    goto LABEL_13;
  }
  if ( Irp->Overlay.AsynchronousParameters.UserApcContext && !Irp->UserEvent && v11 )
  {
    if ( IopQueueIrpToFileObject((__int64)Irp, a3) )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( (Irp->Flags & 0x10) != 0
    || v11
    || !*(_QWORD *)(a3 + 208)
    || (FileObjectExtension = IopGetFileObjectExtension(a3, 2, 0LL)) == 0 )
  {
LABEL_13:
    IopQueueThreadIrp((__int64)Irp);
    goto LABEL_14;
  }
  while ( 1 )
  {
    UserIosb = Irp->UserIosb;
    if ( (unsigned __int64)UserIosb >= *(_QWORD *)FileObjectExtension
      && (unsigned __int64)&UserIosb[1] <= *(_QWORD *)(FileObjectExtension + 8) )
    {
      v8 = Object;
      if ( *(_KPROCESS **)(FileObjectExtension + 32) == KeGetCurrentThread()->ApcState.Process )
      {
        if ( IopQueueIrpToFileObject((__int64)Irp, (__int64)Object) )
          break;
      }
    }
    FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40);
    if ( !FileObjectExtension )
      goto LABEL_13;
  }
  Irp->UserIosb = (PIO_STATUS_BLOCK)((char *)Irp->UserIosb
                                   + *(_QWORD *)(FileObjectExtension + 24)
                                   - *(_QWORD *)FileObjectExtension);
LABEL_14:
  v13 = (_DWORD *)v8[26];
  if ( v13 && (*v13 & 4) != 0 && PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
  {
    v25 = -1073739504;
    Irp->IoStatus.Status = -1073739504;
    IofCompleteRequest(Irp, 0);
    v16 = (char *)Object;
    goto LABEL_32;
  }
  if ( a7 <= 1 )
  {
    DeviceType = DeviceObject->DeviceType;
    if ( DeviceType == 8 || DeviceType == 7 || DeviceType == 9 || DeviceType == 36 )
      IoSetDiskIoAttributionFromThread((__int64)Irp, KeGetCurrentThread());
    CurrentThread = KeGetCurrentThread();
    if ( a7 )
    {
      ++CurrentThread->WriteOperationCount;
      v15 = 12000;
    }
    else
    {
      ++CurrentThread->ReadOperationCount;
      v15 = 11996;
    }
  }
  else
  {
    v14 = KeGetCurrentThread();
    ++v14->OtherOperationCount;
    v15 = 12004;
  }
  __incgsdword(v15);
  v16 = (char *)Object;
  v17 = Object;
  if ( !a6 )
    ObfReferenceObject(Object);
  v18 = v8[26];
  if ( v18 && *(_DWORD *)(v18 + 80) )
  {
    v21 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v21;
    v22 = *(_DWORD *)(v18 + 80) << 17;
  }
  else
  {
    v19 = KeGetCurrentThread();
    v20 = (*((_DWORD *)&v19[1].SwapListEntry + 2) >> 9) & 7;
    if ( (v19->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      v20 = 0;
    if ( v20 < 2 && v19 == KeGetCurrentThread() && v19[1].Timer.DueTime.LowPart )
      v20 = 2;
    v16 = (char *)Object;
    v21 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v21;
    v22 = (v20 << 17) + 0x20000;
  }
  Irp->Flags = v21 | v22;
  IoPriorityHint = IoGetIoPriorityHint(Irp);
  if ( Irp->RequestorMode )
    goto LABEL_25;
  if ( IoPriorityHint < IoPriorityNormal )
  {
    Thread = Irp->Tail.Overlay.Thread;
    if ( Thread && ((Thread->MiscFlags & 0x400) != 0 || (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x80u) != 0) )
    {
LABEL_25:
      if ( IoPriorityHint < IoPriorityNormal )
      {
        if ( a7 )
        {
          if ( a7 == 1 )
            ++IoLowPriorityWriteOperationCount;
        }
        else
        {
          ++IoLowPriorityReadOperationCount;
        }
      }
      goto LABEL_26;
    }
    Flags = Irp->Flags;
    ++IoKernelIssuedIoBoostedCount;
    Irp->Flags = Flags & 0xFFF1FFFF | 0x60000;
  }
LABEL_26:
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v24 = *((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0
    && (*(_BYTE *)v24 & 2) != 0 )
  {
    v48 = *(_OWORD *)(v24 + 24);
    v40 = IoSetActivityIdThread(&v48);
    v25 = IofCallDriver(DeviceObject, Irp);
    IoSetActivityIdThread(v40);
  }
  else
  {
    v25 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a6 )
    ObDereferenceObjectDeferDelete(v17);
  v11 = v45;
LABEL_32:
  if ( a4 && v25 != 259 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)v47, &v46, (__int64 *)&Object, &v46);
    __writecr8(CurrentIrql);
  }
  if ( a6 )
  {
    if ( v25 == 259 )
    {
      v27 = v16 + 152;
      v28 = *((_DWORD *)v16 + 20) & 4;
      while ( (*v27 & 0x7F) != 0 || !*((_DWORD *)v16 + 39) )
      {
        v29 = v28 ? a5 : 0;
        v30 = KeWaitForSingleObject(v27, Executive, v29, 1u, 0LL);
        if ( v30 != 257 && v30 != 192 )
          break;
        if ( !v28 )
        {
          v16 = (char *)Object;
          if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
          {
            v41 = 0;
            v42 = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( !*((_DWORD *)Object + 39) )
              v41 = Irp->Cancel == 1;
            __writecr8(v42);
            if ( !v41 )
              continue;
          }
        }
        IopCancelAlertedRequest(v27, Irp);
        break;
      }
      v25 = *((_DWORD *)v16 + 14);
    }
    _InterlockedExchange((volatile __int32 *)v16 + 29, 0);
    v31 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v31);
    v32 = KeGetCurrentThread();
    v33 = v32->KernelApcDisable++ == -1;
    if ( v33
      && ($005F0E83B22994B61E86C72E0CE43C71 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
      && !v32->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else if ( v11 && (v25 & 0xC0000000) == 0x80000000 )
  {
    return 259LL;
  }
  return v25;
}

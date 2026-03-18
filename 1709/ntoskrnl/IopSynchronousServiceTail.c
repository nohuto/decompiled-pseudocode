/*
 * XREFs of IopSynchronousServiceTail @ 0x1404AD220
 * Callers:
 *     NtSetEaFile @ 0x14044F5E0 (NtSetEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x140490C90 (NtQueryVolumeInformationFile.c)
 *     NtLockFile @ 0x1404924A0 (NtLockFile.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     NtQueryDirectoryFileEx @ 0x1404CB200 (NtQueryDirectoryFileEx.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     NtReadFileScatter @ 0x1405616E4 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140561D0C (NtWriteFileGather.c)
 *     NtReadFile @ 0x140562BE0 (NtReadFile.c)
 *     NtUnlockFile @ 0x14056D1B0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x140572CD0 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x140575154 (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140582FC0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetVolumeInformationFile @ 0x1405E06C0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406B5E40 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1406B9540 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14002469C (IopGetFileObjectExtension.c)
 *     IoGetIoPriorityHint @ 0x140061250 (IoGetIoPriorityHint.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400668D0 (IoSetDiskIoAttributionFromThread.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     IoSetActivityIdThread @ 0x1400FB290 (IoSetActivityIdThread.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     IopQueueIrpToFileObject @ 0x140103ED0 (IopQueueIrpToFileObject.c)
 *     IopIsProcessAppContainer @ 0x14012BDD8 (IopIsProcessAppContainer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     IopCancelAlertedRequest @ 0x1405EF31C (IopCancelAlertedRequest.c)
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
  PIO_APC_ROUTINE UserApcRoutine; // rax
  _QWORD *v8; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // rax
  struct _KTHREAD *v14; // rax
  char *v15; // r14
  __int64 v16; // rax
  struct _KTHREAD *v17; // r8
  unsigned int v18; // edx
  IO_PRIORITY_HINT IoPriorityHint; // edx
  __int64 v20; // rdx
  unsigned int v21; // ebp
  bool v23; // si
  _BYTE *v24; // rdi
  KPROCESSOR_MODE v25; // al
  NTSTATUS v26; // eax
  PVOID v27; // rbx
  struct _KTHREAD *v28; // rax
  $B476B70DB57F76B110DA5B9238C3E934 *v30; // rcx
  __int64 FileObjectExtension; // r14
  unsigned __int8 CurrentIrql; // di
  ULONG DeviceType; // eax
  struct _KTHREAD *CurrentThread; // rax
  ULONG v35; // ecx
  PETHREAD Thread; // rax
  ULONG Flags; // eax
  PIO_STATUS_BLOCK UserIosb; // rcx
  PVOID v39; // rdi
  bool v40; // cl
  unsigned __int8 v41; // al
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  __int64 v43; // [rsp+38h] [rbp-70h] BYREF
  __int64 v44; // [rsp+40h] [rbp-68h]
  _BYTE v45[8]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v46; // [rsp+50h] [rbp-58h] BYREF

  UserApcRoutine = Irp->Overlay.AsynchronousParameters.UserApcRoutine;
  v8 = (_QWORD *)a3;
  Object = (PVOID)a3;
  if ( ((unsigned __int8)UserApcRoutine & 1) != 0 )
  {
    Irp->AllocationFlags |= 0x10u;
    Irp->Overlay.AllocationSize.QuadPart = (unsigned __int64)UserApcRoutine & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v12 = *(_QWORD *)(a3 + 176);
  v44 = v12;
  if ( a6 || Irp->Overlay.AllocationSize.QuadPart )
  {
    if ( (*(_DWORD *)(a3 + 80) & 2) != 0 )
      Irp->AllocationFlags |= 2u;
    goto LABEL_12;
  }
  if ( Irp->Overlay.AsynchronousParameters.UserApcContext && !Irp->UserEvent && v12 )
  {
    if ( !IopQueueIrpToFileObject((__int64)Irp, a3) )
LABEL_12:
      IopQueueThreadIrp((__int64)Irp);
  }
  else
  {
    if ( (Irp->Flags & 0x10) != 0 )
      goto LABEL_12;
    if ( v12 )
      goto LABEL_12;
    if ( !*(_QWORD *)(a3 + 208) )
      goto LABEL_12;
    FileObjectExtension = IopGetFileObjectExtension(a3, 2, 0LL);
    if ( !FileObjectExtension )
      goto LABEL_12;
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
        goto LABEL_12;
    }
    Irp->UserIosb = (PIO_STATUS_BLOCK)((char *)Irp->UserIosb
                                     + *(_QWORD *)(FileObjectExtension + 24)
                                     - *(_QWORD *)FileObjectExtension);
  }
  v13 = (_DWORD *)v8[26];
  if ( v13 && (*v13 & 4) != 0 && IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
  {
    v21 = -1073739504;
    Irp->IoStatus.Status = -1073739504;
    IofCompleteRequest(Irp, 0);
    v15 = (char *)Object;
    goto LABEL_30;
  }
  if ( a7 <= 1 )
  {
    DeviceType = DeviceObject->DeviceType;
    if ( (DeviceType < 0xA || DeviceType >= 0x24) && DeviceType >= 7 && (DeviceType <= 9 || DeviceType == 36) )
      IoSetDiskIoAttributionFromThread((__int64)Irp, KeGetCurrentThread());
    CurrentThread = KeGetCurrentThread();
    if ( a7 )
    {
      ++CurrentThread->WriteOperationCount;
      __incgsdword(0x2EE0u);
    }
    else
    {
      ++CurrentThread->ReadOperationCount;
      __incgsdword(0x2EDCu);
    }
  }
  else
  {
    v14 = KeGetCurrentThread();
    ++v14->OtherOperationCount;
    __incgsdword(0x2EE4u);
  }
  v15 = (char *)Object;
  if ( !a6 )
    ObfReferenceObject(Object);
  v16 = v8[26];
  if ( v16 && *(_DWORD *)(v16 + 80) )
  {
    v35 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v35;
    Irp->Flags = v35 | (*(_DWORD *)(v16 + 80) << 17);
  }
  else
  {
    v17 = KeGetCurrentThread();
    v18 = (*((_DWORD *)&v17[1].SwapListEntry + 2) >> 9) & 7;
    if ( (v17->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      v18 = 0;
    if ( v18 < 2 && v17 == KeGetCurrentThread() && v17[1].Timer.DueTime.LowPart )
      v18 = 2;
    v15 = (char *)Object;
    Irp->Flags = Irp->Flags & 0xFFF1FFFF | ((v18 << 17) + 0x20000);
  }
  IoPriorityHint = IoGetIoPriorityHint(Irp);
  if ( Irp->RequestorMode )
    goto LABEL_24;
  if ( IoPriorityHint < IoPriorityNormal )
  {
    Thread = Irp->Tail.Overlay.Thread;
    if ( Thread && ((Thread->MiscFlags & 0x400) != 0 || (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x80u) != 0) )
    {
LABEL_24:
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
      goto LABEL_25;
    }
    Flags = Irp->Flags;
    ++IoKernelIssuedIoBoostedCount;
    Irp->Flags = Flags & 0xFFF1FFFF | 0x60000;
  }
LABEL_25:
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v20 = *((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0
    && (*(_BYTE *)v20 & 2) != 0 )
  {
    v46 = *(_OWORD *)(v20 + 24);
    v39 = IoSetActivityIdThread(&v46);
    v21 = IofCallDriver(DeviceObject, Irp);
    IoSetActivityIdThread(v39);
  }
  else
  {
    v21 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a6 )
    ObDereferenceObjectDeferDelete(v15);
LABEL_30:
  if ( a4 && v21 != 259 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)v45, &v43, (__int64 *)&Object, &v43);
    __writecr8(CurrentIrql);
  }
  if ( a6 )
  {
    if ( v21 == 259 )
    {
      v23 = (*((_DWORD *)v15 + 20) & 4) != 0;
      v24 = v15 + 152;
      while ( (*v24 & 0x7F) != 0 || !*((_DWORD *)v15 + 39) )
      {
        v25 = v23 ? a5 : 0;
        v26 = KeWaitForSingleObject(v24, Executive, v25, 1u, 0LL);
        if ( v26 != 257 && v26 != 192 )
          break;
        if ( !v23 )
        {
          v15 = (char *)Object;
          if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
          {
            v40 = 0;
            v41 = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( !*((_DWORD *)Object + 39) )
              v40 = Irp->Cancel == 1;
            __writecr8(v41);
            if ( !v40 )
              continue;
          }
        }
        IopCancelAlertedRequest(v24, Irp);
        break;
      }
      v21 = *((_DWORD *)v15 + 14);
    }
    _InterlockedExchange((volatile __int32 *)v15 + 29, 0);
    v27 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v27);
    v28 = KeGetCurrentThread();
    if ( v28->KernelApcDisable++ == -1 )
    {
      v30 = &v28->152;
      if ( ($B476B70DB57F76B110DA5B9238C3E934 *)v30->ApcState.ApcListHead[0].Flink != v30 && !v28->SpecialApcDisable )
        KiCheckForKernelApcDelivery((__int64)v30);
    }
  }
  else if ( v44 && (v21 & 0xC0000000) == 0x80000000 )
  {
    return 259LL;
  }
  return v21;
}

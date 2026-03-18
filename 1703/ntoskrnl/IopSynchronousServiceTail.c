/*
 * XREFs of IopSynchronousServiceTail @ 0x14053A760
 * Callers:
 *     NtUnlockFile @ 0x14043BA90 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x14043F120 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x1404401B4 (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFile @ 0x140445BB0 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x14044F2A0 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404507E0 (NtReadFileScatter.c)
 *     NtQueryDirectoryFile @ 0x14047F390 (NtQueryDirectoryFile.c)
 *     NtQueryVolumeInformationFile @ 0x1404812E0 (NtQueryVolumeInformationFile.c)
 *     NtWriteFile @ 0x1404818C0 (NtWriteFile.c)
 *     NtLockFile @ 0x14048B220 (NtLockFile.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     NtReadFile @ 0x140566B00 (NtReadFile.c)
 *     NtSetVolumeInformationFile @ 0x140574C30 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14068A1D8 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14068D200 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14068D860 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopIsProcessAppContainer @ 0x140005C2C (IopIsProcessAppContainer.c)
 *     IopQueueIrpToFileObject @ 0x14000DCA0 (IopQueueIrpToFileObject.c)
 *     IoGetIoPriorityHint @ 0x14004AF20 (IoGetIoPriorityHint.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14004B300 (IoSetDiskIoAttributionFromThread.c)
 *     IopGetFileObjectExtension @ 0x1400511D0 (IopGetFileObjectExtension.c)
 *     EtwActivityIdControlKernel @ 0x1400802C0 (EtwActivityIdControlKernel.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     IopCancelAlertedRequest @ 0x140430F4C (IopCancelAlertedRequest.c)
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
  _QWORD *v8; // rbx
  __int64 v12; // rcx
  __int64 FileObjectExtension; // r14
  _DWORD *v14; // rax
  struct _KTHREAD *v15; // rax
  char *v16; // r14
  __int64 v17; // rax
  struct _KTHREAD *v18; // r8
  unsigned int v19; // eax
  ULONG v20; // ecx
  int v21; // eax
  IO_PRIORITY_HINT IoPriorityHint; // edx
  _BYTE *v23; // rax
  unsigned int v24; // ebp
  _DWORD *v26; // rsi
  int v27; // ebx
  KPROCESSOR_MODE v28; // al
  NTSTATUS v29; // eax
  PVOID v30; // rbx
  struct _KTHREAD *v31; // rax
  __int16 v32; // cx
  $69CD3F157F9F39B6F7113F2231989901 *v33; // rcx
  unsigned __int8 CurrentIrql; // bl
  ULONG DeviceType; // eax
  struct _KTHREAD *CurrentThread; // rax
  PETHREAD Thread; // rax
  ULONG Flags; // eax
  PIO_STATUS_BLOCK UserIosb; // rcx
  __int64 v40; // r9
  bool v41; // cl
  unsigned __int8 v42; // al
  PVOID Object; // [rsp+30h] [rbp-88h] BYREF
  __int128 *v44; // [rsp+38h] [rbp-80h] BYREF
  PVOID v45; // [rsp+40h] [rbp-78h] BYREF
  PVOID v46; // [rsp+48h] [rbp-70h] BYREF
  __int64 v47; // [rsp+50h] [rbp-68h] BYREF
  __int64 v48; // [rsp+58h] [rbp-60h]
  _BYTE v49[8]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v50; // [rsp+68h] [rbp-50h] BYREF

  UserApcRoutine = Irp->Overlay.AsynchronousParameters.UserApcRoutine;
  v8 = (_QWORD *)a3;
  Object = (PVOID)a3;
  if ( ((unsigned __int8)UserApcRoutine & 1) != 0 )
  {
    Irp->AllocationFlags |= 0x10u;
    Irp->Overlay.AllocationSize.QuadPart = (unsigned __int64)UserApcRoutine & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v12 = *(_QWORD *)(a3 + 176);
  v48 = v12;
  if ( a6 || Irp->Overlay.AllocationSize.QuadPart )
  {
    if ( (*(_DWORD *)(a3 + 80) & 2) != 0 )
      Irp->AllocationFlags |= 2u;
    goto LABEL_13;
  }
  if ( Irp->Overlay.AsynchronousParameters.UserApcContext && !Irp->UserEvent && v12 )
  {
    if ( IopQueueIrpToFileObject((__int64)Irp, a3) )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( (Irp->Flags & 0x10) != 0
    || v12
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
  v14 = (_DWORD *)v8[26];
  if ( v14 && (*v14 & 4) != 0 && IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
  {
    v24 = -1073739504;
    Irp->IoStatus.Status = -1073739504;
    IofCompleteRequest(Irp, 0);
    v16 = (char *)Object;
    goto LABEL_31;
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
    v15 = KeGetCurrentThread();
    ++v15->OtherOperationCount;
    __incgsdword(0x2EE4u);
  }
  v16 = (char *)Object;
  if ( !a6 )
    ObfReferenceObject(Object);
  v17 = v8[26];
  if ( v17 && *(_DWORD *)(v17 + 72) )
  {
    v20 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v20;
    v21 = *(_DWORD *)(v17 + 72) << 17;
  }
  else
  {
    v18 = KeGetCurrentThread();
    v19 = (*((_DWORD *)&v18[1].SwapListEntry + 2) >> 9) & 7;
    if ( (v18->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      v19 = 0;
    if ( v19 < 2 && v18 == KeGetCurrentThread() && v18[1].Timer.DueTime.LowPart )
      v19 = 2;
    v16 = (char *)Object;
    v20 = Irp->Flags & 0xFFF1FFFF;
    v21 = (v19 << 17) + 0x20000;
  }
  Irp->Flags = v20 | v21;
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
    && (v23 = (_BYTE *)*((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0LL
    && (*v23 & 2) != 0 )
  {
    EtwActivityIdControlKernel(1, &v45);
    v40 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
    v44 = &v50;
    v50 = *(_OWORD *)(v40 + 24);
    EtwActivityIdControlKernel(2, (PVOID *)&v44);
    v24 = IofCallDriver(DeviceObject, Irp);
    v46 = v45;
    EtwActivityIdControlKernel(2, &v46);
  }
  else
  {
    v24 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a6 )
    ObDereferenceObjectDeferDelete(v16);
LABEL_31:
  if ( a4 && v24 != 259 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)v49, &v47, (__int64 *)&Object, &v47);
    __writecr8(CurrentIrql);
  }
  if ( a6 )
  {
    if ( v24 == 259 )
    {
      v26 = v16 + 152;
      v27 = *((_DWORD *)v16 + 20) & 4;
      while ( 1 )
      {
        v28 = v27 ? a5 : 0;
        v29 = KeWaitForSingleObject(v26, Executive, v28, 1u, 0LL);
        if ( v29 != 257 && v29 != 192 )
          break;
        if ( !v27 )
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
        IopCancelAlertedRequest(v26, Irp);
        break;
      }
      v24 = *((_DWORD *)v16 + 14);
    }
    _InterlockedExchange((volatile __int32 *)v16 + 29, 0);
    v30 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v30);
    v31 = KeGetCurrentThread();
    v32 = v31->KernelApcDisable + 1;
    v31->KernelApcDisable = v32;
    if ( !v32 )
    {
      v33 = &v31->152;
      if ( ($69CD3F157F9F39B6F7113F2231989901 *)v33->ApcState.ApcListHead[0].Flink != v33 && !v31->SpecialApcDisable )
        KiCheckForKernelApcDelivery((__int64)v33);
    }
  }
  else if ( v48 && (v24 & 0xC0000000) == 0x80000000 )
  {
    return 259LL;
  }
  return v24;
}

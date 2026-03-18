/*
 * XREFs of IoSetInformation @ 0x1405E7BF0
 * Callers:
 *     MiAttemptPageFileReduction @ 0x14025EC74 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileExtension @ 0x14074E7F8 (MiAttemptPageFileExtension.c)
 *     PopDeleteHiberFile @ 0x1407625E8 (PopDeleteHiberFile.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     IopOpenLinkOrRenameTarget @ 0x140576138 (IopOpenLinkOrRenameTarget.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x14071957C (IopCancelAlertedRequest.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14071CDA4 (IopSetFileMemoryPartitionInformation.c)
 */

NTSTATUS __stdcall IoSetInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation)
{
  struct _KTHREAD *CurrentThread; // rax
  char v8; // r13
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _DEVICE_OBJECT *v12; // r12
  __int64 Irp; // rax
  IRP *v14; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  NTSTATUS FinalStatus; // esi
  NTSTATUS v19; // edi
  ULONG Flags; // ecx
  ULONG v21; // ecx
  ULONG v22; // ecx
  CCHAR v23; // dl
  NTSTATUS v24; // eax
  BOOLEAN v25; // al
  char v26; // [rsp+30h] [rbp-40h]
  char v27[7]; // [rsp+31h] [rbp-3Fh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+28h]
  char v32; // [rsp+A0h] [rbp+30h]

  Handle = 0LL;
  v32 = 0;
  v29[0] = 0LL;
  v29[1] = 0LL;
  ObfReferenceObject(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v19 = IopAcquireFileObjectLock((char *)FileObject, 0, (FileObject->Flags & 4) != 0, v27);
      if ( v27[0] )
      {
        ObfDereferenceObject(FileObject);
        return v19;
      }
    }
    else
    {
      ObfReferenceObject(FileObject);
    }
    KeResetEvent(&FileObject->Event);
    v8 = 1;
    v26 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v8 = 0;
    v26 = 0;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v12 = RelatedDeviceObject;
  switch ( FileInformationClass )
  {
    case FileRenameInformationBypassAccessCheck:
      FileInformationClass = FileRenameInformation;
      break;
    case FileRenameInformationExBypassAccessCheck:
      FileInformationClass = FileRenameInformationEx;
      break;
    case FileLinkInformationBypassAccessCheck:
      FileInformationClass = FileLinkInformation;
      break;
    default:
      goto LABEL_8;
  }
  v32 = 1;
LABEL_8:
  LOBYTE(v10) = RelatedDeviceObject->StackSize;
  LOBYTE(v11) = v8 ^ 1;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v10, v11, retaddr);
  v14 = (IRP *)Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup(FileObject, 0LL);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = FileObject;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(Irp + 64) = 0;
  if ( v8 )
  {
    *(_BYTE *)(Irp + 71) |= 2u;
    p_Event = 0LL;
  }
  else
  {
    *(_DWORD *)(Irp + 16) = 4;
    p_Event = &Event;
  }
  v14->UserEvent = p_Event;
  CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
  v14->UserIosb = (PIO_STATUS_BLOCK)v29;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = FileObject;
  v14->Flags |= 0x10u;
  v14->AssociatedIrp.MasterIrp = (struct _IRP *)FileInformation;
  CurrentStackLocation[-1].Parameters.Read.Length = Length;
  CurrentStackLocation[-1].Parameters.Create.Options = FileInformationClass;
  IopQueueThreadIrp((__int64)v14);
  if ( FileInformationClass == FileModeInformation )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 8) == 0 )
    {
      if ( (*(_DWORD *)FileInformation & 2) != 0 )
        Flags |= 0x10u;
      else
        Flags &= ~0x10u;
      FileObject->Flags = Flags;
    }
    if ( (*(_DWORD *)FileInformation & 4) != 0 )
      v21 = Flags | 0x20;
    else
      v21 = Flags & 0xFFFFFFDF;
    FileObject->Flags = v21;
    if ( (*(_DWORD *)FileInformation & 2) != 0 )
    {
      if ( (*(_DWORD *)FileInformation & 0x10) != 0 )
        v22 = v21 | 4;
      else
        v22 = v21 & 0xFFFFFFFB;
      FileObject->Flags = v22;
    }
    --v14->CurrentLocation;
    FinalStatus = 0;
    v14->IoStatus.Status = 0;
    v14->IoStatus.Information = 0LL;
    --v14->Tail.Overlay.CurrentStackLocation;
    v23 = 0;
    goto LABEL_61;
  }
  if ( (unsigned int)(FileInformationClass - 10) <= 1 || FileInformationClass == FileRenameInformationEx )
  {
    if ( FileInformationClass != FileMoveClusterInformation )
    {
      v25 = *(_BYTE *)FileInformation;
      if ( FileInformationClass == FileRenameInformationEx )
        v25 &= 1u;
      CurrentStackLocation[-1].Parameters.SetFile.ReplaceIfExists = v25;
      if ( v32 )
        CurrentStackLocation[-1].Flags |= 1u;
      goto LABEL_56;
    }
LABEL_62:
    CurrentStackLocation[-1].Parameters.Create.EaLength = *(_DWORD *)FileInformation;
LABEL_56:
    if ( *((_WORD *)FileInformation + 10) != 92 && !*((_QWORD *)FileInformation + 1) )
      goto LABEL_16;
    FinalStatus = IopOpenLinkOrRenameTarget(&Handle, (__int64)v14, (__int64)FileInformation, FileObject);
    if ( FinalStatus >= 0 )
      goto LABEL_16;
    v23 = 2;
    goto LABEL_60;
  }
  if ( FileInformationClass == FileMoveClusterInformation )
    goto LABEL_62;
  if ( FileInformationClass == FileMemoryPartitionInformation )
  {
    v24 = IopSetFileMemoryPartitionInformation(FileObject, FileInformation, Length);
    v14->IoStatus.Information = 0LL;
    FinalStatus = v24;
    v23 = 0;
    v14->IoStatus.Status = v24;
LABEL_60:
    --v14->CurrentLocation;
    --v14->Tail.Overlay.CurrentStackLocation;
LABEL_61:
    IofCompleteRequest(v14, v23);
    goto LABEL_17;
  }
LABEL_16:
  FinalStatus = IofCallDriver(v12, v14);
LABEL_17:
  if ( v26 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        IopCancelAlertedRequest(&FileObject->Event, v14);
      FinalStatus = FileObject->FinalStatus;
    }
    _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 0);
    if ( FileObject->Waiters )
      KeSetEvent(&FileObject->Lock, 0, 0);
    ObfDereferenceObject(FileObject);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else if ( FinalStatus == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    FinalStatus = v29[0];
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return FinalStatus;
}

/*
 * XREFs of IoSetInformation @ 0x14059BCF0
 * Callers:
 *     MiAttemptPageFileReduction @ 0x1402241B4 (MiAttemptPageFileReduction.c)
 *     PopDeleteHiberFile @ 0x1405ADA44 (PopDeleteHiberFile.c)
 *     MiAttemptPageFileExtension @ 0x1406E43F8 (MiAttemptPageFileExtension.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopOpenLinkOrRenameTarget @ 0x140587A24 (IopOpenLinkOrRenameTarget.c)
 *     IopCancelAlertedRequest @ 0x1405EF31C (IopCancelAlertedRequest.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopSetFileMemoryPartitionInformation @ 0x1406B8098 (IopSetFileMemoryPartitionInformation.c)
 */

NTSTATUS __stdcall IoSetInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation)
{
  char v4; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r13
  __int64 Irp; // rax
  IRP *v11; // rdi
  __int64 v12; // r12
  NTSTATUS FinalStatus; // esi
  NTSTATUS v15; // edi
  ULONG Flags; // ecx
  ULONG v17; // ecx
  CCHAR v18; // dl
  NTSTATUS v19; // eax
  char v20; // al
  char v21; // [rsp+30h] [rbp-40h]
  _BYTE v22[7]; // [rsp+31h] [rbp-3Fh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-20h] BYREF
  char v26; // [rsp+A0h] [rbp+30h]

  v4 = 0;
  Handle = 0LL;
  v26 = 0;
  v24[0] = 0LL;
  v24[1] = 0LL;
  ObfReferenceObject(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v15 = IopAcquireFileObjectLock((char *)FileObject, 0, (FileObject->Flags & 4) != 0, v22);
      if ( v22[0] )
      {
        ObfDereferenceObject(FileObject);
        return v15;
      }
    }
    else
    {
      ObfReferenceObject(FileObject);
    }
    KeResetEvent(&FileObject->Event);
    v4 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
  }
  v21 = v4;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
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
  v26 = 1;
LABEL_8:
  Irp = IopAllocateIrpExReturn();
  v11 = (IRP *)Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup(FileObject, 0LL);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = FileObject;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(Irp + 64) = 0;
  if ( v4 )
  {
    *(_QWORD *)(Irp + 80) = 0LL;
    *(_BYTE *)(Irp + 71) |= 2u;
  }
  else
  {
    *(_DWORD *)(Irp + 16) = 4;
    *(_QWORD *)(Irp + 80) = &Event;
  }
  v12 = *(_QWORD *)(Irp + 184);
  *(_QWORD *)(Irp + 72) = v24;
  *(_BYTE *)(v12 - 72) = 6;
  *(_QWORD *)(v12 - 24) = FileObject;
  *(_DWORD *)(Irp + 16) |= 0x10u;
  *(_QWORD *)(Irp + 24) = FileInformation;
  *(_DWORD *)(v12 - 64) = Length;
  *(_DWORD *)(v12 - 56) = FileInformationClass;
  IopQueueThreadIrp(Irp);
  if ( FileInformationClass == FileModeInformation )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 8) == 0 )
    {
      if ( (*(_DWORD *)FileInformation & 2) != 0 )
        v17 = Flags | 0x10;
      else
        v17 = Flags & 0xFFFFFFEF;
      FileObject->Flags = v17;
    }
    if ( (*(_DWORD *)FileInformation & 4) != 0 )
      FileObject->Flags |= 0x20u;
    else
      FileObject->Flags &= ~0x20u;
    if ( (*(_DWORD *)FileInformation & 2) != 0 )
    {
      if ( (*(_DWORD *)FileInformation & 0x10) != 0 )
        FileObject->Flags |= 4u;
      else
        FileObject->Flags &= ~4u;
    }
    --v11->CurrentLocation;
    FinalStatus = 0;
    v11->IoStatus.Status = 0;
    v11->IoStatus.Information = 0LL;
    --v11->Tail.Overlay.CurrentStackLocation;
    v18 = 0;
    goto LABEL_60;
  }
  if ( (unsigned int)(FileInformationClass - 10) <= 1 || FileInformationClass == FileRenameInformationEx )
  {
    if ( FileInformationClass != FileMoveClusterInformation )
    {
      v20 = *(_BYTE *)FileInformation;
      if ( FileInformationClass == FileRenameInformationEx )
        v20 &= 1u;
      *(_BYTE *)(v12 - 40) = v20;
      if ( v26 )
        *(_BYTE *)(v12 - 70) |= 1u;
      goto LABEL_55;
    }
LABEL_61:
    *(_DWORD *)(v12 - 40) = *(_DWORD *)FileInformation;
LABEL_55:
    if ( *((_WORD *)FileInformation + 10) != 92 && !*((_QWORD *)FileInformation + 1) )
      goto LABEL_16;
    FinalStatus = IopOpenLinkOrRenameTarget(&Handle, (__int64)v11, (__int64)FileInformation, FileObject);
    if ( FinalStatus >= 0 )
      goto LABEL_16;
    v18 = 2;
    goto LABEL_59;
  }
  if ( FileInformationClass == FileMoveClusterInformation )
    goto LABEL_61;
  if ( FileInformationClass == FileMemoryPartitionInformation )
  {
    v19 = IopSetFileMemoryPartitionInformation(FileObject, FileInformation, Length);
    v11->IoStatus.Information = 0LL;
    FinalStatus = v19;
    v18 = 0;
    v11->IoStatus.Status = v19;
LABEL_59:
    --v11->CurrentLocation;
    --v11->Tail.Overlay.CurrentStackLocation;
LABEL_60:
    IofCompleteRequest(v11, v18);
    goto LABEL_17;
  }
LABEL_16:
  FinalStatus = IofCallDriver(RelatedDeviceObject, v11);
LABEL_17:
  if ( v21 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        IopCancelAlertedRequest(&FileObject->Event, v11);
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
    FinalStatus = v24[0];
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return FinalStatus;
}

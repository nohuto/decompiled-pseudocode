/*
 * XREFs of IoSetInformation @ 0x14045D250
 * Callers:
 *     MiAttemptPageFileReduction @ 0x140219584 (MiAttemptPageFileReduction.c)
 *     PopDeleteHiberFile @ 0x14059BA44 (PopDeleteHiberFile.c)
 *     MiAttemptPageFileExtension @ 0x1406B77B4 (MiAttemptPageFileExtension.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     IopCancelAlertedRequest @ 0x140430F4C (IopCancelAlertedRequest.c)
 *     IopOpenLinkOrRenameTarget @ 0x140449118 (IopOpenLinkOrRenameTarget.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 */

NTSTATUS __stdcall IoSetInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation)
{
  struct _KTHREAD *CurrentThread; // rax
  char v8; // r15
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _DEVICE_OBJECT *v12; // r13
  __int64 Irp; // rax
  IRP *v14; // rdi
  __int64 v15; // r15
  NTSTATUS FinalStatus; // esi
  NTSTATUS v18; // edi
  ULONG Flags; // ecx
  ULONG v20; // ecx
  CCHAR v21; // dl
  char v22; // al
  char v23; // [rsp+30h] [rbp-40h]
  char v24; // [rsp+31h] [rbp-3Fh]
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+28h]
  char v29; // [rsp+A0h] [rbp+30h]

  Handle = 0LL;
  v26[0] = 0LL;
  v26[1] = 0LL;
  v29 = 0;
  ObfReferenceObject(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v18 = IopAcquireFileObjectLock(FileObject);
      if ( v24 )
      {
        ObfDereferenceObject(FileObject);
        return v18;
      }
    }
    else
    {
      ObfReferenceObject(FileObject);
    }
    KeResetEvent(&FileObject->Event);
    v8 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v8 = 0;
  }
  v23 = v8;
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
  v29 = 1;
LABEL_8:
  LOBYTE(v10) = RelatedDeviceObject->StackSize;
  LOBYTE(v11) = v8 == 0;
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
    *(_QWORD *)(Irp + 80) = 0LL;
    *(_BYTE *)(Irp + 71) |= 2u;
  }
  else
  {
    *(_DWORD *)(Irp + 16) = 4;
    *(_QWORD *)(Irp + 80) = &Event;
  }
  v15 = *(_QWORD *)(Irp + 184);
  *(_QWORD *)(Irp + 72) = v26;
  *(_BYTE *)(v15 - 72) = 6;
  *(_QWORD *)(v15 - 24) = FileObject;
  *(_DWORD *)(Irp + 16) |= 0x10u;
  *(_QWORD *)(Irp + 24) = FileInformation;
  *(_DWORD *)(v15 - 64) = Length;
  *(_DWORD *)(v15 - 56) = FileInformationClass;
  IopQueueThreadIrp(Irp);
  if ( FileInformationClass == FileModeInformation )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 8) == 0 )
    {
      if ( (*(_DWORD *)FileInformation & 2) != 0 )
        v20 = Flags | 0x10;
      else
        v20 = Flags & 0xFFFFFFEF;
      FileObject->Flags = v20;
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
    --v14->CurrentLocation;
    FinalStatus = 0;
    v14->IoStatus.Status = 0;
    v14->IoStatus.Information = 0LL;
    --v14->Tail.Overlay.CurrentStackLocation;
    v21 = 0;
    goto LABEL_57;
  }
  if ( (unsigned int)(FileInformationClass - 10) <= 1 || FileInformationClass == FileRenameInformationEx )
  {
    if ( FileInformationClass != FileMoveClusterInformation )
    {
      v22 = *(_BYTE *)FileInformation;
      if ( FileInformationClass == FileRenameInformationEx )
        v22 &= 1u;
      *(_BYTE *)(v15 - 40) = v22;
      if ( v29 )
        *(_BYTE *)(v15 - 70) |= 1u;
      goto LABEL_53;
    }
LABEL_58:
    *(_DWORD *)(v15 - 40) = *(_DWORD *)FileInformation;
LABEL_53:
    if ( *((_WORD *)FileInformation + 10) != 92 && !*((_QWORD *)FileInformation + 1) )
      goto LABEL_15;
    FinalStatus = IopOpenLinkOrRenameTarget(&Handle, (__int64)v14, (__int64)FileInformation, FileObject);
    if ( FinalStatus >= 0 )
      goto LABEL_15;
    --v14->CurrentLocation;
    v21 = 2;
    --v14->Tail.Overlay.CurrentStackLocation;
LABEL_57:
    IofCompleteRequest(v14, v21);
    goto LABEL_16;
  }
  if ( FileInformationClass == FileMoveClusterInformation )
    goto LABEL_58;
LABEL_15:
  FinalStatus = IofCallDriver(v12, v14);
LABEL_16:
  if ( v23 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        IopCancelAlertedRequest(&FileObject->Event.Header.LockNV, v14);
      FinalStatus = FileObject->FinalStatus;
    }
    _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 0);
    if ( FileObject->Waiters )
      KeSetEvent(&FileObject->Lock, 0, 0);
    ObfDereferenceObject(FileObject);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else if ( FinalStatus == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    FinalStatus = v26[0];
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return FinalStatus;
}

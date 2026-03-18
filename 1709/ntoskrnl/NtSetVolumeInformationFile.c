/*
 * XREFs of NtSetVolumeInformationFile @ 0x1405E06C0
 * Callers:
 *     <none>
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140024180 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopAcquireFastLock_0 @ 0x140024220 (IopAcquireFastLock_0.c)
 *     IopReferenceFileObject @ 0x140024E54 (IopReferenceFileObject.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IopVerifierExAllocatePool_1 @ 0x140128874 (IopVerifierExAllocatePool_1.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     IoGetRelatedTargetDevice @ 0x140552E30 (IoGetRelatedTargetDevice.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1405753C0 (IopSynchronousApiServiceTail.c)
 *     IoReportTargetDeviceChange @ 0x14059A790 (IoReportTargetDeviceChange.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  SIZE_T v5; // rbx
  char v7; // r13
  struct _KEVENT *v8; // r12
  struct _KTHREAD *CurrentThread; // r10
  char PreviousMode; // si
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  NTSTATUS result; // eax
  PFILE_OBJECT v16; // r14
  int RelatedTargetDevice; // eax
  struct _DEVICE_OBJECT *v18; // rdi
  IRP *v19; // rax
  IRP *v20; // rsi
  struct _IO_STATUS_BLOCK *v21; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  struct _IRP *PoolWithQuota_0; // rax
  char v24; // dl
  int v25; // eax
  ULONG v26; // ecx
  char v27; // r13
  int v28; // ebx
  struct _KEVENT *Pool_1; // rax
  char v30; // [rsp+40h] [rbp-C8h] BYREF
  char v31; // [rsp+41h] [rbp-C7h]
  ULONG v32; // [rsp+44h] [rbp-C4h]
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  struct _IO_STATUS_BLOCK *v34; // [rsp+50h] [rbp-B8h]
  PVOID P; // [rsp+58h] [rbp-B0h]
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-A8h] BYREF
  struct _KTHREAD *v37; // [rsp+68h] [rbp-A0h]
  void *Src; // [rsp+70h] [rbp-98h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-90h]
  PIRP Irp; // [rsp+80h] [rbp-88h]
  _QWORD v41[2]; // [rsp+88h] [rbp-80h] BYREF
  int NotificationStructure; // [rsp+98h] [rbp-70h] BYREF
  GUID v43; // [rsp+9Ch] [rbp-6Ch]
  __int64 v44; // [rsp+B0h] [rbp-58h]
  int v45; // [rsp+B8h] [rbp-50h]

  v5 = Length;
  v32 = Length;
  Src = FsInformation;
  v34 = IoStatusBlock;
  v7 = 0;
  v8 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v37 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v31 = PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)FsInformationClass >= FileFsFullSizeInformationEx )
      return -1073741821;
    v11 = *((_BYTE *)IopSetFsOperationLength + (int)FsInformationClass);
    if ( !v11 )
      return -1073741821;
    if ( Length < v11 )
      return -1073741820;
    v12 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    v13 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v13 && ((v14 = *(_WORD *)(v13 + 8), v14 == 332) || v14 == 452) )
    {
      if ( Length )
      {
        if ( ((unsigned __int8)FsInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)FsInformation + Length > 0x7FFFFFFF0000LL
          || (char *)FsInformation + Length < FsInformation )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
    }
    else if ( Length )
    {
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1LL) & (unsigned __int64)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)FsInformation + Length > 0x7FFFFFFF0000LL || (char *)FsInformation + Length < FsInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(
             FileHandle,
             IopSetFsOperationAccess[FsInformationClass],
             PreviousMode,
             (PVOID *)&FileObject,
             0LL);
  if ( result < 0 )
    return result;
  v16 = FileObject;
  RelatedTargetDevice = IoGetRelatedTargetDevice(FileObject, &Object);
  v18 = (struct _DEVICE_OBJECT *)Object;
  if ( RelatedTargetDevice < 0 )
    v18 = 0LL;
  Object = v18;
  if ( (v16->Flags & 2) != 0 )
  {
    if ( !IopAcquireFastLock_0((volatile __int32 *)&v16->Type) )
    {
      v28 = IopAcquireFileObjectLock((char *)v16, PreviousMode, (v16->Flags & 4) != 0, &v30);
      if ( v30 )
      {
        ObfDereferenceObject(v16);
        if ( !v18 )
          return v28;
        goto LABEL_43;
      }
      v5 = v32;
    }
    v7 = 1;
  }
  else
  {
    Pool_1 = (struct _KEVENT *)IopVerifierExAllocatePool_1();
    v8 = Pool_1;
    P = Pool_1;
    if ( !Pool_1 )
    {
      ObfDereferenceObject(v16);
LABEL_56:
      if ( v18 )
        ObfDereferenceObject(v18);
      return -1073741670;
    }
    KeInitializeEvent(Pool_1, SynchronizationEvent, 0);
  }
  v30 = v7;
  if ( (v16->Flags & 0x4000000) == 0 )
    KeResetEvent(&v16->Event);
  DeviceObject = IoGetRelatedDeviceObject(v16);
  v19 = (IRP *)IopAllocateIrpExReturn();
  v20 = v19;
  Irp = v19;
  if ( !v19 )
  {
    if ( (v16->Flags & 2) == 0 )
      ExFreePoolWithTag(v8, 0);
    IopAllocateIrpCleanup(v16, 0LL);
    goto LABEL_56;
  }
  v19->Tail.Overlay.OriginalFileObject = v16;
  v19->Tail.Overlay.Thread = v37;
  v19->RequestorMode = v31;
  v41[0] = 0LL;
  v41[1] = 0LL;
  if ( v7 )
  {
    v19->UserEvent = 0LL;
    v21 = v34;
  }
  else
  {
    v19->UserEvent = v8;
    v21 = (struct _IO_STATUS_BLOCK *)v41;
    v20->Flags = 4;
  }
  v20->UserIosb = v21;
  v20->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v20->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 11;
  CurrentStackLocation[-1].FileObject = v16;
  v20->AssociatedIrp.MasterIrp = 0LL;
  v20->MdlAddress = 0LL;
  PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(0LL, v5);
  v20->AssociatedIrp.MasterIrp = PoolWithQuota_0;
  memmove(PoolWithQuota_0, Src, v5);
  v24 = v31;
  if ( !v31 || FsInformationClass != FileFsLabelInformation )
  {
    v26 = v32;
LABEL_38:
    v20->Flags |= 0x30u;
    CurrentStackLocation[-1].Parameters.Read.Length = v26;
    CurrentStackLocation[-1].Parameters.Create.Options = FsInformationClass;
    v27 = v30;
    v28 = IopSynchronousServiceTail(DeviceObject, v20, (__int64)v16, 0, v24, v30, 2u);
    if ( !v27 )
      v28 = IopSynchronousApiServiceTail(v28, v8, v20, v31, (unsigned int *)v41, v34);
    if ( !v18 )
      return v28;
    if ( v28 >= 0 )
    {
      NotificationStructure = 2359297;
      v44 = 0LL;
      v45 = -1;
      v43 = GUID_IO_VOLUME_CHANGE;
      IoReportTargetDeviceChange(v18, &NotificationStructure);
    }
LABEL_43:
    ObfDereferenceObject(v18);
    return v28;
  }
  v25 = *(_DWORD *)v20->AssociatedIrp.MasterIrp;
  if ( v25 >= 0 )
  {
    v26 = v32;
    if ( v25 + 4 <= v32 )
      goto LABEL_38;
  }
  IopExceptionCleanup(v16, v20, 0LL, v8);
  if ( v18 )
    ObfDereferenceObject(v18);
  return -1073741811;
}

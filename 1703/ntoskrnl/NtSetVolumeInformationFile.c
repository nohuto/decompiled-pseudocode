/*
 * XREFs of NtSetVolumeInformationFile @ 0x140574C30
 * Callers:
 *     <none>
 * Callees:
 *     IopAcquireFastLock @ 0x140022E54 (IopAcquireFastLock.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140022E90 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopVerifierExAllocatePool @ 0x140031B44 (IopVerifierExAllocatePool.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x14004F3DC (IopReferenceFileObject.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoGetRelatedTargetDevice @ 0x1404224F4 (IoGetRelatedTargetDevice.c)
 *     IopSynchronousApiServiceTail @ 0x140440474 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IoReportTargetDeviceChange @ 0x140574FF0 (IoReportTargetDeviceChange.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
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
  KPROCESSOR_MODE PreviousMode; // si
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  NTSTATUS result; // eax
  PFILE_OBJECT v16; // r14
  int RelatedTargetDevice; // eax
  struct _DEVICE_OBJECT *v18; // rdi
  __int64 v19; // rdx
  IRP *v20; // rax
  IRP *v21; // rsi
  struct _IO_STATUS_BLOCK *v22; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  struct _IRP *PoolWithQuota; // rax
  int v25; // eax
  ULONG v26; // ecx
  int v27; // ebx
  struct _KEVENT *Pool; // rax
  char v29; // [rsp+40h] [rbp-C8h]
  char v30; // [rsp+41h] [rbp-C7h]
  char v31[2]; // [rsp+42h] [rbp-C6h] BYREF
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
  __int64 retaddr; // [rsp+108h] [rbp+0h]

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
  v30 = PreviousMode;
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
      if ( !Length )
        goto LABEL_20;
      if ( ((unsigned __int8)FsInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    else
    {
      if ( !Length )
        goto LABEL_20;
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1) & (unsigned __int64)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    if ( (unsigned __int64)FsInformation + Length > 0x7FFFFFFF0000LL || (char *)FsInformation + Length < FsInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
LABEL_20:
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
    if ( !IopAcquireFastLock((volatile __int32 *)&v16->Type) )
    {
      v27 = IopAcquireFileObjectLock((char *)v16, PreviousMode, (v16->Flags & 4) != 0, v31);
      if ( v31[0] )
      {
        ObfDereferenceObject(v16);
        if ( !v18 )
          return v27;
        goto LABEL_40;
      }
      v5 = v32;
    }
    v7 = 1;
  }
  else
  {
    Pool = (struct _KEVENT *)IopVerifierExAllocatePool();
    v8 = Pool;
    P = Pool;
    if ( !Pool )
    {
      ObfDereferenceObject(v16);
LABEL_54:
      if ( v18 )
        ObfDereferenceObject(v18);
      return -1073741670;
    }
    KeInitializeEvent(Pool, SynchronizationEvent, 0);
  }
  v29 = v7;
  if ( (v16->Flags & 0x4000000) == 0 )
    KeResetEvent(&v16->Event);
  DeviceObject = IoGetRelatedDeviceObject(v16);
  LOBYTE(v19) = DeviceObject->StackSize;
  v20 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v19, 0LL, retaddr);
  v21 = v20;
  Irp = v20;
  if ( !v20 )
  {
    if ( (v16->Flags & 2) == 0 )
      ExFreePoolWithTag(v8, 0);
    IopAllocateIrpCleanup(v16, 0LL);
    goto LABEL_54;
  }
  v20->Tail.Overlay.OriginalFileObject = v16;
  v20->Tail.Overlay.Thread = v37;
  v20->RequestorMode = v30;
  v41[0] = 0LL;
  v41[1] = 0LL;
  if ( v7 )
  {
    v20->UserEvent = 0LL;
    v22 = v34;
  }
  else
  {
    v20->UserEvent = v8;
    v22 = (struct _IO_STATUS_BLOCK *)v41;
    v21->Flags = 4;
  }
  v21->UserIosb = v22;
  v21->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v21->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 11;
  CurrentStackLocation[-1].FileObject = v16;
  v21->AssociatedIrp.MasterIrp = 0LL;
  v21->MdlAddress = 0LL;
  PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(0LL, v5);
  v21->AssociatedIrp.MasterIrp = PoolWithQuota;
  memmove(PoolWithQuota, Src, v5);
  if ( !v30 || FsInformationClass != FileFsLabelInformation )
  {
    v26 = v32;
LABEL_35:
    v21->Flags |= 0x30u;
    CurrentStackLocation[-1].Parameters.Read.Length = v26;
    CurrentStackLocation[-1].Parameters.Create.Options = FsInformationClass;
    v27 = IopSynchronousServiceTail(DeviceObject, v21, (__int64)v16, 0, v30, v29, 2u);
    if ( !v29 )
      v27 = IopSynchronousApiServiceTail(v27, v8, v21, v30, (unsigned int *)v41, v34);
    if ( !v18 )
      return v27;
    if ( v27 >= 0 )
    {
      NotificationStructure = 2359297;
      v44 = 0LL;
      v45 = -1;
      v43 = GUID_IO_VOLUME_CHANGE;
      IoReportTargetDeviceChange(v18, &NotificationStructure);
    }
LABEL_40:
    ObfDereferenceObject(v18);
    return v27;
  }
  v25 = *(_DWORD *)v21->AssociatedIrp.MasterIrp;
  if ( v25 >= 0 )
  {
    v26 = v32;
    if ( v25 + 4 <= v32 )
      goto LABEL_35;
  }
  IopExceptionCleanup(v16, v21, 0LL, v8);
  if ( v18 )
    ObfDereferenceObject(v18);
  return -1073741811;
}

/*
 * XREFs of NtQueryVolumeInformationFile @ 0x1404D0BE0
 * Callers:
 *     PfSnQueryVolumeInfo @ 0x14048FB8C (PfSnQueryVolumeInfo.c)
 *     PfSnIsVolumeMounted @ 0x14048FCC8 (PfSnIsVolumeMounted.c)
 *     PfpVolumeOpenAndVerify @ 0x140492250 (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     IopAcquireFastLock @ 0x140002094 (IopAcquireFastLock.c)
 *     IopGetMountFlag @ 0x140060E20 (IopGetMountFlag.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140060FB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopVerifierExAllocatePool_1 @ 0x1400C9AE8 (IopVerifierExAllocatePool_1.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IopGetDriverPathInformation @ 0x14023275C (IopGetDriverPathInformation.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1405610F8 (IopSynchronousApiServiceTail.c)
 *     PsIsProcessAppContainer @ 0x14058A3A4 (PsIsProcessAppContainer.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 *     ExRaiseAccessViolation @ 0x1407C5920 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  SIZE_T v5; // r13
  NTSTATUS v9; // r14d
  struct _KTHREAD *CurrentThread; // r8
  KPROCESSOR_MODE PreviousMode; // r10
  FS_INFORMATION_CLASS v12; // ebx
  unsigned __int8 v13; // al
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int16 v20; // ax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  NTSTATUS v24; // r12d
  unsigned int *v25; // rdi
  _DWORD *v26; // rax
  __int64 v27; // rcx
  char MountFlag; // cl
  __int64 v29; // rbx
  int v30; // eax
  NTSTATUS result; // eax
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  IRP *v33; // rax
  IRP *v34; // r12
  PIO_STATUS_BLOCK v35; // rax
  struct _KEVENT *v36; // rcx
  __int64 v37; // rdi
  struct _IRP *PoolWithQuota_0; // rax
  struct _KEVENT *Pool_1; // rax
  _BYTE *v41; // r12
  NTSTATUS DriverPathInformation; // eax
  NTSTATUS v43; // ebx
  PVOID v44; // rbx
  unsigned __int8 v45; // [rsp+40h] [rbp-68h]
  char v46; // [rsp+41h] [rbp-67h]
  char v47; // [rsp+43h] [rbp-65h] BYREF
  NTSTATUS v48; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h]
  PVOID v51; // [rsp+58h] [rbp-50h]
  _BYTE *v52; // [rsp+60h] [rbp-48h]
  PVOID v53; // [rsp+68h] [rbp-40h]
  struct _KTHREAD *v54; // [rsp+70h] [rbp-38h]
  PIRP Irp; // [rsp+78h] [rbp-30h]
  _QWORD v56[2]; // [rsp+80h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+0h]

  v5 = Length;
  v9 = 0;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v54 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v45 = PreviousMode;
  if ( PreviousMode )
  {
    v12 = FsInformationClass;
    if ( (unsigned int)FsInformationClass >= FileFsFullSizeInformationEx )
      return -1073741821;
    v13 = *((_BYTE *)IopQueryFsOperationLength + (int)FsInformationClass);
    if ( !v13 )
      return -1073741821;
    if ( Length < v13 )
      return -1073741820;
    v14 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v15 && ((v20 = *(_WORD *)(v15 + 8), v20 == 332) || v20 == 452) )
    {
      ProbeForWrite(FsInformation, Length, 4u);
      PreviousMode = v45;
    }
    else if ( Length )
    {
      v17 = (unsigned __int64)FsInformation;
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1) & (unsigned int)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = (unsigned __int64)FsInformation + Length - 1;
      if ( (unsigned __int64)FsInformation > v18 || v18 >= 0x7FFFFFFF0000LL )
      {
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
          ExRaiseAccessViolation();
      }
      else
      {
        v19 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v17 = *(_BYTE *)v17;
          v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v17 != v19 );
      }
    }
  }
  else
  {
    v12 = FsInformationClass;
  }
  v24 = ObReferenceObjectByHandle(
          FileHandle,
          IopQueryFsOperationAccess[v12],
          (POBJECT_TYPE)IoFileObjectType,
          PreviousMode,
          &Object,
          0LL);
  v25 = (unsigned int *)Object;
  v51 = Object;
  v53 = Object;
  if ( v24 < 0 )
    return v24;
  v26 = (_DWORD *)*((_QWORD *)Object + 26);
  if ( v26 && (*v26 & 4) != 0 )
  {
    if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    {
      ObfDereferenceObject(Object);
      return -1073739504;
    }
    v51 = v53;
    v25 = (unsigned int *)Object;
  }
  v27 = v25[20];
  if ( (v25[20] & 0x800) != 0 )
  {
    if ( v12 != FileFsDeviceInformation )
    {
      ObfDereferenceObject(v25);
      return -1073741808;
    }
  }
  else if ( v12 != FileFsDeviceInformation )
  {
    goto LABEL_39;
  }
  if ( (v25[20] & 0x800) != 0 || *(_DWORD *)(*((_QWORD *)v25 + 1) + 72LL) != 20 )
  {
    MountFlag = 0;
    v29 = *((_QWORD *)v25 + 1);
    if ( *(_QWORD *)(v29 + 56) )
      MountFlag = IopGetMountFlag(*((_QWORD *)v25 + 1), v21, v22, v23);
    if ( (unsigned int)v5 < 8 )
    {
      v9 = -1073741820;
    }
    else
    {
      *(_DWORD *)FsInformation = *(_DWORD *)(v29 + 72);
      v30 = *(_DWORD *)(v29 + 52);
      *((_DWORD *)FsInformation + 1) = v30;
      if ( MountFlag )
        *((_DWORD *)FsInformation + 1) = v30 | 0x20;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 8LL;
      v48 = 0;
    }
    ObfDereferenceObject(v25);
    return v9;
  }
LABEL_39:
  if ( (v27 & 2) != 0 )
  {
    if ( !IopAcquireFastLock((volatile __int32 *)v25) )
    {
      v24 = IopAcquireFileObjectLock((char *)v25, v45, (v25[20] & 4) != 0, &v47);
      if ( v47 )
      {
        ObfDereferenceObject(v25);
        return v24;
      }
    }
    v46 = 1;
  }
  else
  {
    v46 = 0;
  }
  if ( v12 != FileFsDriverPathInformation )
  {
    if ( (v25[20] & 0x4000000) == 0 )
      KeResetEvent((PRKEVENT)(v25 + 38));
    RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v25);
    Object = RelatedDeviceObject;
    if ( (v25[20] & 2) == 0 )
    {
      Pool_1 = (struct _KEVENT *)IopVerifierExAllocatePool_1();
      P = Pool_1;
      if ( !Pool_1 )
      {
        ObfDereferenceObject(v25);
        return -1073741670;
      }
      KeInitializeEvent(Pool_1, SynchronizationEvent, 0);
    }
    v33 = (IRP *)IopAllocateIrpExReturn(
                   (__int64)RelatedDeviceObject,
                   (unsigned __int8)RelatedDeviceObject->StackSize,
                   0LL,
                   retaddr);
    v34 = v33;
    Irp = v33;
    if ( v33 )
    {
      v33->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v25;
      v33->Tail.Overlay.Thread = v54;
      v33->RequestorMode = v45;
      v56[0] = 0LL;
      v56[1] = 0LL;
      if ( v46 )
      {
        v35 = IoStatusBlock;
        v36 = 0LL;
      }
      else
      {
        v33->Flags = 4;
        v35 = (PIO_STATUS_BLOCK)v56;
        v36 = (struct _KEVENT *)P;
      }
      v34->UserEvent = v36;
      v34->UserIosb = v35;
      v34->Overlay.AllocationSize.QuadPart = 0LL;
      v37 = (__int64)&v34->Tail.Overlay.CurrentStackLocation[-1];
      *(_BYTE *)v37 = 10;
      *(_QWORD *)(v37 + 48) = v51;
      v34->UserBuffer = FsInformation;
      v34->AssociatedIrp.MasterIrp = 0LL;
      v34->MdlAddress = 0LL;
      PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0((__int64)v36, v5);
      v34->AssociatedIrp.MasterIrp = PoolWithQuota_0;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota_0, 0, v5);
      v34->Flags |= 0x870u;
      *(_DWORD *)(v37 + 8) = v5;
      *(_DWORD *)(v37 + 16) = v12;
      result = IopSynchronousServiceTail((PDEVICE_OBJECT)Object, v34, v45, v46, 2);
      if ( !v46 )
        return IopSynchronousApiServiceTail((unsigned int)result, P, v34, v45, v56, IoStatusBlock);
      return result;
    }
    if ( (v25[20] & 2) == 0 )
      ExFreePoolWithTag(P, 0);
    IopAllocateIrpCleanup(v25, 0LL);
    return -1073741670;
  }
  v52 = 0LL;
  v41 = IopVerifierExAllocatePoolWithQuota_0(v27, v5);
  v52 = v41;
  memmove(v41, FsInformation, v5);
  DriverPathInformation = IopGetDriverPathInformation((__int64)v25, (__int64)v41, v5);
  v43 = DriverPathInformation;
  v48 = DriverPathInformation;
  if ( DriverPathInformation < 0 )
    RtlRaiseStatus(DriverPathInformation);
  *(_BYTE *)FsInformation = *v41;
  IoStatusBlock->Status = 0;
  IoStatusBlock->Information = 12LL;
  if ( v41 )
    ExFreePoolWithTag(v41, 0);
  if ( (v25[20] & 2) != 0 )
  {
    _InterlockedExchange((volatile __int32 *)v25 + 29, 0);
    v44 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v44);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v43 = v48;
    v25 = (unsigned int *)Object;
  }
  ObfDereferenceObject(v25);
  return v43;
}

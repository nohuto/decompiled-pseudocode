/*
 * XREFs of NtQueryVolumeInformationFile @ 0x1404812E0
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x140464084 (PfpVolumeOpenAndVerify.c)
 *     PfSnQueryVolumeInfo @ 0x140466584 (PfSnQueryVolumeInfo.c)
 *     PfSnIsVolumeMounted @ 0x1404666C8 (PfSnIsVolumeMounted.c)
 * Callees:
 *     IopIsProcessAppContainer @ 0x140005C2C (IopIsProcessAppContainer.c)
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     IopAcquireFastLock @ 0x140022E54 (IopAcquireFastLock.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140022E90 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopVerifierExAllocatePool @ 0x140031B44 (IopVerifierExAllocatePool.c)
 *     IopGetMountFlag @ 0x14004BC40 (IopGetMountFlag.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopGetDriverPathInformation @ 0x1401EFB20 (IopGetDriverPathInformation.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopSynchronousApiServiceTail @ 0x140440474 (IopSynchronousApiServiceTail.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     ExRaiseAccessViolation @ 0x14071ED40 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  NTSTATUS v8; // esi
  struct _KEVENT *v9; // r14
  struct _KTHREAD *CurrentThread; // r8
  KPROCESSOR_MODE PreviousMode; // r10
  FS_INFORMATION_CLASS v12; // r12d
  unsigned __int8 v13; // al
  NTSTATUS result; // eax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int16 v17; // ax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  int v21; // ebx
  unsigned int *v22; // rdi
  _DWORD *v23; // rax
  __int64 v24; // rcx
  char MountFlag; // cl
  __int64 v26; // rbx
  int v27; // eax
  char v28; // r12
  _BYTE *PoolWithQuota; // r14
  NTSTATUS DriverPathInformation; // eax
  PVOID v31; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  struct _KEVENT *Pool; // rax
  IRP *v34; // rax
  __int64 v35; // rcx
  IRP *v36; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _IRP *v38; // rax
  char v39; // [rsp+40h] [rbp-78h]
  char v40; // [rsp+41h] [rbp-77h]
  NTSTATUS v41; // [rsp+44h] [rbp-74h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  char v43; // [rsp+50h] [rbp-68h]
  PVOID P; // [rsp+58h] [rbp-60h]
  _BYTE *v45; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *v46; // [rsp+68h] [rbp-50h]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-48h]
  PIRP Irp; // [rsp+78h] [rbp-40h]
  _QWORD v49[2]; // [rsp+80h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v8 = 0;
  v9 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v46 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v39 = PreviousMode;
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
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v15 = (__int64)IoStatusBlock;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v16 && ((v17 = *(_WORD *)(v16 + 8), v17 == 332) || v17 == 452) )
    {
      ProbeForWrite(FsInformation, Length, 4u);
      PreviousMode = v39;
    }
    else
    {
      v43 = 0;
      if ( Length )
      {
        v18 = (unsigned __int64)FsInformation;
        if ( ((unsigned int)FsInformation & (*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement
                                             + (int)FsInformationClass)
                                           - 1)) != 0 )
          ExRaiseDatatypeMisalignment();
        v19 = (unsigned __int64)FsInformation + Length - 1;
        if ( (unsigned __int64)FsInformation > v19 || v19 >= 0x7FFFFFFF0000LL )
        {
          if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
            ExRaiseAccessViolation();
        }
        else
        {
          v20 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v18 = *(_BYTE *)v18;
            v18 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v18 != v20 );
        }
      }
    }
  }
  else
  {
    v12 = FsInformationClass;
  }
  v21 = ObReferenceObjectByHandle(
          FileHandle,
          IopQueryFsOperationAccess[v12],
          (POBJECT_TYPE)IoFileObjectType,
          PreviousMode,
          &Object,
          0LL);
  if ( v21 < 0 )
  {
LABEL_30:
    v22 = (unsigned int *)Object;
    goto LABEL_31;
  }
  v22 = (unsigned int *)Object;
  v23 = (_DWORD *)*((_QWORD *)Object + 26);
  if ( v23 && (*v23 & 4) != 0 )
  {
    if ( IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    {
      ObfDereferenceObject(Object);
      return -1073739504;
    }
    goto LABEL_30;
  }
LABEL_31:
  if ( v21 < 0 )
    return v21;
  v24 = v22[20];
  if ( (v22[20] & 0x800) != 0 )
  {
    if ( v12 != FileFsDeviceInformation )
    {
      ObfDereferenceObject(v22);
      return -1073741808;
    }
  }
  else if ( v12 != FileFsDeviceInformation )
  {
    goto LABEL_46;
  }
  if ( (v22[20] & 0x800) != 0 || *(_DWORD *)(*((_QWORD *)v22 + 1) + 72LL) != 20 )
  {
    MountFlag = 0;
    v26 = *((_QWORD *)v22 + 1);
    if ( *(_QWORD *)(v26 + 56) )
      MountFlag = IopGetMountFlag(*((_QWORD *)v22 + 1));
    if ( Length >= 8 )
    {
      *(_DWORD *)FsInformation = *(_DWORD *)(v26 + 72);
      v27 = *(_DWORD *)(v26 + 52);
      *((_DWORD *)FsInformation + 1) = v27;
      if ( MountFlag )
        *((_DWORD *)FsInformation + 1) = v27 | 0x20;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 8LL;
    }
    else
    {
      v8 = -1073741820;
    }
    ObfDereferenceObject(v22);
    return v8;
  }
LABEL_46:
  if ( (v24 & 2) != 0 )
  {
    if ( !IopAcquireFastLock((volatile __int32 *)v22) )
    {
      v21 = IopAcquireFileObjectLock(v22);
      if ( v40 )
      {
LABEL_60:
        ObfDereferenceObject(v22);
        return v21;
      }
    }
    v28 = 1;
  }
  else
  {
    v28 = 0;
  }
  if ( FsInformationClass == FileFsDriverPathInformation )
  {
    v45 = 0LL;
    PoolWithQuota = IopVerifierExAllocatePoolWithQuota(v24, Length);
    v45 = PoolWithQuota;
    memmove(PoolWithQuota, FsInformation, Length);
    DriverPathInformation = IopGetDriverPathInformation((__int64)v22, (__int64)PoolWithQuota, Length);
    v21 = DriverPathInformation;
    v41 = DriverPathInformation;
    if ( DriverPathInformation < 0 )
      RtlRaiseStatus(DriverPathInformation);
    *(_BYTE *)FsInformation = *PoolWithQuota;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 12LL;
    if ( PoolWithQuota )
      ExFreePoolWithTag(PoolWithQuota, 0);
    if ( (v22[20] & 2) != 0 )
    {
      _InterlockedExchange((volatile __int32 *)v22 + 29, 0);
      v31 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v31);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v21 = v41;
      v22 = (unsigned int *)Object;
    }
    goto LABEL_60;
  }
  if ( (v22[20] & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)(v22 + 38));
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v22);
  DeviceObject = RelatedDeviceObject;
  if ( (v22[20] & 2) == 0 )
  {
    Pool = (struct _KEVENT *)IopVerifierExAllocatePool();
    v9 = Pool;
    P = Pool;
    if ( !Pool )
    {
      ObfDereferenceObject(v22);
      return -1073741670;
    }
    KeInitializeEvent(Pool, SynchronizationEvent, 0);
  }
  v34 = (IRP *)IopAllocateIrpExReturn(
                 (__int64)RelatedDeviceObject,
                 (unsigned __int8)RelatedDeviceObject->StackSize,
                 0LL,
                 retaddr);
  v36 = v34;
  Irp = v34;
  if ( !v34 )
  {
    if ( (v22[20] & 2) == 0 )
      ExFreePoolWithTag(v9, 0);
    IopAllocateIrpCleanup(v22, 0LL);
    return -1073741670;
  }
  v34->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v22;
  v34->Tail.Overlay.Thread = v46;
  v34->RequestorMode = v39;
  v49[0] = 0LL;
  v49[1] = 0LL;
  if ( v28 )
  {
    v34->UserEvent = 0LL;
    v34->UserIosb = IoStatusBlock;
  }
  else
  {
    v34->UserEvent = v9;
    v34->UserIosb = (PIO_STATUS_BLOCK)v49;
    v34->Flags = 4;
  }
  v34->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v34->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 10;
  CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v22;
  v34->UserBuffer = FsInformation;
  v34->AssociatedIrp.MasterIrp = 0LL;
  v34->MdlAddress = 0LL;
  v38 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v35, Length);
  v36->AssociatedIrp.MasterIrp = v38;
  if ( !IopDisableBufferedIoInit )
    memset(v38, 0, Length);
  v36->Flags |= 0x870u;
  CurrentStackLocation[-1].Parameters.Read.Length = Length;
  CurrentStackLocation[-1].Parameters.Create.Options = FsInformationClass;
  result = IopSynchronousServiceTail(DeviceObject, v36, v39, v28, 2);
  if ( !v28 )
    return IopSynchronousApiServiceTail(result, P, v36, v39, (unsigned int *)v49, IoStatusBlock);
  return result;
}

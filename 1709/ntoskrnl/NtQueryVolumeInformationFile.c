/*
 * XREFs of NtQueryVolumeInformationFile @ 0x140490C90
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x14043FDE4 (PfpVolumeOpenAndVerify.c)
 *     PfSnQueryVolumeInfo @ 0x1404418EC (PfSnQueryVolumeInfo.c)
 *     PfSnIsVolumeMounted @ 0x1404435E0 (PfSnIsVolumeMounted.c)
 * Callees:
 *     IopGetMountFlag @ 0x1400240A0 (IopGetMountFlag.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140024180 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopAcquireFastLock_0 @ 0x140024220 (IopAcquireFastLock_0.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePool_1 @ 0x140128874 (IopVerifierExAllocatePool_1.c)
 *     IopIsProcessAppContainer @ 0x14012BDD8 (IopIsProcessAppContainer.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IopGetDriverPathInformation @ 0x1401F5228 (IopGetDriverPathInformation.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1405753C0 (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     ExRaiseAccessViolation @ 0x14075EBA0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  KPROCESSOR_MODE PreviousMode; // r9
  FS_INFORMATION_CLASS v12; // ebx
  unsigned __int8 v13; // al
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int16 v19; // ax
  int v20; // r12d
  unsigned int *v21; // rdi
  _DWORD *v22; // rax
  __int64 v23; // rcx
  char MountFlag; // cl
  __int64 v25; // rbx
  int v26; // eax
  NTSTATUS result; // eax
  IRP *v28; // rax
  __int64 v29; // rcx
  IRP *v30; // r12
  __int64 v31; // rax
  struct _IRP *PoolWithQuota_0; // rax
  __int64 v33; // rax
  struct _KEVENT *Pool_1; // rax
  _BYTE *v35; // r12
  NTSTATUS DriverPathInformation; // eax
  NTSTATUS v37; // ebx
  PVOID v38; // rbx
  unsigned __int8 v39; // [rsp+40h] [rbp-68h]
  char v40; // [rsp+41h] [rbp-67h]
  char v41; // [rsp+42h] [rbp-66h]
  NTSTATUS v42; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h]
  __int64 v45; // [rsp+58h] [rbp-50h]
  _BYTE *v46; // [rsp+60h] [rbp-48h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-40h]
  PIRP Irp; // [rsp+70h] [rbp-38h]
  _QWORD v49[3]; // [rsp+78h] [rbp-30h] BYREF

  v5 = Length;
  v9 = 0;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v45 = (__int64)CurrentThread;
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
    if ( (unsigned int)v5 < v13 )
      return -1073741820;
    v14 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v15 && ((v19 = *(_WORD *)(v15 + 8), v19 == 332) || v19 == 452) )
    {
      ProbeForWrite(FsInformation, v5, 4u);
      PreviousMode = v39;
    }
    else if ( (_DWORD)v5 )
    {
      v16 = (unsigned __int64)FsInformation;
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1) & (unsigned int)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (unsigned __int64)FsInformation + v5 - 1;
      if ( (unsigned __int64)FsInformation > v17 || v17 >= 0x7FFFFFFF0000LL )
      {
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
          ExRaiseAccessViolation();
      }
      else
      {
        v18 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v16 = *(_BYTE *)v16;
          v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v16 != v18 );
      }
    }
  }
  else
  {
    v12 = FsInformationClass;
  }
  v20 = ObReferenceObjectByHandle(
          FileHandle,
          IopQueryFsOperationAccess[v12],
          (POBJECT_TYPE)IoFileObjectType,
          PreviousMode,
          &Object,
          0LL);
  if ( v20 < 0 )
    goto LABEL_60;
  v21 = (unsigned int *)Object;
  v22 = (_DWORD *)*((_QWORD *)Object + 26);
  if ( v22 && (*v22 & 4) != 0 )
  {
    if ( IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    {
      ObfDereferenceObject(Object);
      return -1073739504;
    }
LABEL_60:
    v21 = (unsigned int *)Object;
  }
  if ( v20 < 0 )
    return v20;
  v23 = v21[20];
  if ( (v21[20] & 0x800) != 0 )
  {
    if ( v12 != FileFsDeviceInformation )
    {
      ObfDereferenceObject(v21);
      return -1073741808;
    }
  }
  else if ( v12 != FileFsDeviceInformation )
  {
    goto LABEL_37;
  }
  if ( (v21[20] & 0x800) != 0 || *(_DWORD *)(*((_QWORD *)v21 + 1) + 72LL) != 20 )
  {
    MountFlag = 0;
    v25 = *((_QWORD *)v21 + 1);
    if ( *(_QWORD *)(v25 + 56) )
      MountFlag = IopGetMountFlag(*((_QWORD *)v21 + 1));
    if ( (unsigned int)v5 < 8 )
    {
      v9 = -1073741820;
    }
    else
    {
      *(_DWORD *)FsInformation = *(_DWORD *)(v25 + 72);
      v26 = *(_DWORD *)(v25 + 52);
      *((_DWORD *)FsInformation + 1) = v26;
      if ( MountFlag )
        *((_DWORD *)FsInformation + 1) = v26 | 0x20;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 8LL;
    }
    ObfDereferenceObject(v21);
    return v9;
  }
LABEL_37:
  if ( (v23 & 2) != 0 )
  {
    if ( !IopAcquireFastLock_0((volatile __int32 *)v21) )
    {
      v20 = IopAcquireFileObjectLock(v21);
      if ( v41 )
      {
        ObfDereferenceObject(v21);
        return v20;
      }
    }
    v40 = 1;
  }
  else
  {
    v40 = 0;
  }
  if ( v12 != FileFsDriverPathInformation )
  {
    if ( (v21[20] & 0x4000000) == 0 )
      KeResetEvent((PRKEVENT)(v21 + 38));
    DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v21);
    if ( (v21[20] & 2) == 0 )
    {
      Pool_1 = (struct _KEVENT *)IopVerifierExAllocatePool_1();
      P = Pool_1;
      if ( !Pool_1 )
      {
        ObfDereferenceObject(v21);
        return -1073741670;
      }
      KeInitializeEvent(Pool_1, SynchronizationEvent, 0);
    }
    v28 = (IRP *)IopAllocateIrpExReturn();
    v30 = v28;
    Irp = v28;
    if ( v28 )
    {
      v28->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v21;
      v28->Tail.Overlay.Thread = (PETHREAD)v45;
      v28->RequestorMode = v39;
      v49[0] = 0LL;
      v49[1] = 0LL;
      if ( v40 )
      {
        v28->UserEvent = 0LL;
        v28->UserIosb = IoStatusBlock;
      }
      else
      {
        v28->UserEvent = (PKEVENT)P;
        v28->UserIosb = (PIO_STATUS_BLOCK)v49;
        v28->Flags = 4;
      }
      v28->Overlay.AllocationSize.QuadPart = 0LL;
      v31 = (__int64)&v28->Tail.Overlay.CurrentStackLocation[-1];
      v45 = v31;
      *(_BYTE *)v31 = 10;
      *(_QWORD *)(v31 + 48) = v21;
      v30->UserBuffer = FsInformation;
      v30->AssociatedIrp.MasterIrp = 0LL;
      v30->MdlAddress = 0LL;
      PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v29, v5);
      v30->AssociatedIrp.MasterIrp = PoolWithQuota_0;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota_0, 0, v5);
      v30->Flags |= 0x870u;
      v33 = v45;
      *(_DWORD *)(v45 + 8) = v5;
      *(_DWORD *)(v33 + 16) = v12;
      result = IopSynchronousServiceTail(DeviceObject, v30, v39, v40, 2);
      if ( !v40 )
        return IopSynchronousApiServiceTail((unsigned int)result, P, v30, v39, v49, IoStatusBlock);
      return result;
    }
    if ( (v21[20] & 2) == 0 )
      ExFreePoolWithTag(P, 0);
    IopAllocateIrpCleanup(v21, 0LL);
    return -1073741670;
  }
  v46 = 0LL;
  v35 = IopVerifierExAllocatePoolWithQuota_0(v23, v5);
  v46 = v35;
  memmove(v35, FsInformation, v5);
  DriverPathInformation = IopGetDriverPathInformation((__int64)v21, (__int64)v35, v5);
  v37 = DriverPathInformation;
  v42 = DriverPathInformation;
  if ( DriverPathInformation < 0 )
    RtlRaiseStatus(DriverPathInformation);
  *(_BYTE *)FsInformation = *v35;
  IoStatusBlock->Status = 0;
  IoStatusBlock->Information = 12LL;
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
  if ( (v21[20] & 2) != 0 )
  {
    _InterlockedExchange((volatile __int32 *)v21 + 29, 0);
    v38 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v38);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v37 = v42;
    v21 = (unsigned int *)Object;
  }
  ObfDereferenceObject(v21);
  return v37;
}

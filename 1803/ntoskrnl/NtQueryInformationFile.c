/*
 * XREFs of NtQueryInformationFile @ 0x140596F20
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x1400078F8 (PfpFileCheckAttributesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x140527FA4 (PfSnGetPrefetchInstructions.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x140788FF0 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExAllocatePoolWithTagPriority @ 0x140086940 (ExAllocatePoolWithTagPriority.c)
 *     KeSetKernelStackSwapEnable @ 0x1400B71D0 (KeSetKernelStackSwapEnable.c)
 *     IopGetFileVolumeNameInformation @ 0x1400C6A5C (IopGetFileVolumeNameInformation.c)
 *     IopWaitForSynchronousIo @ 0x1400EE730 (IopWaitForSynchronousIo.c)
 *     IopCallDriverReference @ 0x1400EEF70 (IopCallDriverReference.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     IoGetAttachedDevice @ 0x140107050 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     IopGetModeInformation @ 0x140560D84 (IopGetModeInformation.c)
 *     PsIsProcessAppContainer @ 0x14058A3A4 (PsIsProcessAppContainer.c)
 *     IopValidateQueryInformationParameters @ 0x140597740 (IopValidateQueryInformationParameters.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x14071957C (IopCancelAlertedRequest.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 *     IopGetNumaNodeInformation @ 0x14071E23C (IopGetNumaNodeInformation.c)
 *     IopQueryProcessIdsUsingFile @ 0x14071E3A8 (IopQueryProcessIdsUsingFile.c)
 *     VfFastIoCheckState @ 0x140816D04 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140816DDC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v9; // r12
  NTSTATUS result; // eax
  int v11; // esi
  struct _FILE_OBJECT *v12; // rdi
  _DWORD *v13; // rax
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v15; // r14
  struct _KTHREAD *v16; // rax
  __int64 v17; // rdx
  PVOID v18; // rbx
  struct _KTHREAD *v19; // rcx
  bool v20; // zf
  IRP *v21; // r11
  __int64 (__fastcall *v22)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *); // r10
  __int64 v23; // rax
  __int64 v24; // rcx
  PIO_STATUS_BLOCK v25; // rdi
  PIO_STATUS_BLOCK v26; // rax
  struct _KEVENT *p_Event; // rdx
  __int64 v28; // rdx
  struct _IRP *PoolWithTagPriority; // rax
  struct _IRP *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  struct _KTHREAD *v33; // rax
  char v34; // r10
  IRP *v35; // r13
  _QWORD *v36; // rbx
  char v37; // al
  NTSTATUS v38; // r14d
  char *v39; // rbx
  void *v40; // rax
  char v41; // al
  PVOID v42; // rbx
  int v43; // eax
  __int64 v44; // r9
  unsigned __int8 CurrentIrql; // bl
  NTSTATUS v46; // eax
  NTSTATUS FileVolumeNameInformation; // ebx
  bool IsProcessAppContainer; // al
  struct _KTHREAD *v49; // rax
  PVOID v50; // rcx
  char v51; // r8
  NTSTATUS v52; // r15d
  int ModeInformation; // eax
  int *v54; // r9
  _DWORD *p_Type; // rdx
  int v56; // eax
  int v57; // ecx
  _DWORD *v58; // rdx
  __int64 v59; // rax
  int v60; // ecx
  int v61; // ecx
  struct _IRP *MasterIrp; // rdx
  struct _IRP *v63; // rdx
  char v64; // [rsp+30h] [rbp-F8h]
  char v65; // [rsp+31h] [rbp-F7h]
  NTSTATUS v66; // [rsp+34h] [rbp-F4h]
  NTSTATUS v67; // [rsp+34h] [rbp-F4h]
  BOOLEAN v68; // [rsp+38h] [rbp-F0h]
  PIRP Irp; // [rsp+40h] [rbp-E8h]
  PIRP Irpa; // [rsp+40h] [rbp-E8h]
  char v71[8]; // [rsp+48h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-D8h] BYREF
  PVOID v73; // [rsp+58h] [rbp-D0h] BYREF
  PVOID Entry; // [rsp+60h] [rbp-C8h]
  __int64 (__fastcall *v75)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *); // [rsp+68h] [rbp-C0h]
  unsigned int v76; // [rsp+70h] [rbp-B8h] BYREF
  PDEVICE_OBJECT v77; // [rsp+78h] [rbp-B0h]
  __int64 v78; // [rsp+80h] [rbp-A8h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-A0h] BYREF
  __int128 v80; // [rsp+90h] [rbp-98h] BYREF
  __int128 v81; // [rsp+A0h] [rbp-88h] BYREF
  void *v82; // [rsp+B0h] [rbp-78h]
  IRP *v83; // [rsp+B8h] [rbp-70h]
  struct _IRP *v84; // [rsp+C0h] [rbp-68h]
  __int64 v85; // [rsp+C8h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+D0h] [rbp-58h] BYREF
  char v87[64]; // [rsp+E8h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+128h] [rbp+0h]

  v81 = 0uLL;
  v68 = 0;
  CurrentThread = KeGetCurrentThread();
  v78 = (__int64)CurrentThread;
  v9 = CurrentThread->gap0[10];
  result = IopValidateQueryInformationParameters(
             v9,
             CurrentThread,
             IoStatusBlock,
             FileInformation,
             Length,
             FileInformationClass);
  if ( result < 0 )
    return result;
  v11 = ObReferenceObjectByHandle(
          FileHandle,
          IopQueryOperationAccess[FileInformationClass],
          (POBJECT_TYPE)IoFileObjectType,
          v9,
          &Object,
          &HandleInformation);
  v12 = (struct _FILE_OBJECT *)Object;
  v73 = Object;
  if ( v11 >= 0 )
  {
    v13 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v13 )
    {
      if ( (*v13 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v12 = (struct _FILE_OBJECT *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(Object);
          v11 = -1073739504;
        }
      }
    }
  }
  v66 = v11;
  if ( v11 < 0 )
    return v11;
  if ( FileInformationClass == FileAccessInformation )
  {
    v49 = KeGetCurrentThread();
    ++v49->OtherOperationCount;
    __incgsdword(0x2EE4u);
    if ( Length >= 4 )
    {
      *(_DWORD *)FileInformation = HandleInformation.GrantedAccess;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 4LL;
    }
    else
    {
      v11 = -1073741820;
    }
    v50 = Object;
    goto LABEL_96;
  }
  if ( (v12->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v12->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v12);
  v15 = AttachedDevice;
  v77 = AttachedDevice;
  Entry = AttachedDevice->DriverObject->FastIoDispatch;
  if ( FileInformationClass == FileIsRemoteDeviceInformation )
  {
    if ( Length )
    {
      *(_BYTE *)FileInformation = (v12->DeviceObject->Characteristics & 0x10) != 0;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 1LL;
    }
    else
    {
      v11 = -1073741820;
    }
    v50 = v12;
LABEL_96:
    ObfDereferenceObject(v50);
    return v11;
  }
  if ( FileInformationClass == FileVolumeNameInformation )
  {
    FileVolumeNameInformation = IopGetFileVolumeNameInformation(
                                  v12->DeviceObject,
                                  (__int64)IoStatusBlock,
                                  FileInformation,
                                  Length);
    ObfDereferenceObject(v12);
    return FileVolumeNameInformation;
  }
  if ( (v12->Flags & 2) != 0 )
  {
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v51 = (v12->Flags & 4) != 0;
      v12 = (struct _FILE_OBJECT *)Object;
      v52 = IopAcquireFileObjectLock((char *)Object, v9, v51, v71);
      v66 = v52;
      if ( v71[0] )
      {
        ObfDereferenceObject(v12);
        return v52;
      }
    }
    else
    {
      v12 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
    }
    if ( FileInformationClass == FilePositionInformation )
    {
      if ( Length < 8 )
      {
        v66 = -1073741820;
      }
      else
      {
        *(_QWORD *)FileInformation = v12->CurrentByteOffset.QuadPart;
        IoStatusBlock->Status = 0;
        IoStatusBlock->Information = 8LL;
      }
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      v18 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v18);
      v19 = KeGetCurrentThread();
      v20 = v19->KernelApcDisable++ == -1;
      if ( v20
        && ($005F0E83B22994B61E86C72E0CE43C71 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
        && !v19->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      ObfDereferenceObject(Object);
      return v66;
    }
    if ( Entry )
    {
      if ( (v21 = (IRP *)*((_QWORD *)Entry + 4),
            Irp = v21,
            v83 = v21,
            v22 = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *))*((_QWORD *)Entry + 5),
            v75 = v22,
            FileInformationClass == FileBasicInformation)
        && v21
        || FileInformationClass == FileStandardInformation && v22 )
      {
        v80 = 0uLL;
        if ( (MmVerifierData & 0x10) != 0 )
        {
          v40 = (void *)VfFastIoSnapState();
          v22 = v75;
          v21 = Irp;
        }
        else
        {
          v40 = 0LL;
        }
        Entry = v40;
        v82 = v40;
        LOBYTE(v17) = 1;
        if ( FileInformationClass == FileBasicInformation )
          v41 = ((__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *))v21)(
                  v12,
                  v17,
                  FileInformation,
                  &v80,
                  v15);
        else
          v41 = v22(v12, v17, FileInformation, &v80, v15);
        v65 = v41;
        if ( Entry )
        {
          VfFastIoCheckState(Entry, (ULONG_PTR)Irp);
          v41 = v65;
        }
        if ( v41 )
        {
          v66 = v80;
          *(_OWORD *)&IoStatusBlock->Status = v80;
          v41 = v65;
        }
        if ( v41 )
        {
          _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
          v42 = Object;
          if ( *((_DWORD *)Object + 28) )
            KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
          ObfDereferenceObject(v42);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Object);
          return v66;
        }
      }
    }
    v64 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v64 = 0;
  }
  if ( (v12->Flags & 0x4000000) == 0 )
    KeResetEvent(&v12->Event);
  v23 = IopAllocateIrpExReturn((__int64)v15, (unsigned __int8)v15->StackSize, 0LL, retaddr);
  v24 = v23;
  Irpa = (PIRP)v23;
  if ( !v23 )
  {
    IopAllocateIrpCleanup(v12, 0LL);
    return -1073741670;
  }
  *(_QWORD *)(v23 + 192) = v12;
  *(_QWORD *)(v23 + 152) = CurrentThread;
  *(_BYTE *)(v23 + 64) = v9;
  if ( v64 )
  {
    *(_BYTE *)(v23 + 71) |= 2u;
    v25 = IoStatusBlock;
    v26 = IoStatusBlock;
    p_Event = 0LL;
  }
  else
  {
    if ( v9 == 1 )
    {
      v68 = KeSetKernelStackSwapEnable(0);
      v24 = (__int64)Irpa;
    }
    *(_DWORD *)(v24 + 16) = 4;
    v26 = (PIO_STATUS_BLOCK)&v81;
    p_Event = &Event;
    v25 = IoStatusBlock;
  }
  *(_QWORD *)(v24 + 80) = p_Event;
  *(_QWORD *)(v24 + 72) = v26;
  *(_QWORD *)(v24 + 88) = 0LL;
  v28 = *(_QWORD *)(v24 + 184) - 72LL;
  v78 = v28;
  *(_BYTE *)v28 = 5;
  *(_QWORD *)(v28 + 48) = v73;
  *(_QWORD *)(v24 + 112) = FileInformation;
  *(_QWORD *)(v24 + 24) = 0LL;
  *(_QWORD *)(v24 + 8) = 0LL;
  if ( ViVerifierDriverAddedThunkListHead )
  {
    PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                           NonPagedPoolNx,
                                           Length,
                                           0x20206F49u,
                                           (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    v30 = PoolWithTagPriority;
    if ( !PoolWithTagPriority )
      RtlRaiseStatus(-1073741670);
  }
  else
  {
    PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, Length, 0x20206F49u);
    v30 = PoolWithTagPriority;
  }
  v84 = PoolWithTagPriority;
  v31 = (__int64)Irpa;
  Irpa->AssociatedIrp.MasterIrp = v30;
  if ( !IopDisableBufferedIoInit )
  {
    memset(v30, 0, Length);
    v31 = (__int64)Irpa;
  }
  *(_DWORD *)(v31 + 16) |= 0x870u;
  v32 = v78;
  *(_DWORD *)(v78 + 8) = Length;
  *(_DWORD *)(v32 + 16) = FileInformationClass;
  IopQueueThreadIrp(v31);
  v33 = KeGetCurrentThread();
  ++v33->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v34 = 0;
  LODWORD(v75) = 0;
  v67 = 0;
  switch ( FileInformationClass )
  {
    case FileModeInformation:
      v35 = Irpa;
      v36 = v73;
      Entry = v73;
      ModeInformation = IopGetModeInformation((__int64)v73);
      *v54 = ModeInformation;
      Irpa->IoStatus.Information = 4LL;
      goto LABEL_89;
    case FileAlignmentInformation:
      v35 = Irpa;
      *(_DWORD *)Irpa->AssociatedIrp.MasterIrp = v15->AlignmentRequirement;
      Irpa->IoStatus.Information = 4LL;
      v36 = v73;
      Entry = v73;
      goto LABEL_89;
    case FileIoCompletionNotificationInformation:
      v35 = Irpa;
      p_Type = &Irpa->AssociatedIrp.MasterIrp->Type;
      *p_Type = 0;
      v36 = v73;
      Entry = v73;
      v56 = *((_DWORD *)v73 + 20);
      v57 = 0;
      if ( (v56 & 0x4000000) != 0 )
      {
        v57 = 2;
        *p_Type = 2;
        v56 = *((_DWORD *)v36 + 20);
      }
      if ( (v56 & 0x8000000) != 0 )
      {
        v57 |= 4u;
        *p_Type = v57;
        v56 = *((_DWORD *)v36 + 20);
      }
      if ( (v56 & 0x2000000) != 0 )
        *p_Type = v57 | 1;
      Irpa->IoStatus.Information = 4LL;
      goto LABEL_89;
    case FileIoPriorityHintInformation:
      v35 = Irpa;
      v58 = &Irpa->AssociatedIrp.MasterIrp->Type;
      v36 = v73;
      Entry = v73;
      v59 = *((_QWORD *)v73 + 26);
      if ( v59 && (v60 = *(_DWORD *)(v59 + 80)) != 0 )
        v61 = v60 - 1;
      else
        v61 = 2;
      *v58 = v61;
      Irpa->IoStatus.Information = 4LL;
      goto LABEL_89;
    case FileProcessIdsUsingFileInformation:
      MasterIrp = Irpa->AssociatedIrp.MasterIrp;
      v36 = v73;
      Entry = v73;
      LODWORD(v75) = IopQueryProcessIdsUsingFile(v73, MasterIrp, Length, &v76);
      v67 = (int)v75;
      v34 = 1;
      if ( (_DWORD)v75 != -1073741820 )
      {
        v35 = Irpa;
        Irpa->IoStatus.Information = v76;
LABEL_45:
        v37 = v64;
        break;
      }
      v25->Information = v76;
      v35 = Irpa;
      v37 = v64;
      break;
    default:
      v35 = Irpa;
      if ( FileInformationClass != FileNumaNodeInformation )
      {
        v36 = v73;
        Entry = v73;
        if ( FileInformationClass == FileAllInformation )
        {
          HIDWORD(Irpa->AssociatedIrp.MasterIrp->UserIosb) = HandleInformation.GrantedAccess;
          v43 = IopGetModeInformation((__int64)v36);
          *(_DWORD *)(v44 + 88) = v43;
          *(_DWORD *)(v44 + 92) = v15->AlignmentRequirement;
          Irpa->IoStatus.Information = 12LL;
        }
        goto LABEL_45;
      }
      v63 = Irpa->AssociatedIrp.MasterIrp;
      v36 = v73;
      Entry = v73;
      LODWORD(v75) = IopGetNumaNodeInformation(v73, v63);
      v67 = (int)v75;
      v34 = 1;
      v37 = v64;
      if ( (int)v75 >= 0 )
        Irpa->IoStatus.Information = 2LL;
      break;
  }
  if ( !v34 )
  {
    v38 = IopCallDriverReference(v15, v35, v37, v36, 2);
    v67 = v38;
    goto LABEL_48;
  }
LABEL_89:
  v38 = (int)v75;
  v35->IoStatus.Status = (int)v75;
LABEL_48:
  if ( v38 != 259 )
  {
    if ( !v64 )
      v35->UserEvent = 0LL;
    v35->UserIosb = v25;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&v35->Tail, (__int64)v87, &v85, (__int64 *)&v73, &v85);
    __writecr8(CurrentIrql);
    if ( !v64 )
      goto LABEL_52;
    _InterlockedExchange((volatile __int32 *)Entry + 29, 0);
    v39 = (char *)v73;
    if ( !*((_DWORD *)v73 + 28) )
      goto LABEL_51;
    goto LABEL_127;
  }
  if ( !v64 )
  {
    v46 = KeWaitForSingleObject(&Event, Executive, v9, 0, 0LL);
    if ( v46 == 257 || v46 == 192 )
      IopCancelAlertedRequest(&Event, v35);
    v38 = v81;
    *(_OWORD *)&v25->Status = v81;
    goto LABEL_52;
  }
  v67 = IopWaitForSynchronousIo(v35, (unsigned int *)v36, v9);
  _InterlockedExchange((volatile __int32 *)v36 + 29, 0);
  v39 = (char *)v73;
  if ( *((_DWORD *)v73 + 28) )
LABEL_127:
    KeSetEvent((PRKEVENT)(v39 + 128), 0, 0);
LABEL_51:
  ObfDereferenceObject(v39);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v38 = v67;
LABEL_52:
  if ( v68 )
    KeSetKernelStackSwapEnable(1u);
  return v38;
}

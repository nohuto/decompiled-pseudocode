/*
 * XREFs of NtQueryInformationFile @ 0x14052EC70
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x14010C0C4 (PfpFileCheckAttributesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x140565894 (PfSnGetPrefetchInstructions.c)
 *     RtlIsPlaceholderFileHandle @ 0x1406EEBD0 (RtlIsPlaceholderFileHandle.c)
 * Callees:
 *     IopIsProcessAppContainer @ 0x140005C2C (IopIsProcessAppContainer.c)
 *     IopWaitForSynchronousIo @ 0x140022334 (IopWaitForSynchronousIo.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140022E90 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopGetFileVolumeNameInformation @ 0x1400318CC (IopGetFileVolumeNameInformation.c)
 *     IopCallDriverReference @ 0x14004AD54 (IopCallDriverReference.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeSetKernelStackSwapEnable @ 0x140051240 (KeSetKernelStackSwapEnable.c)
 *     IoGetAttachedDevice @ 0x1400815B0 (IoGetAttachedDevice.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopCancelAlertedRequest @ 0x140430F4C (IopCancelAlertedRequest.c)
 *     IopGetModeInformation @ 0x140441ABC (IopGetModeInformation.c)
 *     IopValidateQueryInformationParameters @ 0x14052C8E0 (IopValidateQueryInformationParameters.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     IopGetNumaNodeInformation @ 0x14068D5BC (IopGetNumaNodeInformation.c)
 *     IopQueryProcessIdsUsingFile @ 0x14068D72C (IopQueryProcessIdsUsingFile.c)
 *     VfFastIoCheckState @ 0x14076804C (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140768104 (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  char PreviousMode; // di
  NTSTATUS result; // eax
  int FileVolumeNameInformation; // ebx
  struct _FILE_OBJECT *v12; // rsi
  _DWORD *v13; // rax
  bool IsProcessAppContainer; // al
  PDEVICE_OBJECT AttachedDevice; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rdi
  struct _KTHREAD *v17; // rax
  __int64 v18; // rdx
  PVOID v19; // rbx
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  IRP *FastIoQueryBasicInfo; // r13
  IRP *FastIoQueryStandardInfo; // rdi
  void *v24; // rbx
  IRP *v25; // rax
  char v26; // di
  PVOID v27; // rbx
  __int16 v28; // ax
  char v29; // r13
  IRP *v30; // rax
  __int64 v31; // rcx
  IRP *v32; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IRP *PoolWithQuota; // rax
  struct _KTHREAD *v35; // rax
  char v36; // r10
  NTSTATUS NumaNodeInformation; // r15d
  PIO_STATUS_BLOCK v38; // rbx
  int ModeInformation; // eax
  int *v40; // r9
  _DWORD *p_Type; // rdx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  int v45; // ecx
  __int64 v46; // r11
  int v47; // eax
  __int64 v48; // r9
  volatile __int32 *v49; // rbx
  PVOID v50; // rbx
  NTSTATUS v51; // eax
  unsigned __int8 CurrentIrql; // bl
  KPROCESSOR_MODE v53; // [rsp+30h] [rbp-D8h]
  NTSTATUS v54; // [rsp+34h] [rbp-D4h]
  NTSTATUS v55; // [rsp+34h] [rbp-D4h]
  BOOLEAN v56; // [rsp+39h] [rbp-CFh]
  PVOID Object; // [rsp+40h] [rbp-C8h] BYREF
  char v58; // [rsp+48h] [rbp-C0h]
  char v59; // [rsp+49h] [rbp-BFh]
  char v60; // [rsp+4Ah] [rbp-BEh]
  char v61; // [rsp+4Bh] [rbp-BDh]
  char v62; // [rsp+4Ch] [rbp-BCh]
  char v63; // [rsp+4Dh] [rbp-BBh]
  char v64; // [rsp+4Eh] [rbp-BAh]
  PDEVICE_OBJECT v65; // [rsp+50h] [rbp-B8h]
  unsigned int v66; // [rsp+58h] [rbp-B0h] BYREF
  PIRP Irp; // [rsp+60h] [rbp-A8h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v69; // [rsp+70h] [rbp-98h] BYREF
  __int128 v70; // [rsp+80h] [rbp-88h] BYREF
  void *v71; // [rsp+90h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-70h]
  PVOID v73; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+B0h] [rbp-58h] BYREF
  char v76[64]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+108h] [rbp+0h]

  v70 = 0uLL;
  v56 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v53 = PreviousMode;
  v61 = PreviousMode;
  result = IopValidateQueryInformationParameters(
             PreviousMode,
             (__int64)CurrentThread,
             (unsigned __int64)IoStatusBlock,
             (unsigned __int64)FileInformation,
             Length,
             FileInformationClass);
  if ( result < 0 )
    return result;
  FileVolumeNameInformation = ObReferenceObjectByHandle(
                                FileHandle,
                                IopQueryOperationAccess[FileInformationClass],
                                (POBJECT_TYPE)IoFileObjectType,
                                PreviousMode,
                                &Object,
                                &HandleInformation);
  v12 = (struct _FILE_OBJECT *)Object;
  v73 = Object;
  if ( FileVolumeNameInformation >= 0 )
  {
    v13 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v13 )
    {
      if ( (*v13 & 4) != 0 )
      {
        IsProcessAppContainer = IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v12 = (struct _FILE_OBJECT *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(Object);
          FileVolumeNameInformation = -1073739504;
        }
      }
    }
  }
  v54 = FileVolumeNameInformation;
  if ( FileVolumeNameInformation < 0 )
    return FileVolumeNameInformation;
  if ( (v12->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v12->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v12);
  v65 = AttachedDevice;
  FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
  if ( FileInformationClass == FileIsRemoteDeviceInformation )
  {
    v58 = 1;
    if ( Length )
    {
      *(_BYTE *)FileInformation = (v12->DeviceObject->Characteristics & 0x10) != 0;
      v58 = 0;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 1LL;
    }
    else
    {
      FileVolumeNameInformation = -1073741820;
    }
    goto LABEL_17;
  }
  if ( FileInformationClass == FileVolumeNameInformation )
  {
    FileVolumeNameInformation = IopGetFileVolumeNameInformation(
                                  v12->DeviceObject,
                                  (__int64)IoStatusBlock,
                                  FileInformation,
                                  Length);
LABEL_17:
    ObfDereferenceObject(v12);
    return FileVolumeNameInformation;
  }
  if ( (v12->Flags & 2) != 0 )
  {
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v12 = (struct _FILE_OBJECT *)Object;
      FileVolumeNameInformation = IopAcquireFileObjectLock(Object);
      v54 = FileVolumeNameInformation;
      if ( v63 )
        goto LABEL_17;
    }
    else
    {
      v12 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
    }
    if ( FileInformationClass == FilePositionInformation )
    {
      v59 = 1;
      if ( Length >= 8 )
      {
        *(_QWORD *)FileInformation = v12->CurrentByteOffset.QuadPart;
        v59 = 0;
        IoStatusBlock->Status = 0;
        IoStatusBlock->Information = 8LL;
      }
      else
      {
        v54 = -1073741820;
      }
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      v19 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v19);
      v20 = KeGetCurrentThread();
      v21 = v20->KernelApcDisable + 1;
      v20->KernelApcDisable = v21;
      if ( v21 )
        goto LABEL_33;
      goto LABEL_30;
    }
    if ( FastIoDispatch )
    {
      if ( (FastIoQueryBasicInfo = (IRP *)FastIoDispatch->FastIoQueryBasicInfo,
            Irp = FastIoQueryBasicInfo,
            FastIoQueryStandardInfo = (IRP *)FastIoDispatch->FastIoQueryStandardInfo,
            FileInformationClass == FileBasicInformation)
        && FastIoQueryBasicInfo
        || FileInformationClass == FileStandardInformation && FastIoQueryStandardInfo )
      {
        v69 = 0uLL;
        v60 = 0;
        if ( (MmVerifierData & 0x10) != 0 )
          v24 = (void *)VfFastIoSnapState();
        else
          v24 = 0LL;
        v71 = v24;
        LOBYTE(v18) = 1;
        v25 = FastIoQueryBasicInfo;
        if ( FileInformationClass != FileBasicInformation )
          v25 = FastIoQueryStandardInfo;
        v26 = ((__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, PDEVICE_OBJECT))v25)(
                v12,
                v18,
                FileInformation,
                &v69,
                v65);
        if ( v24 )
          VfFastIoCheckState(v24);
        if ( v26 )
        {
          v54 = v69;
          v60 = 1;
          *(_OWORD *)&IoStatusBlock->Status = v69;
          _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
          v27 = Object;
          if ( *((_DWORD *)Object + 28) )
            KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
          ObfDereferenceObject(v27);
          v20 = KeGetCurrentThread();
          v28 = v20->KernelApcDisable + 1;
          v20->KernelApcDisable = v28;
          if ( v28 )
            goto LABEL_33;
LABEL_30:
          if ( ($69CD3F157F9F39B6F7113F2231989901 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
            && !v20->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery((__int64)v20);
          }
LABEL_33:
          ObfDereferenceObject(Object);
          return v54;
        }
      }
    }
    v29 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v29 = 0;
  }
  v62 = v29;
  if ( (v12->Flags & 0x4000000) == 0 )
    KeResetEvent(&v12->Event);
  v30 = (IRP *)IopAllocateIrpExReturn((__int64)v65, (unsigned __int8)v65->StackSize, 0LL, retaddr);
  v32 = v30;
  Irp = v30;
  if ( !v30 )
  {
    IopAllocateIrpCleanup(v12, 0LL);
    return -1073741670;
  }
  v30->Tail.Overlay.OriginalFileObject = v12;
  v30->Tail.Overlay.Thread = CurrentThread;
  v30->RequestorMode = v53;
  if ( v29 )
  {
    v30->UserEvent = 0LL;
    v30->UserIosb = IoStatusBlock;
    v30->AllocationFlags |= 2u;
  }
  else
  {
    if ( v53 == 1 )
      v56 = KeSetKernelStackSwapEnable(0);
    v32->UserEvent = &Event;
    v32->UserIosb = (PIO_STATUS_BLOCK)&v70;
    v32->Flags = 4;
  }
  v32->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v32->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 5;
  CurrentStackLocation[-1].FileObject = v12;
  v32->UserBuffer = FileInformation;
  v32->AssociatedIrp.MasterIrp = 0LL;
  v32->MdlAddress = 0LL;
  PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v31, Length);
  v32->AssociatedIrp.MasterIrp = PoolWithQuota;
  if ( !IopDisableBufferedIoInit )
    memset(PoolWithQuota, 0, Length);
  v32->Flags |= 0x870u;
  CurrentStackLocation[-1].Parameters.Read.Length = Length;
  CurrentStackLocation[-1].Parameters.Create.Options = FileInformationClass;
  IopQueueThreadIrp((__int64)v32);
  v35 = KeGetCurrentThread();
  ++v35->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v36 = 0;
  NumaNodeInformation = 0;
  v55 = 0;
  switch ( FileInformationClass )
  {
    case FileAccessInformation:
      *(_DWORD *)v32->AssociatedIrp.MasterIrp = HandleInformation.GrantedAccess;
      v32->IoStatus.Information = 4LL;
      v38 = IoStatusBlock;
LABEL_96:
      v32->IoStatus.Status = NumaNodeInformation;
      goto LABEL_98;
    case FileModeInformation:
      ModeInformation = IopGetModeInformation((__int64)Object);
      *v40 = ModeInformation;
      v32->IoStatus.Information = 4LL;
      v38 = IoStatusBlock;
      goto LABEL_96;
    case FileAlignmentInformation:
      *(_DWORD *)v32->AssociatedIrp.MasterIrp = v65->AlignmentRequirement;
      v32->IoStatus.Information = 4LL;
      v38 = IoStatusBlock;
      goto LABEL_96;
    case FileIoCompletionNotificationInformation:
      p_Type = &v32->AssociatedIrp.MasterIrp->Type;
      *p_Type = 0;
      v42 = 0;
      if ( (v12->Flags & 0x4000000) != 0 )
        v42 = 2;
      *p_Type = v42;
      if ( (v12->Flags & 0x8000000) != 0 )
        *p_Type |= 4u;
      if ( (v12->Flags & 0x2000000) != 0 )
        *p_Type |= 1u;
      v32->IoStatus.Information = 4LL;
      v38 = IoStatusBlock;
      goto LABEL_96;
    case FileIoPriorityHintInformation:
      v43 = *((_QWORD *)Object + 26);
      if ( v43 && (v44 = *(_DWORD *)(v43 + 72)) != 0 )
        v45 = v44 - 1;
      else
        v45 = 2;
      *(_DWORD *)v32->AssociatedIrp.MasterIrp = v45;
      v32->IoStatus.Information = 4LL;
      v38 = IoStatusBlock;
      goto LABEL_96;
    case FileProcessIdsUsingFileInformation:
      NumaNodeInformation = IopQueryProcessIdsUsingFile(Object, v32->AssociatedIrp.MasterIrp, Length, &v66);
      v55 = NumaNodeInformation;
      v36 = 1;
      v64 = 1;
      if ( NumaNodeInformation == -1073741820 )
      {
        v38 = IoStatusBlock;
        IoStatusBlock->Information = v66;
LABEL_94:
        v46 = (__int64)v65;
        goto LABEL_95;
      }
      v32->IoStatus.Information = v66;
LABEL_93:
      v38 = IoStatusBlock;
      goto LABEL_94;
  }
  if ( FileInformationClass != FileNumaNodeInformation )
  {
    if ( FileInformationClass == FileAllInformation )
    {
      HIDWORD(v32->AssociatedIrp.MasterIrp->UserIosb) = HandleInformation.GrantedAccess;
      v47 = IopGetModeInformation((__int64)Object);
      *(_DWORD *)(v48 + 88) = v47;
      v46 = (__int64)v65;
      *(_DWORD *)(v48 + 92) = v65->AlignmentRequirement;
      v32->IoStatus.Information = 12LL;
      v38 = IoStatusBlock;
      goto LABEL_95;
    }
    goto LABEL_93;
  }
  NumaNodeInformation = IopGetNumaNodeInformation(Object, v32->AssociatedIrp.MasterIrp);
  v55 = NumaNodeInformation;
  v36 = 1;
  v38 = IoStatusBlock;
  v46 = (__int64)v65;
  if ( NumaNodeInformation >= 0 )
    v32->IoStatus.Information = 2LL;
LABEL_95:
  if ( v36 )
    goto LABEL_96;
  NumaNodeInformation = IopCallDriverReference(v46, v32, v29, Object, 2);
  v55 = NumaNodeInformation;
LABEL_98:
  if ( NumaNodeInformation == 259 )
  {
    if ( !v29 )
    {
      v51 = KeWaitForSingleObject(&Event, Executive, v53, 0, 0LL);
      if ( v51 == 257 || v51 == 192 )
        IopCancelAlertedRequest(&Event, v32);
      NumaNodeInformation = v70;
      *(_OWORD *)&v38->Status = v70;
      goto LABEL_113;
    }
    v49 = (volatile __int32 *)Object;
    v55 = IopWaitForSynchronousIo(v32, (unsigned int *)Object, v53);
    _InterlockedExchange(v49 + 29, 0);
    v50 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
  }
  else
  {
    if ( !v29 )
      v32->UserEvent = 0LL;
    v32->UserIosb = v38;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&v32->Tail, (__int64)v76, &v74, (__int64 *)&v73, &v74);
    __writecr8(CurrentIrql);
    if ( !v29 )
      goto LABEL_113;
    _InterlockedExchange((volatile __int32 *)Object + 29, 0);
    v50 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
  }
  ObfDereferenceObject(v50);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  NumaNodeInformation = v55;
LABEL_113:
  if ( v56 )
    KeSetKernelStackSwapEnable(1u);
  return NumaNodeInformation;
}

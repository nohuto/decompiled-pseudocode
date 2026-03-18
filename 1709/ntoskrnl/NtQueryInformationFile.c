/*
 * XREFs of NtQueryInformationFile @ 0x14049A060
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x140002064 (PfpFileCheckAttributesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x140453D1C (PfSnGetPrefetchInstructions.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x140725700 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     PsGetBaseIoPriorityThread @ 0x140060E60 (PsGetBaseIoPriorityThread.c)
 *     KeSetKernelStackSwapEnable @ 0x140060E90 (KeSetKernelStackSwapEnable.c)
 *     IopWaitForSynchronousIo @ 0x140061054 (IopWaitForSynchronousIo.c)
 *     IoGetIoPriorityHint @ 0x140061250 (IoGetIoPriorityHint.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     IoGetAttachedDevice @ 0x1400855C0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     IoSetActivityIdThread @ 0x1400FB290 (IoSetActivityIdThread.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     IopGetFileVolumeNameInformation @ 0x14012AB08 (IopGetFileVolumeNameInformation.c)
 *     IopIsProcessAppContainer @ 0x14012BDD8 (IopIsProcessAppContainer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IopValidateQueryInformationParameters @ 0x14049AA00 (IopValidateQueryInformationParameters.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopGetModeInformation @ 0x140571C1C (IopGetModeInformation.c)
 *     IopCancelAlertedRequest @ 0x1405EF31C (IopCancelAlertedRequest.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     IopGetNumaNodeInformation @ 0x1406B92A8 (IopGetNumaNodeInformation.c)
 *     IopQueryProcessIdsUsingFile @ 0x1406B9408 (IopQueryProcessIdsUsingFile.c)
 *     VfFastIoCheckState @ 0x1407A9C74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407A9D54 (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  unsigned __int8 v9; // r13
  NTSTATUS result; // eax
  int v11; // esi
  struct _FILE_OBJECT *v12; // rdi
  _DWORD *v13; // rax
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v15; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // r15
  struct _KTHREAD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  PVOID v20; // rbx
  struct _KTHREAD *v21; // rcx
  bool v22; // zf
  __int64 (__fastcall *FastIoQueryBasicInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rsi
  __int64 (__fastcall *FastIoQueryStandardInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r13
  void *v25; // rax
  char v26; // al
  char v27; // r13
  PVOID v28; // rbx
  __int64 Irp; // rax
  __int64 v30; // r13
  KPROCESSOR_MODE v31; // si
  __int128 *v32; // rax
  __int64 v33; // rax
  PVOID PoolWithTagPriority; // rax
  _DWORD *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  struct _KTHREAD *v38; // rax
  char v39; // r11
  NTSTATUS NumaNodeInformation; // r10d
  volatile __int32 *v41; // rdi
  __int64 v42; // rax
  int BaseIoPriorityThread; // eax
  struct _KTHREAD *v44; // rdx
  IO_PRIORITY_HINT IoPriorityHint; // eax
  __int64 v46; // rcx
  char v47; // r14
  PVOID v48; // rbx
  NTSTATUS v49; // r14d
  __int64 v50; // r9
  int v51; // eax
  __int64 v52; // r9
  unsigned __int8 CurrentIrql; // bl
  NTSTATUS v54; // eax
  __int64 v55; // rcx
  NTSTATUS FileVolumeNameInformation; // ebx
  bool IsProcessAppContainer; // al
  struct _KTHREAD *CurrentThread; // rax
  PVOID v59; // rcx
  int ModeInformation; // eax
  _DWORD *v61; // r9
  int *v62; // rcx
  int v63; // eax
  __int64 v64; // rax
  int v65; // ecx
  int v66; // ebx
  unsigned int v67; // ecx
  PVOID v68; // rbx
  NTSTATUS v69; // r14d
  char v70; // [rsp+30h] [rbp-138h]
  KPROCESSOR_MODE v71; // [rsp+31h] [rbp-137h]
  NTSTATUS v72; // [rsp+34h] [rbp-134h]
  NTSTATUS v73; // [rsp+34h] [rbp-134h]
  BOOLEAN v74; // [rsp+39h] [rbp-12Fh]
  PVOID Object; // [rsp+40h] [rbp-128h] BYREF
  char v76; // [rsp+48h] [rbp-120h]
  char v77; // [rsp+49h] [rbp-11Fh]
  char v78; // [rsp+4Ah] [rbp-11Eh]
  char v79; // [rsp+4Bh] [rbp-11Dh]
  unsigned __int8 v80; // [rsp+4Ch] [rbp-11Ch]
  ULONG v81; // [rsp+50h] [rbp-118h]
  char v82; // [rsp+58h] [rbp-110h]
  int NumberOfBytes[3]; // [rsp+5Ch] [rbp-10Ch]
  _DWORD *v84; // [rsp+68h] [rbp-100h]
  unsigned int v85; // [rsp+70h] [rbp-F8h] BYREF
  PVOID Entry; // [rsp+78h] [rbp-F0h]
  FILE_INFORMATION_CLASS v87; // [rsp+80h] [rbp-E8h]
  PDEVICE_OBJECT v88; // [rsp+88h] [rbp-E0h]
  _DWORD *v89; // [rsp+90h] [rbp-D8h]
  size_t Size; // [rsp+98h] [rbp-D0h]
  PIO_STATUS_BLOCK v91; // [rsp+A0h] [rbp-C8h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A8h] [rbp-C0h] BYREF
  __int128 v93; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v94; // [rsp+C0h] [rbp-A8h] BYREF
  void *v95; // [rsp+D0h] [rbp-98h]
  __int64 (__fastcall *v96)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+D8h] [rbp-90h]
  PVOID v97; // [rsp+E0h] [rbp-88h]
  PVOID v98; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v99; // [rsp+F0h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+F8h] [rbp-70h] BYREF
  char v101[8]; // [rsp+110h] [rbp-58h] BYREF
  __int128 v102; // [rsp+118h] [rbp-50h] BYREF

  NumberOfBytes[0] = Length;
  v84 = FileInformation;
  *(_QWORD *)&NumberOfBytes[1] = IoStatusBlock;
  v91 = IoStatusBlock;
  v89 = FileInformation;
  v81 = Length;
  v87 = FileInformationClass;
  v94 = 0uLL;
  v74 = 0;
  Size = (size_t)KeGetCurrentThread();
  v9 = *(_BYTE *)(Size + 562);
  v71 = v9;
  v80 = v9;
  result = IopValidateQueryInformationParameters(v9, Size, IoStatusBlock, FileInformation, Length, FileInformationClass);
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
  v98 = Object;
  if ( v11 >= 0 )
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
          v11 = -1073739504;
        }
      }
    }
  }
  v72 = v11;
  if ( v11 < 0 )
    return v11;
  if ( FileInformationClass == FileAccessInformation )
  {
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    if ( Length >= 4 )
    {
      *(_DWORD *)FileInformation = HandleInformation.GrantedAccess;
      v76 = 0;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 4LL;
    }
    else
    {
      v11 = -1073741820;
    }
    v59 = Object;
    goto LABEL_154;
  }
  if ( (v12->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v12->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v12);
  v15 = AttachedDevice;
  v88 = AttachedDevice;
  FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
  if ( FileInformationClass == FileIsRemoteDeviceInformation )
  {
    v77 = 1;
    if ( NumberOfBytes[0] )
    {
      *(_BYTE *)v84 = (v12->DeviceObject->Characteristics & 0x10) != 0;
      v77 = 0;
      IoStatusBlock->Status = 0;
      *(_QWORD *)(*(_QWORD *)&NumberOfBytes[1] + 8LL) = 1LL;
    }
    else
    {
      v11 = -1073741820;
    }
LABEL_128:
    v59 = v12;
LABEL_154:
    ObfDereferenceObject(v59);
    return v11;
  }
  if ( FileInformationClass == FileVolumeNameInformation )
  {
    FileVolumeNameInformation = IopGetFileVolumeNameInformation(
                                  v12->DeviceObject,
                                  (__int64)IoStatusBlock,
                                  v84,
                                  NumberOfBytes[0]);
    ObfDereferenceObject(v12);
    return FileVolumeNameInformation;
  }
  if ( (v12->Flags & 2) == 0 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v70 = 0;
    goto LABEL_42;
  }
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v12 = (struct _FILE_OBJECT *)Object;
    v11 = IopAcquireFileObjectLock(Object);
    v72 = v11;
    if ( !v82 )
      goto LABEL_13;
    goto LABEL_128;
  }
  v12 = (struct _FILE_OBJECT *)Object;
  ObfReferenceObject(Object);
LABEL_13:
  if ( FileInformationClass == FilePositionInformation )
  {
    v78 = 1;
    if ( NumberOfBytes[0] < 8u )
    {
      v72 = -1073741820;
    }
    else
    {
      *(_QWORD *)v84 = v12->CurrentByteOffset.QuadPart;
      v78 = 0;
      v19 = *(_QWORD *)&NumberOfBytes[1];
      **(_DWORD **)&NumberOfBytes[1] = 0;
      *(_QWORD *)(v19 + 8) = 8LL;
    }
    _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
    v20 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v20);
    v21 = KeGetCurrentThread();
    v22 = v21->KernelApcDisable++ == -1;
    if ( !v22 || ($B476B70DB57F76B110DA5B9238C3E934 *)v21->ApcState.ApcListHead[0].Flink == &v21->152 )
      goto LABEL_20;
    goto LABEL_115;
  }
  if ( FastIoDispatch )
  {
    if ( (FastIoQueryBasicInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryBasicInfo,
          v96 = FastIoQueryBasicInfo,
          FastIoQueryStandardInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryStandardInfo,
          FileInformationClass == FileBasicInformation)
      && FastIoQueryBasicInfo
      || FileInformationClass == FileStandardInformation && FastIoQueryStandardInfo )
    {
      v93 = 0uLL;
      v79 = 0;
      if ( (MmVerifierData & 0x10) != 0 )
        v25 = (void *)VfFastIoSnapState();
      else
        v25 = 0LL;
      Entry = v25;
      v95 = v25;
      LOBYTE(v18) = 1;
      if ( FileInformationClass == FileBasicInformation )
        v26 = FastIoQueryBasicInfo(v12, v18, v84, &v93, v15);
      else
        v26 = FastIoQueryStandardInfo(v12, v18, v84, &v93, v15);
      v27 = v26;
      if ( Entry )
        VfFastIoCheckState(Entry, (ULONG_PTR)FastIoQueryBasicInfo);
      if ( v27 )
      {
        v72 = v93;
        v79 = 1;
        **(_OWORD **)&NumberOfBytes[1] = v93;
        _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
        v28 = Object;
        if ( *((_DWORD *)Object + 28) )
          KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
        ObfDereferenceObject(v28);
        v21 = KeGetCurrentThread();
        v22 = v21->KernelApcDisable++ == -1;
        if ( !v22 || ($B476B70DB57F76B110DA5B9238C3E934 *)v21->ApcState.ApcListHead[0].Flink == &v21->152 )
          goto LABEL_20;
LABEL_115:
        if ( !v21->SpecialApcDisable )
          KiCheckForKernelApcDelivery((__int64)v21);
LABEL_20:
        ObfDereferenceObject(Object);
        return v72;
      }
    }
  }
  v70 = 1;
LABEL_42:
  if ( (v12->Flags & 0x4000000) == 0 )
    KeResetEvent(&v12->Event);
  Irp = IopAllocateIrpExReturn();
  v30 = Irp;
  Entry = (PVOID)Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup(v12, 0LL);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = v12;
  *(_QWORD *)(Irp + 152) = Size;
  v31 = v71;
  *(_BYTE *)(Irp + 64) = v71;
  if ( v70 )
  {
    *(_QWORD *)(Irp + 80) = 0LL;
    v32 = *(__int128 **)&NumberOfBytes[1];
    *(_BYTE *)(v30 + 71) |= 2u;
  }
  else
  {
    if ( v71 == 1 )
      v74 = KeSetKernelStackSwapEnable(0);
    *(_QWORD *)(v30 + 80) = &Event;
    v32 = &v94;
    *(_DWORD *)(v30 + 16) = 4;
  }
  *(_QWORD *)(v30 + 72) = v32;
  *(_QWORD *)(v30 + 88) = 0LL;
  v33 = *(_QWORD *)(v30 + 184) - 72LL;
  v89 = (_DWORD *)v33;
  *(_BYTE *)v33 = 5;
  *(_QWORD *)(v33 + 48) = v12;
  *(_QWORD *)(v30 + 112) = v84;
  *(_QWORD *)(v30 + 24) = 0LL;
  *(_QWORD *)(v30 + 8) = 0LL;
  Size = (unsigned int)NumberOfBytes[0];
  if ( ViVerifierDriverAddedThunkListHead )
  {
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            NonPagedPoolNx,
                            (unsigned int)NumberOfBytes[0],
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    if ( !PoolWithTagPriority )
      RtlRaiseStatus(-1073741670);
  }
  else
  {
    PoolWithTagPriority = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, (unsigned int)NumberOfBytes[0], 0x20206F49u);
  }
  v97 = PoolWithTagPriority;
  *(_QWORD *)(v30 + 24) = PoolWithTagPriority;
  if ( !IopDisableBufferedIoInit )
    memset(PoolWithTagPriority, 0, Size);
  *(_DWORD *)(v30 + 16) |= 0x870u;
  v35 = v89;
  v89[2] = NumberOfBytes[0];
  v35[4] = FileInformationClass;
  IopQueueThreadIrp(v30);
  v38 = KeGetCurrentThread();
  ++v38->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v39 = 0;
  NumaNodeInformation = 0;
  v81 = 0;
  v73 = 0;
  switch ( FileInformationClass )
  {
    case FileModeInformation:
      v41 = (volatile __int32 *)Object;
      ModeInformation = IopGetModeInformation(Object, v36, v37, *(_QWORD *)(v30 + 24));
      *v61 = ModeInformation;
      *(_QWORD *)(v30 + 56) = 4LL;
      goto LABEL_113;
    case FileAlignmentInformation:
      **(_DWORD **)(v30 + 24) = v15->AlignmentRequirement;
      *(_QWORD *)(v30 + 56) = 4LL;
      v41 = (volatile __int32 *)Object;
LABEL_113:
      *(_DWORD *)(v30 + 48) = NumaNodeInformation;
      v47 = v70;
      goto LABEL_75;
    case FileIoCompletionNotificationInformation:
      v62 = *(int **)(v30 + 24);
      *v62 = 0;
      v63 = 0;
      if ( (v12->Flags & 0x4000000) != 0 )
        v63 = 2;
      *v62 = v63;
      if ( (v12->Flags & 0x8000000) != 0 )
        *v62 |= 4u;
      if ( (v12->Flags & 0x2000000) != 0 )
        *v62 |= 1u;
      *(_QWORD *)(v30 + 56) = 4LL;
      v41 = (volatile __int32 *)Object;
      goto LABEL_113;
  }
  v41 = (volatile __int32 *)Object;
  switch ( FileInformationClass )
  {
    case FileIoPriorityHintInformation:
      v64 = *((_QWORD *)Object + 26);
      if ( v64 && (v65 = *(_DWORD *)(v64 + 80)) != 0 )
        v66 = v65 - 1;
      else
        v66 = 2;
      **(_DWORD **)(v30 + 24) = v66;
      *(_QWORD *)(v30 + 56) = 4LL;
      goto LABEL_113;
    case FileProcessIdsUsingFileInformation:
      NumaNodeInformation = IopQueryProcessIdsUsingFile(
                              Object,
                              *(_QWORD *)(v30 + 24),
                              (unsigned int)NumberOfBytes[0],
                              &v85);
      v81 = NumaNodeInformation;
      v73 = NumaNodeInformation;
      v39 = 1;
      if ( NumaNodeInformation == -1073741820 )
        *(_QWORD *)(*(_QWORD *)&NumberOfBytes[1] + 8LL) = v85;
      else
        *(_QWORD *)(v30 + 56) = v85;
      v31 = v71;
      break;
    case FileNumaNodeInformation:
      NumaNodeInformation = IopGetNumaNodeInformation(Object, *(_QWORD *)(v30 + 24));
      v81 = NumaNodeInformation;
      v73 = NumaNodeInformation;
      v39 = 1;
      if ( NumaNodeInformation >= 0 )
        *(_QWORD *)(v30 + 56) = 2LL;
      break;
    case FileAllInformation:
      v50 = *(_QWORD *)(v30 + 24);
      *(_DWORD *)(v50 + 76) = HandleInformation.GrantedAccess;
      v51 = IopGetModeInformation(v41, v36, v37, v50);
      *(_DWORD *)(v52 + 88) = v51;
      *(_DWORD *)(v52 + 92) = v15->AlignmentRequirement;
      *(_QWORD *)(v30 + 56) = 12LL;
      break;
  }
  if ( v39 )
    goto LABEL_113;
  if ( !v70 )
    ObfReferenceObject((PVOID)v41);
  v42 = *((_QWORD *)v41 + 26);
  if ( v42 && *(_DWORD *)(v42 + 80) )
  {
    v67 = *(_DWORD *)(v30 + 16) & 0xFFF1FFFF;
    *(_DWORD *)(v30 + 16) = v67;
    *(_DWORD *)(v30 + 16) = v67 | (*(_DWORD *)(v42 + 80) << 17);
  }
  else
  {
    BaseIoPriorityThread = PsGetBaseIoPriorityThread((__int64)KeGetCurrentThread());
    if ( BaseIoPriorityThread < 2 && v44 == KeGetCurrentThread() && v44[1].Timer.DueTime.LowPart )
      BaseIoPriorityThread = 2;
    *(_DWORD *)(v30 + 16) = *(_DWORD *)(v30 + 16) & 0xFFF1FFFF | ((BaseIoPriorityThread + 1) << 17);
    v41 = (volatile __int32 *)Object;
  }
  IoPriorityHint = IoGetIoPriorityHint((PIRP)v30);
  if ( !*(_BYTE *)(v30 + 64) && IoPriorityHint < IoPriorityNormal )
  {
    v55 = *(_QWORD *)(v30 + 152);
    if ( !v55 || (*(_DWORD *)(v55 + 116) & 0x400) == 0 && (*(_DWORD *)(v55 + 1748) & 0x80u) == 0 )
    {
      ++IoKernelIssuedIoBoostedCount;
      *(_DWORD *)(v30 + 16) = *(_DWORD *)(v30 + 16) & 0xFFF1FFFF | 0x60000;
    }
  }
  if ( *(char *)(v30 + 71) >= 0 && (v46 = *(_QWORD *)(v30 + 200)) != 0 && (*(_BYTE *)v46 & 2) != 0 )
  {
    v102 = *(_OWORD *)(v46 + 24);
    v68 = IoSetActivityIdThread(&v102);
    v69 = IofCallDriver(v15, (PIRP)v30);
    v81 = v69;
    IoSetActivityIdThread(v68);
    NumaNodeInformation = v69;
  }
  else
  {
    NumaNodeInformation = IofCallDriver(v15, (PIRP)v30);
    v81 = NumaNodeInformation;
  }
  v47 = v70;
  if ( !v70 )
  {
    ObDereferenceObjectDeferDelete((PVOID)v41);
    NumaNodeInformation = v81;
  }
  v73 = NumaNodeInformation;
LABEL_75:
  if ( NumaNodeInformation == 259 )
  {
    if ( !v47 )
    {
      v54 = KeWaitForSingleObject(&Event, Executive, v31, 0, 0LL);
      if ( v54 == 257 || v54 == 192 )
        IopCancelAlertedRequest(&Event, (PIRP)v30);
      v49 = v94;
      **(_OWORD **)&NumberOfBytes[1] = v94;
      goto LABEL_80;
    }
    v73 = IopWaitForSynchronousIo((PIRP)v30, (unsigned int *)v41, v31);
    _InterlockedExchange(v41 + 29, 0);
    v48 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
  }
  else
  {
    if ( !v47 )
      *(_QWORD *)(v30 + 80) = 0LL;
    *(_QWORD *)(v30 + 72) = *(_QWORD *)&NumberOfBytes[1];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest(v30 + 120, (__int64)v101, &v99, (__int64 *)&v98, &v99);
    __writecr8(CurrentIrql);
    if ( !v47 )
    {
      v49 = v81;
      goto LABEL_80;
    }
    _InterlockedExchange(v41 + 29, 0);
    v48 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
  }
  ObfDereferenceObject(v48);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v49 = v73;
LABEL_80:
  if ( v74 )
    KeSetKernelStackSwapEnable(1u);
  return v49;
}

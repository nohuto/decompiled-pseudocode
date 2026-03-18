/*
 * XREFs of NtSetInformationFile @ 0x14004FBC0
 * Callers:
 *     <none>
 * Callees:
 *     IopIsProcessAppContainer @ 0x140005C2C (IopIsProcessAppContainer.c)
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14000DF50 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     IopWaitForSynchronousIo @ 0x140022334 (IopWaitForSynchronousIo.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140022E90 (IopVerifierExAllocatePoolWithQuota.c)
 *     ObpDeferObjectDeletion @ 0x140024BAC (ObpDeferObjectDeletion.c)
 *     IopAllocateFileObjectExtension @ 0x1400478A0 (IopAllocateFileObjectExtension.c)
 *     IopCallDriverReference @ 0x14004AD54 (IopCallDriverReference.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetFileObjectExtension @ 0x1400511D0 (IopGetFileObjectExtension.c)
 *     KeSetKernelStackSwapEnable @ 0x140051240 (KeSetKernelStackSwapEnable.c)
 *     IoGetAttachedDevice @ 0x1400815B0 (IoGetAttachedDevice.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1400ABF64 (IopVerifyDeviceObjectOnStack.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAreAllApcsDisabled @ 0x1400E2F30 (KeAreAllApcsDisabled.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     IopReplaceCompletionPort @ 0x14013D958 (IopReplaceCompletionPort.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140428F60 (ObpHandleRevocationBlockRemoveObject.c)
 *     IopCancelAlertedRequest @ 0x140430F4C (IopCancelAlertedRequest.c)
 *     IopOpenLinkOrRenameTarget @ 0x140449118 (IopOpenLinkOrRenameTarget.c)
 *     IopTrackLink @ 0x1404525A0 (IopTrackLink.c)
 *     RtlIsSandboxedToken @ 0x1404767C0 (RtlIsSandboxedToken.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     SeCaptureSubjectContextEx @ 0x14050F760 (SeCaptureSubjectContextEx.c)
 *     ObpRemoveObjectRoutine @ 0x140520990 (ObpRemoveObjectRoutine.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x14068A5DC (IopSetFileObjectIosbRange.c)
 *     ObpDeregisterObject @ 0x1406C2688 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  SIZE_T v5; // r15
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE PreviousMode; // r14
  FILE_INFORMATION_CLASS v8; // r13d
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int16 v12; // ax
  __int64 v13; // rax
  ACCESS_MASK v14; // edi
  int v15; // ebx
  __int64 v16; // r8
  char *v17; // rdi
  _DWORD *v18; // rax
  int *v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 *v22; // r14
  unsigned __int64 v23; // r11
  __int64 i; // rax
  PDEVICE_OBJECT AttachedDevice; // r10
  struct _KTHREAD *v26; // rax
  volatile __int32 *v27; // r14
  volatile signed __int64 *v28; // rbx
  signed __int64 v29; // rax
  __int64 v30; // rax
  NTSTATUS v31; // r14d
  struct _KTHREAD *v32; // rcx
  PVOID v33; // rdi
  signed __int64 v34; // rdi
  signed __int64 v35; // rax
  bool v36; // cc
  signed __int64 v37; // rax
  struct _KTHREAD *v38; // rcx
  __int16 v39; // ax
  signed __int64 v40; // rbx
  signed __int64 v41; // rbx
  __int64 *FileObjectExtension; // rax
  char v44; // r14
  IRP *v45; // rax
  __int64 v46; // rcx
  IRP *v47; // rbx
  PIO_STATUS_BLOCK v48; // r14
  __int64 v49; // rax
  struct _IRP *PoolWithQuota; // rdi
  PIRP v51; // rbx
  __int64 v52; // rdi
  struct _KTHREAD *v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  char v56; // r15
  NTSTATUS v57; // edi
  KPROCESSOR_MODE v58; // r13
  unsigned __int8 CurrentIrql; // bl
  PVOID v60; // rbx
  __int64 v61; // rbx
  __int64 v62; // rcx
  HANDLE *v63; // rcx
  KSPIN_LOCK *v64; // r15
  _QWORD *PoolWithTag; // rdi
  struct _IRP *v66; // rdx
  int v67; // ecx
  struct _IRP *v68; // r8
  unsigned int Flags; // ecx
  char Type; // al
  int v71; // eax
  __int16 *v72; // rax
  NTSTATUS v73; // eax
  PVOID v74; // rdi
  USHORT SectorSize; // cx
  volatile __int32 *v76; // rbx
  char IsSandboxedToken; // bl
  struct _IRP *v78; // r12
  PVOID v79; // r15
  bool IsProcessAppContainer; // al
  char v81; // al
  PVOID v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rax
  struct _IRP *MasterIrp; // r8
  int v86; // edx
  int v87; // eax
  unsigned int v88; // eax
  int v89; // ecx
  unsigned int v90; // ecx
  struct _IRP *v91; // rcx
  unsigned int v92; // eax
  struct _IRP *v93; // r15
  NTSTATUS v94; // eax
  KPROCESSOR_MODE v95; // [rsp+30h] [rbp-108h]
  char v96; // [rsp+31h] [rbp-107h]
  char v97; // [rsp+32h] [rbp-106h]
  KIRQL v98; // [rsp+32h] [rbp-106h]
  PVOID Object; // [rsp+38h] [rbp-100h] BYREF
  BOOLEAN v100; // [rsp+40h] [rbp-F8h]
  int v101; // [rsp+44h] [rbp-F4h]
  char v102; // [rsp+48h] [rbp-F0h]
  char v103; // [rsp+49h] [rbp-EFh]
  struct _DEVICE_OBJECT *v104; // [rsp+50h] [rbp-E8h]
  PIRP Irp; // [rsp+58h] [rbp-E0h]
  __int64 v106; // [rsp+60h] [rbp-D8h]
  PVOID v107; // [rsp+68h] [rbp-D0h] BYREF
  __int16 v108; // [rsp+70h] [rbp-C8h] BYREF
  char v109; // [rsp+72h] [rbp-C6h]
  int v110; // [rsp+74h] [rbp-C4h]
  _QWORD v111[2]; // [rsp+78h] [rbp-C0h] BYREF
  HANDLE v112; // [rsp+88h] [rbp-B0h] BYREF
  int v113[4]; // [rsp+90h] [rbp-A8h] BYREF
  PVOID v114; // [rsp+A0h] [rbp-98h] BYREF
  PVOID v115; // [rsp+A8h] [rbp-90h]
  __int64 v116; // [rsp+B0h] [rbp-88h] BYREF
  PVOID v117; // [rsp+B8h] [rbp-80h] BYREF
  char v118[8]; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v119; // [rsp+C8h] [rbp-70h]
  char v120; // [rsp+D0h] [rbp-68h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-60h] BYREF
  void *retaddr; // [rsp+138h] [rbp+0h]

  v5 = Length;
  memset(v113, 0, sizeof(v113));
  v112 = 0LL;
  v100 = 0;
  v97 = 0;
  CurrentThread = KeGetCurrentThread();
  v106 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v95 = PreviousMode;
  if ( !PreviousMode )
  {
    v8 = FileInformationClass;
    switch ( FileInformationClass )
    {
      case FileRenameInformationBypassAccessCheck:
        v8 = FileRenameInformation;
        break;
      case FileRenameInformationExBypassAccessCheck:
        v8 = FileRenameInformationEx;
        break;
      case FileLinkInformationBypassAccessCheck:
        v8 = FileLinkInformation;
        break;
      default:
LABEL_67:
        v14 = IopSetOperationAccess[v8];
        goto LABEL_27;
    }
    v97 = 1;
    goto LABEL_67;
  }
  v8 = FileInformationClass;
  if ( (unsigned int)FileInformationClass >= FileMemoryPartitionInformation )
    return -1073741821;
  v9 = *((_BYTE *)IopSetOperationLength + (int)FileInformationClass);
  if ( !v9 )
    return -1073741821;
  if ( Length < v9 )
    return -1073741820;
  v10 = (__int64)IoStatusBlock;
  if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
    v10 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v10 = *(_DWORD *)v10;
  v11 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v11 && ((v12 = *(_WORD *)(v11 + 8), v12 == 332) || v12 == 452) )
  {
    v102 = 1;
    if ( !Length )
      goto LABEL_26;
    v13 = 0LL;
    if ( Length != 1 )
      v13 = 3LL;
    if ( (v13 & (unsigned __int64)FileInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation + Length <= 0x7FFFFFFF0000LL
      && (char *)FileInformation + Length >= FileInformation )
    {
      goto LABEL_26;
    }
  }
  else
  {
    v102 = 0;
    if ( !Length )
      goto LABEL_26;
    if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)FileInformationClass) - 1) & (unsigned __int64)FileInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation + Length <= 0x7FFFFFFF0000LL
      && (char *)FileInformation + Length >= FileInformation )
    {
      goto LABEL_26;
    }
  }
  MEMORY[0x7FFFFFFF0000] = 0;
LABEL_26:
  v14 = IopSetOperationAccess[FileInformationClass];
  if ( FileInformationClass == FileLinkInformation )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContextEx(CurrentThread, CurrentThread->Process, &SubjectContext);
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
      v14 |= 0x100u;
  }
LABEL_27:
  v15 = ObReferenceObjectByHandle(FileHandle, v14, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v101 = v15;
  v17 = (char *)Object;
  v117 = Object;
  if ( v15 >= 0 )
  {
    v18 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v18 )
    {
      if ( (*v18 & 4) != 0 )
      {
        IsProcessAppContainer = IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v17 = (char *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          v15 = -1073739504;
          v101 = -1073739504;
        }
      }
    }
  }
  LODWORD(Irp) = v15;
  if ( v15 < 0 )
    return v15;
  v19 = (int *)(v17 + 80);
  if ( (*((_DWORD *)v17 + 20) & 0x800) == 0 )
  {
    v20 = *((_QWORD *)v17 + 2);
    if ( !v20 || (v21 = *(_QWORD *)(v20 + 8)) == 0 )
    {
      v61 = *(_QWORD *)(*((_QWORD *)v17 + 1) + 56LL);
      if ( !v61 || (v21 = *(_QWORD *)(v61 + 8)) == 0 )
        v21 = *((_QWORD *)v17 + 1);
    }
    v22 = (__int64 *)(v21 + 24);
    v23 = 1LL;
    if ( *(_QWORD *)(v21 + 24) )
    {
      if ( *((_QWORD *)v17 + 26) )
      {
        FileObjectExtension = (__int64 *)IopGetFileObjectExtension(v17, 1LL);
        if ( FileObjectExtension )
        {
          v62 = *FileObjectExtension;
          v104 = (struct _DEVICE_OBJECT *)v62;
          if ( v62 )
          {
            v81 = IopVerifyDeviceObjectOnStack(v21, v62);
            v23 = 1LL;
            if ( v81 )
            {
              AttachedDevice = v104;
              goto LABEL_38;
            }
          }
        }
      }
      for ( i = *v22; i; i = *(_QWORD *)(i + 24) )
        v21 = i;
    }
    AttachedDevice = (PDEVICE_OBJECT)v21;
    v104 = (struct _DEVICE_OBJECT *)v21;
    goto LABEL_38;
  }
  AttachedDevice = IoGetAttachedDevice(*((PDEVICE_OBJECT *)v17 + 1));
  v104 = AttachedDevice;
  v23 = 1LL;
LABEL_38:
  if ( (*v19 & 2) != 0 )
  {
    v26 = KeGetCurrentThread();
    --v26->KernelApcDisable;
    v27 = (volatile __int32 *)Object;
    if ( _InterlockedExchange((volatile __int32 *)Object + 29, v23) )
    {
      KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
      v17 = (char *)Object;
      v15 = IopAcquireFileObjectLock(Object);
      v101 = v15;
      LODWORD(Irp) = v15;
      if ( v103 )
      {
LABEL_150:
        ObfDereferenceObjectWithTag(v17, 0x746C6644u);
        return v15;
      }
      AttachedDevice = v104;
      v23 = 1LL;
    }
    else
    {
      v28 = (volatile signed __int64 *)Object;
      if ( ObpTraceFlags )
      {
        ObpPushStackInfo((_DWORD)Object - 48);
        AttachedDevice = v104;
        v23 = 1LL;
      }
      v29 = _InterlockedExchangeAdd64(v28 - 6, v23) + 1;
      if ( v29 <= 1 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v28, 0x10uLL, v29);
      v17 = (char *)Object;
    }
    if ( v8 == FilePositionInformation )
    {
      if ( (unsigned int)v5 >= 8 )
      {
        v30 = *(_QWORD *)FileInformation;
        v119 = *(_QWORD *)FileInformation;
        if ( (*v19 & 8) != 0
          && (SectorSize = AttachedDevice->SectorSize) != 0
          && ((SectorSize - 1) & (unsigned int)v30) != 0
          || v30 < 0 )
        {
          v31 = -1073741811;
        }
        else
        {
          *((_QWORD *)v17 + 13) = v30;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 0LL;
          v31 = v101;
        }
        v32 = KeGetCurrentThread();
        v32->OtherTransferCount += (unsigned int)v5;
        __addgsqword(0x2EF8u, (unsigned int)v5);
        _InterlockedExchange((volatile __int32 *)Object + 29, 0);
        v33 = Object;
        if ( *((_DWORD *)Object + 28) )
        {
          KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
          v23 = 1LL;
        }
        v34 = (signed __int64)v33 - 48;
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v34);
          v23 = 1LL;
        }
        v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)v34, 0xFFFFFFFFFFFFFFFFuLL);
        v36 = v35 <= 1;
        v37 = v35 - 1;
        if ( v36 )
        {
          if ( *(_QWORD *)(v34 + 8) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v34 + 24) ^ (unsigned __int64)BYTE1(v34)],
              (ULONG_PTR)Object,
              v23,
              *(_QWORD *)(v34 + 8));
          if ( v37 < 0 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v37);
          if ( KeAreAllApcsDisabled() )
          {
            ObpDeferObjectDeletion(v34);
          }
          else
          {
            v83 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v34);
            if ( v83 )
              ObpHandleRevocationBlockRemoveObject(v83);
            if ( ObpTraceFlags )
              ObpDeregisterObject(v34);
            ObpRemoveObjectRoutine(v34, 0LL);
          }
          v23 = 1LL;
        }
        v38 = KeGetCurrentThread();
        v39 = v38->KernelApcDisable + 1;
        v38->KernelApcDisable = v39;
        if ( !v39
          && ($69CD3F157F9F39B6F7113F2231989901 *)v38->ApcState.ApcListHead[0].Flink != &v38->152
          && !v38->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
          v23 = 1LL;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v34);
          v23 = 1LL;
        }
        v40 = _InterlockedExchangeAdd64((volatile signed __int64 *)v34, 0xFFFFFFFFFFFFFFFFuLL);
        v36 = v40 <= 1;
        v41 = v40 - 1;
        if ( v36 )
        {
          if ( *(_QWORD *)(v34 + 8) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v34 + 24) ^ (unsigned __int64)BYTE1(v34)],
              (ULONG_PTR)Object,
              v23,
              *(_QWORD *)(v34 + 8));
          if ( v41 < 0 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v41);
          if ( KeAreAllApcsDisabled() )
          {
            ObpDeferObjectDeletion(v34);
          }
          else
          {
            v84 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v34);
            if ( v84 )
              ObpHandleRevocationBlockRemoveObject(v84);
            if ( ObpTraceFlags )
              ObpDeregisterObject(v34);
            ObpRemoveObjectRoutine(v34, 0LL);
          }
        }
        return v31;
      }
      _InterlockedExchange(v27 + 29, 0);
      v82 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObjectWithTag(v82, 0x746C6644u);
      KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741820;
    }
    v44 = 1;
  }
  else
  {
    v108 = 1;
    v109 = 6;
    v110 = 0;
    v111[1] = v111;
    v111[0] = v111;
    v44 = 0;
  }
  v96 = v44;
  if ( (*v19 & 0x4000000) == 0 )
  {
    KeResetEvent((PRKEVENT)(v17 + 152));
    AttachedDevice = v104;
  }
  if ( v8 == FileTrackingInformation )
  {
    if ( (unsigned int)v5 < 0x10 )
    {
      v15 = -1073741820;
    }
    else
    {
      if ( v44 )
        v72 = (__int16 *)(v17 + 152);
      else
        v72 = &v108;
      v73 = IopTrackLink((int)v17, (int)v113, (int)FileInformation, v5, (__int64)v72, v95);
      v15 = v73;
      LODWORD(Irp) = v73;
      if ( v73 >= 0 )
      {
        IoStatusBlock->Information = 0LL;
        IoStatusBlock->Status = v73;
      }
    }
    if ( v44 )
    {
      _InterlockedExchange((volatile __int32 *)v17 + 29, 0);
      v74 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObjectWithTag(v74, 0x746C6644u);
      KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
      v17 = (char *)Object;
    }
    goto LABEL_150;
  }
  LOBYTE(v16) = v44 == 0;
  v45 = (IRP *)IopAllocateIrpExReturn(AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, v16, retaddr);
  v47 = v45;
  Irp = v45;
  if ( !v45 )
  {
    IopAllocateIrpCleanup(v17, 0LL);
    return -1073741670;
  }
  v45->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v17;
  v45->Tail.Overlay.Thread = (PETHREAD)v106;
  v45->RequestorMode = v95;
  if ( v44 )
  {
    v45->UserEvent = 0LL;
    v48 = IoStatusBlock;
    v45->UserIosb = IoStatusBlock;
    v45->AllocationFlags |= 2u;
  }
  else
  {
    if ( v95 == 1 )
      v100 = KeSetKernelStackSwapEnable(0);
    v47->UserEvent = (PKEVENT)&v108;
    v47->UserIosb = (PIO_STATUS_BLOCK)v113;
    v47->Flags = 4;
    v48 = IoStatusBlock;
  }
  v47->Overlay.AllocationSize.QuadPart = 0LL;
  v49 = (__int64)&v47->Tail.Overlay.CurrentStackLocation[-1];
  v106 = v49;
  *(_BYTE *)v49 = 6;
  *(_QWORD *)(v49 + 48) = v17;
  v47->AssociatedIrp.MasterIrp = 0LL;
  v47->MdlAddress = 0LL;
  PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v46, v5);
  Irp->AssociatedIrp.MasterIrp = PoolWithQuota;
  memmove(PoolWithQuota, FileInformation, v5);
  if ( ((unsigned int)(v8 - 19) <= 1 || v8 == FilePositionInformation) && *(int *)(&PoolWithQuota->Size + 1) < 0 )
    RtlRaiseStatus(-1073741811);
  v51 = Irp;
  Irp->Flags |= 0x830u;
  v52 = v106;
  *(_DWORD *)(v106 + 8) = v5;
  *(_DWORD *)(v52 + 16) = v8;
  IopQueueThreadIrp(v51);
  v53 = KeGetCurrentThread();
  ++v53->OtherOperationCount;
  __incgsdword(0x2EE4u);
  if ( v8 == FileModeInformation )
  {
    MasterIrp = v51->AssociatedIrp.MasterIrp;
    v86 = *(_DWORD *)&MasterIrp->Type;
    if ( (*(_DWORD *)&MasterIrp->Type & 0xFFFFFFC9) == 0
      && ((v86 & 0x30) == 0 || (*v19 & 2) != 0)
      && ((v86 & 0x30) != 0 || (*v19 & 2) == 0)
      && (*(_DWORD *)&MasterIrp->Type & 0x30) != 0x30 )
    {
      v87 = *v19;
      if ( (*v19 & 8) == 0 )
      {
        if ( (v86 & 2) != 0 )
          v88 = v87 | 0x10;
        else
          v88 = v87 & 0xFFFFFFEF;
        *v19 = v88;
      }
      if ( (*(_DWORD *)&MasterIrp->Type & 4) != 0 )
        *v19 |= 0x20u;
      else
        *v19 &= ~0x20u;
      v89 = *v19;
      if ( (*v19 & 2) != 0 )
      {
        if ( (*(_DWORD *)&MasterIrp->Type & 0x10) != 0 )
          v90 = v89 | 4;
        else
          v90 = v89 & 0xFFFFFFFB;
        *v19 = v90;
      }
      v57 = 0;
      goto LABEL_119;
    }
    goto LABEL_237;
  }
  v54 = (unsigned int)(v8 - 10);
  if ( (unsigned int)v54 <= 0x37 )
  {
    v55 = 0x80000000200003LL;
    if ( _bittest64(&v55, v54) )
    {
      v68 = v51->AssociatedIrp.MasterIrp;
      Flags = v68->Flags;
      if ( !Flags || (Flags & 1) != 0 || (int)v5 - 20 < Flags )
      {
        v57 = -1073741811;
        v51->IoStatus.Status = -1073741811;
        v56 = v96;
        goto LABEL_94;
      }
      if ( v8 == FileMoveClusterInformation )
      {
        *(_DWORD *)(v52 + 32) = *(_DWORD *)&v68->Type;
      }
      else
      {
        Type = v68->Type;
        if ( v8 == FileRenameInformationEx )
          Type &= 1u;
        *(_BYTE *)(v52 + 32) = Type;
        if ( v97 )
          *(_BYTE *)(v52 + 2) |= 1u;
      }
      if ( *((_WORD *)&v68->Flags + 2) == 92 || v68->MdlAddress )
      {
        v71 = IopOpenLinkOrRenameTarget(&v112, v51, v68, Object);
        v57 = v71;
        v56 = v96;
        if ( v71 < 0 )
        {
          v51->IoStatus.Status = v71;
          goto LABEL_94;
        }
        goto LABEL_93;
      }
      goto LABEL_92;
    }
  }
  switch ( v8 )
  {
    case FileShortNameInformation:
      v91 = v51->AssociatedIrp.MasterIrp;
      v92 = v5 - 4;
      v56 = v96;
      if ( v92 < *(_DWORD *)&v91->Type )
      {
        v57 = -1073741811;
        v51->IoStatus.Status = -1073741811;
        goto LABEL_94;
      }
      if ( *(&v91->Size + 1) == 92 )
      {
        v57 = -1073741811;
        v51->IoStatus.Status = -1073741811;
        goto LABEL_94;
      }
      goto LABEL_93;
    case FileDispositionInformation:
    case FileDispositionInformationEx:
      if ( v51->AssociatedIrp.MasterIrp->Type )
        *(_QWORD *)(v52 + 32) = FileHandle;
      goto LABEL_92;
    case FileCompletionInformation:
      v63 = (HANDLE *)v51->AssociatedIrp.MasterIrp;
      v106 = (__int64)v63;
      v64 = (KSPIN_LOCK *)Object;
      if ( !*((_QWORD *)Object + 22) && (*v19 & 2) == 0 )
      {
        v57 = ObReferenceObjectByHandle(*v63, 2u, IoCompletionObjectType, v95, &v107, 0LL);
        if ( v57 >= 0 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x63436F49u);
          if ( PoolWithTag )
          {
            v98 = KeAcquireSpinLockRaiseToDpc(v64 + 23);
            if ( v64[22] )
            {
              KxReleaseSpinLock(v64 + 23);
              __writecr8(v98);
              ExFreePoolWithTag(PoolWithTag, 0);
              ObfDereferenceObjectWithTag(v107, 0x746C6644u);
              v57 = -1073741752;
            }
            else
            {
              *v19 &= ~0x400u;
              *PoolWithTag = v107;
              PoolWithTag[1] = *(_QWORD *)(v106 + 8);
              v64[22] = (KSPIN_LOCK)PoolWithTag;
              v101 = 0;
              KxReleaseSpinLock(v64 + 23);
              __writecr8(v98);
              v57 = 0;
            }
          }
          else
          {
            ObfDereferenceObjectWithTag(v107, 0x746C6644u);
            v57 = -1073741670;
          }
        }
        goto LABEL_119;
      }
      goto LABEL_237;
    case FileReplaceCompletionInformation:
      v78 = v51->AssociatedIrp.MasterIrp;
      v79 = 0LL;
      v115 = 0LL;
      if ( *((_QWORD *)Object + 22) )
      {
        if ( *(_QWORD *)&v78->Type )
        {
          v57 = ObReferenceObjectByHandle(*(HANDLE *)&v78->Type, 2u, IoCompletionObjectType, v95, &v114, 0LL);
          v79 = v114;
          v115 = v114;
        }
        else
        {
          v57 = v101;
        }
        if ( v57 >= 0 )
        {
          v57 = IopReplaceCompletionPort(Object, v79, v78->MdlAddress);
          if ( v79 )
          {
            ObfDereferenceObjectWithTag(v79, 0x746C6644u);
            v51->IoStatus.Status = v57;
            v51->IoStatus.Information = 0LL;
            v56 = v96;
            goto LABEL_94;
          }
        }
        goto LABEL_119;
      }
      goto LABEL_237;
    case FileIoCompletionNotificationInformation:
      v66 = v51->AssociatedIrp.MasterIrp;
      v67 = *v19;
      if ( (*v19 & 2) != 0 )
      {
        v57 = -1073741811;
      }
      else
      {
        v101 = 0;
        if ( (*(_DWORD *)&v66->Type & 1) != 0 )
          *v19 = v67 | 0x2000000;
        if ( (*(_DWORD *)&v66->Type & 2) != 0 )
          *v19 |= 0x4000000u;
        v57 = v101;
        if ( (*(_DWORD *)&v66->Type & 4) != 0 )
          *v19 |= 0x8000000u;
      }
      v51->IoStatus.Status = v57;
      v51->IoStatus.Information = 0LL;
      v56 = v96;
      goto LABEL_94;
  }
  if ( v8 != FileIoStatusBlockRangeInformation )
  {
    if ( v8 != FileIoPriorityHintInformation )
    {
LABEL_92:
      v56 = v96;
LABEL_93:
      v57 = IopCallDriverReference((__int64)v104, v51, v56, Object, 2);
LABEL_94:
      v58 = v95;
      goto LABEL_95;
    }
    v93 = v51->AssociatedIrp.MasterIrp;
    if ( *(_DWORD *)&v93->Type <= 2u )
    {
      v57 = IopAllocateFileObjectExtension((__int64)Object, &v116);
      if ( v57 >= 0 )
        *(_DWORD *)(v116 + 72) = *(_DWORD *)&v93->Type + 1;
      goto LABEL_119;
    }
LABEL_237:
    v57 = -1073741811;
LABEL_119:
    v51->IoStatus.Status = v57;
    v51->IoStatus.Information = 0LL;
    v56 = v96;
    goto LABEL_94;
  }
  v58 = v95;
  if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v95) )
  {
    if ( (*v19 & 2) != 0 )
      v57 = -1073741811;
    else
      v57 = IopSetFileObjectIosbRange(Object, v51);
  }
  else
  {
    v57 = -1073741727;
  }
  v51->IoStatus.Status = v57;
  v51->IoStatus.Information = 0LL;
  v56 = v96;
LABEL_95:
  if ( v57 == 259 )
  {
    if ( !v56 )
    {
      v94 = KeWaitForSingleObject(&v108, Executive, v58, 0, 0LL);
      if ( v94 == 257 || v94 == 192 )
        IopCancelAlertedRequest(&v108, v51);
      v57 = v113[0];
      *v48 = *(PIO_STATUS_BLOCK)v113;
      goto LABEL_99;
    }
    v76 = (volatile __int32 *)Object;
    v57 = IopWaitForSynchronousIo(Irp, (unsigned int *)Object, v58);
    _InterlockedExchange(v76 + 29, 0);
    v60 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
  }
  else
  {
    if ( !v56 )
      v51->UserEvent = 0LL;
    v51->UserIosb = v48;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((_DWORD)Irp + 120, (unsigned int)&v120, (unsigned int)v118, (unsigned int)&v117, (__int64)v118);
    __writecr8(CurrentIrql);
    if ( !v56 )
      goto LABEL_99;
    _InterlockedExchange((volatile __int32 *)Object + 29, 0);
    v60 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
  }
  ObfDereferenceObjectWithTag(v60, 0x746C6644u);
  KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
LABEL_99:
  if ( v100 )
    KeSetKernelStackSwapEnable(1u);
  if ( v112 )
    ObCloseHandle(v112, 0);
  return v57;
}

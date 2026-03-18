/*
 * XREFs of NtSetInformationFile @ 0x14005F8B0
 * Callers:
 *     <none>
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140024180 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopGetFileObjectExtension @ 0x14002469C (IopGetFileObjectExtension.c)
 *     KeSetKernelStackSwapEnable @ 0x140060E90 (KeSetKernelStackSwapEnable.c)
 *     IopAllocateFileObjectExtension @ 0x140060ED0 (IopAllocateFileObjectExtension.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     IopWaitForSynchronousIo @ 0x140061054 (IopWaitForSynchronousIo.c)
 *     IopCallDriverReference @ 0x1400610C0 (IopCallDriverReference.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDevice @ 0x1400855C0 (IoGetAttachedDevice.c)
 *     KeAreAllApcsDisabled @ 0x1400890C0 (KeAreAllApcsDisabled.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1400A5D70 (IopVerifyDeviceObjectOnStack.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1401092D0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     IopIsProcessAppContainer @ 0x14012BDD8 (IopIsProcessAppContainer.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IopReplaceCompletionPort @ 0x1401FA530 (IopReplaceCompletionPort.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ObpRemoveObjectRoutine @ 0x1404A3C00 (ObpRemoveObjectRoutine.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContextEx @ 0x1404C5AF0 (SeCaptureSubjectContextEx.c)
 *     RtlIsSandboxedToken @ 0x1404C69F0 (RtlIsSandboxedToken.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     IopTrackLink @ 0x14055854C (IopTrackLink.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140568710 (ObpHandleRevocationBlockRemoveObject.c)
 *     IopOpenLinkOrRenameTarget @ 0x140587A24 (IopOpenLinkOrRenameTarget.c)
 *     IopCancelAlertedRequest @ 0x1405EF31C (IopCancelAlertedRequest.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x1406B622C (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x1406B8098 (IopSetFileMemoryPartitionInformation.c)
 *     ObpDeregisterObject @ 0x1406F10E4 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  SIZE_T v5; // r14
  struct _KTHREAD *CurrentThread; // rbx
  FILE_INFORMATION_CLASS v8; // r13d
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int16 v12; // ax
  __int64 v13; // rax
  ACCESS_MASK v14; // edi
  int v15; // ebx
  char *v16; // rdi
  _DWORD *v17; // rax
  _DWORD *v18; // rcx
  __int64 v19; // rbx
  struct _DEVICE_OBJECT *v20; // rbx
  struct _DEVICE_OBJECT **p_AttachedDevice; // r15
  unsigned __int64 v22; // r10
  struct _DEVICE_OBJECT *i; // rax
  PDEVICE_OBJECT AttachedDevice; // r11
  struct _KTHREAD *v25; // rax
  volatile __int32 *v26; // r15
  volatile signed __int64 *v27; // rbx
  signed __int64 v28; // rax
  __int64 v29; // rax
  NTSTATUS v30; // r15d
  struct _KTHREAD *v31; // rcx
  char *v32; // rdi
  char *v33; // rdi
  signed __int64 v34; // rax
  bool v35; // cc
  signed __int64 v36; // rax
  struct _KTHREAD *v37; // rcx
  bool v38; // zf
  signed __int64 v39; // rbx
  signed __int64 v40; // rbx
  char v42; // r15
  char *v43; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 Irp; // rax
  __int64 v46; // rcx
  __int64 v47; // rbx
  PIO_STATUS_BLOCK v48; // r15
  __int64 v49; // rax
  int *PoolWithQuota_0; // rdi
  IRP *v51; // r12
  _DWORD *v52; // rdi
  PETHREAD Thread; // rax
  LIST_ENTRY *p_ThreadListEntry; // rbx
  struct _LIST_ENTRY *v55; // rax
  struct _LIST_ENTRY *v56; // rdx
  struct _KTHREAD *v57; // rax
  __int64 v58; // rcx
  unsigned __int8 v59; // r14
  int v60; // edi
  KPROCESSOR_MODE v61; // al
  unsigned __int8 v62; // bl
  PVOID v63; // rbx
  USHORT SectorSize; // cx
  struct _DEVICE_OBJECT **FileObjectExtension; // rax
  __int64 v66; // rbx
  HANDLE *v67; // rcx
  KSPIN_LOCK *v68; // r14
  _DWORD *v69; // rbx
  _QWORD *PoolWithTag; // rdi
  struct _DEVICE_OBJECT *v71; // rcx
  struct _IRP *v72; // rcx
  _DWORD *v73; // rbx
  int v74; // edx
  struct _IRP *v75; // r8
  unsigned int Flags; // ecx
  char Type; // al
  int v78; // eax
  __int16 *v79; // rax
  NTSTATUS v80; // eax
  PVOID v81; // rdi
  volatile __int32 *v82; // rbx
  struct _IRP *v83; // rbx
  NTSTATUS v84; // eax
  char IsSandboxedToken; // bl
  struct _IRP *MasterIrp; // r8
  int v87; // edx
  char IsProcessAppContainer; // al
  char v89; // al
  PVOID v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rax
  unsigned int *v93; // rbx
  int v94; // eax
  unsigned int v95; // eax
  unsigned int v96; // ecx
  unsigned int v97; // ecx
  struct _IRP *v98; // rcx
  unsigned int v99; // eax
  struct _IRP *v100; // r14
  PVOID v101; // rbx
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-118h]
  char v103; // [rsp+31h] [rbp-117h]
  char v104; // [rsp+32h] [rbp-116h]
  KIRQL v105; // [rsp+32h] [rbp-116h]
  PVOID Object; // [rsp+38h] [rbp-110h] BYREF
  BOOLEAN v107; // [rsp+40h] [rbp-108h]
  int v108; // [rsp+44h] [rbp-104h]
  char v109; // [rsp+48h] [rbp-100h]
  _DWORD *v110; // [rsp+50h] [rbp-F8h]
  struct _DEVICE_OBJECT *v111; // [rsp+58h] [rbp-F0h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-E8h]
  _DWORD *p_LockNV; // [rsp+68h] [rbp-E0h]
  PVOID v114; // [rsp+70h] [rbp-D8h] BYREF
  HANDLE *v115; // [rsp+78h] [rbp-D0h]
  __int16 v116; // [rsp+80h] [rbp-C8h] BYREF
  char v117; // [rsp+82h] [rbp-C6h]
  int v118; // [rsp+84h] [rbp-C4h]
  _QWORD v119[2]; // [rsp+88h] [rbp-C0h] BYREF
  HANDLE v120; // [rsp+98h] [rbp-B0h] BYREF
  int v121[4]; // [rsp+A0h] [rbp-A8h] BYREF
  PVOID v122; // [rsp+B0h] [rbp-98h] BYREF
  PVOID v123; // [rsp+B8h] [rbp-90h]
  __int64 v124; // [rsp+C0h] [rbp-88h] BYREF
  PVOID v125; // [rsp+C8h] [rbp-80h] BYREF
  char v126[8]; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v127; // [rsp+D8h] [rbp-70h]
  char v128; // [rsp+E0h] [rbp-68h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-60h] BYREF
  void *retaddr; // [rsp+148h] [rbp+0h]

  v5 = Length;
  memset(v121, 0, sizeof(v121));
  v120 = 0LL;
  v107 = 0;
  v104 = 0;
  CurrentThread = KeGetCurrentThread();
  p_LockNV = &CurrentThread->Header.LockNV;
  PreviousMode = CurrentThread->PreviousMode;
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
LABEL_117:
        v14 = IopSetOperationAccess[v8];
        goto LABEL_27;
    }
    v104 = 1;
    goto LABEL_117;
  }
  v8 = FileInformationClass;
  if ( (unsigned int)FileInformationClass >= FileStatLxInformation )
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
    if ( !Length )
      goto LABEL_26;
    if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)FileInformationClass) - 1LL) & (unsigned __int64)FileInformation) != 0 )
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
  v108 = v15;
  v16 = (char *)Object;
  v125 = Object;
  if ( v15 >= 0 )
  {
    v17 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v17 )
    {
      if ( (*v17 & 4) != 0 )
      {
        IsProcessAppContainer = IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v16 = (char *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          v15 = -1073739504;
          v108 = -1073739504;
        }
      }
    }
  }
  LODWORD(SpinLock) = v15;
  if ( v15 < 0 )
    return v15;
  v18 = v16 + 80;
  v110 = v16 + 80;
  if ( (*((_DWORD *)v16 + 20) & 0x800) != 0 )
  {
    AttachedDevice = IoGetAttachedDevice(*((PDEVICE_OBJECT *)v16 + 1));
    v111 = AttachedDevice;
    v22 = 1LL;
    v18 = v110;
  }
  else
  {
    v19 = *((_QWORD *)v16 + 2);
    if ( !v19 || (v20 = *(struct _DEVICE_OBJECT **)(v19 + 8)) == 0LL )
    {
      v66 = *(_QWORD *)(*((_QWORD *)v16 + 1) + 56LL);
      if ( !v66 || (v20 = *(struct _DEVICE_OBJECT **)(v66 + 8)) == 0LL )
        v20 = (struct _DEVICE_OBJECT *)*((_QWORD *)v16 + 1);
    }
    p_AttachedDevice = &v20->AttachedDevice;
    v22 = 1LL;
    if ( !v20->AttachedDevice )
      goto LABEL_37;
    if ( !*((_QWORD *)v16 + 26) )
      goto LABEL_35;
    FileObjectExtension = (struct _DEVICE_OBJECT **)IopGetFileObjectExtension((__int64)v16, 1, 0LL);
    if ( !FileObjectExtension || (v71 = *FileObjectExtension, (v111 = v71) == 0LL) )
    {
      v18 = v110;
      goto LABEL_35;
    }
    v89 = IopVerifyDeviceObjectOnStack(v20, v71);
    v18 = v110;
    v22 = 1LL;
    if ( !v89 )
    {
LABEL_35:
      for ( i = *p_AttachedDevice; i; i = i->AttachedDevice )
        v20 = i;
LABEL_37:
      AttachedDevice = v20;
      v111 = v20;
      goto LABEL_38;
    }
    AttachedDevice = v111;
  }
LABEL_38:
  if ( (*v18 & 2) != 0 )
  {
    v25 = KeGetCurrentThread();
    --v25->KernelApcDisable;
    v26 = (volatile __int32 *)Object;
    if ( _InterlockedExchange((volatile __int32 *)Object + 29, v22) )
    {
      KeLeaveCriticalRegionThread(KeGetCurrentThread());
      v16 = (char *)Object;
      v15 = IopAcquireFileObjectLock(Object);
      v108 = v15;
      LODWORD(SpinLock) = v15;
      if ( v109 )
      {
LABEL_158:
        ObfDereferenceObjectWithTag(v16, 0x746C6644u);
        return v15;
      }
      v18 = v110;
      v22 = 1LL;
      AttachedDevice = v111;
    }
    else
    {
      v27 = (volatile signed __int64 *)Object;
      if ( ObpTraceFlags )
      {
        ObpPushStackInfo((_DWORD)Object - 48);
        v18 = v110;
        v22 = 1LL;
        AttachedDevice = v111;
      }
      v28 = _InterlockedExchangeAdd64(v27 - 6, v22) + 1;
      if ( v28 <= 1 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v27, 0x10uLL, v28);
      v16 = (char *)Object;
    }
    if ( v8 == FilePositionInformation )
    {
      if ( (unsigned int)v5 >= 8 )
      {
        v29 = *(_QWORD *)FileInformation;
        v127 = *(_QWORD *)FileInformation;
        if ( (*v18 & 8) != 0
          && (SectorSize = AttachedDevice->SectorSize) != 0
          && ((SectorSize - 1) & (unsigned int)v29) != 0
          || v29 < 0 )
        {
          v30 = -1073741811;
        }
        else
        {
          *((_QWORD *)v16 + 13) = v29;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 0LL;
          v30 = v108;
        }
        v31 = KeGetCurrentThread();
        v31->OtherTransferCount += (unsigned int)v5;
        __addgsqword(0x2EF8u, (unsigned int)v5);
        _InterlockedExchange((volatile __int32 *)Object + 29, 0);
        v32 = (char *)Object;
        if ( *((_DWORD *)Object + 28) )
        {
          KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
          v22 = 1LL;
        }
        v33 = v32 - 48;
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo((_DWORD)v33);
          v22 = 1LL;
        }
        v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33, 0xFFFFFFFFFFFFFFFFuLL);
        v35 = v34 <= 1;
        v36 = v34 - 1;
        if ( v35 )
        {
          if ( *((_QWORD *)v33 + 1) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v33[24] ^ (unsigned __int64)BYTE1(v33)],
              (ULONG_PTR)Object,
              v22,
              *((_QWORD *)v33 + 1));
          if ( v36 < 0 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v36);
          if ( KeAreAllApcsDisabled() )
          {
            ObpDeferObjectDeletion(v33);
          }
          else
          {
            v91 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v33);
            if ( v91 )
              ObpHandleRevocationBlockRemoveObject(v91);
            if ( ObpTraceFlags )
              ObpDeregisterObject(v33);
            ObpRemoveObjectRoutine(v33, 0LL);
          }
          v22 = 1LL;
        }
        v37 = KeGetCurrentThread();
        v38 = v37->KernelApcDisable++ == -1;
        if ( v38
          && ($B476B70DB57F76B110DA5B9238C3E934 *)v37->ApcState.ApcListHead[0].Flink != &v37->152
          && !v37->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
          v22 = 1LL;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo((_DWORD)v33);
          v22 = 1LL;
        }
        v39 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33, 0xFFFFFFFFFFFFFFFFuLL);
        v35 = v39 <= 1;
        v40 = v39 - 1;
        if ( v35 )
        {
          if ( *((_QWORD *)v33 + 1) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v33[24] ^ (unsigned __int64)BYTE1(v33)],
              (ULONG_PTR)Object,
              v22,
              *((_QWORD *)v33 + 1));
          if ( v40 < 0 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v40);
          if ( KeAreAllApcsDisabled() )
          {
            ObpDeferObjectDeletion(v33);
          }
          else
          {
            v92 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v33);
            if ( v92 )
              ObpHandleRevocationBlockRemoveObject(v92);
            if ( ObpTraceFlags )
              ObpDeregisterObject(v33);
            ObpRemoveObjectRoutine(v33, 0LL);
          }
        }
        return v30;
      }
      _InterlockedExchange(v26 + 29, 0);
      v90 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObjectWithTag(v90, 0x746C6644u);
      KeLeaveCriticalRegionThread(KeGetCurrentThread());
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741820;
    }
    v42 = 1;
  }
  else
  {
    v116 = 1;
    v117 = 6;
    v118 = 0;
    v119[1] = v119;
    v119[0] = v119;
    v42 = 0;
  }
  v103 = v42;
  if ( (*v18 & 0x4000000) == 0 )
  {
    v43 = v16 + 152;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KiAcquireKobjectLockSafe(v43);
    *((_DWORD *)v43 + 1) = 0;
    _InterlockedAnd((volatile signed __int32 *)v43, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    v16 = (char *)Object;
    AttachedDevice = v111;
  }
  if ( v8 == FileTrackingInformation )
  {
    if ( (unsigned int)v5 < 0x10 )
    {
      v15 = -1073741820;
    }
    else
    {
      if ( v42 )
        v79 = (__int16 *)(v16 + 152);
      else
        v79 = &v116;
      v80 = IopTrackLink((int)v16, (int)v121, (int)FileInformation, v5, (__int64)v79, PreviousMode);
      v15 = v80;
      LODWORD(SpinLock) = v80;
      if ( v80 >= 0 )
      {
        IoStatusBlock->Information = 0LL;
        IoStatusBlock->Status = v80;
      }
    }
    if ( v42 )
    {
      _InterlockedExchange((volatile __int32 *)v16 + 29, 0);
      v81 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObjectWithTag(v81, 0x746C6644u);
      KeLeaveCriticalRegionThread(KeGetCurrentThread());
      v16 = (char *)Object;
    }
    goto LABEL_158;
  }
  Irp = IopAllocateIrpExReturn(
          AttachedDevice,
          (unsigned __int8)AttachedDevice->StackSize,
          (unsigned __int8)v42 ^ 1u,
          retaddr);
  v47 = Irp;
  SpinLock = (PKSPIN_LOCK)Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup(v16, 0LL);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = v16;
  *(_QWORD *)(Irp + 152) = p_LockNV;
  *(_BYTE *)(Irp + 64) = PreviousMode;
  if ( v42 )
  {
    *(_QWORD *)(Irp + 80) = 0LL;
    v48 = IoStatusBlock;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_BYTE *)(Irp + 71) |= 2u;
  }
  else
  {
    if ( PreviousMode == 1 )
      v107 = KeSetKernelStackSwapEnable(0);
    *(_QWORD *)(v47 + 80) = &v116;
    *(_QWORD *)(v47 + 72) = v121;
    *(_DWORD *)(v47 + 16) = 4;
    v48 = IoStatusBlock;
  }
  *(_QWORD *)(v47 + 88) = 0LL;
  v49 = *(_QWORD *)(v47 + 184) - 72LL;
  p_LockNV = (_DWORD *)v49;
  *(_BYTE *)v49 = 6;
  *(_QWORD *)(v49 + 48) = v16;
  *(_QWORD *)(v47 + 24) = 0LL;
  *(_QWORD *)(v47 + 8) = 0LL;
  PoolWithQuota_0 = (int *)IopVerifierExAllocatePoolWithQuota_0(v46, v5);
  SpinLock[3] = (KSPIN_LOCK)PoolWithQuota_0;
  memmove(PoolWithQuota_0, FileInformation, v5);
  if ( ((unsigned int)(v8 - 19) <= 1 || v8 == FilePositionInformation) && PoolWithQuota_0[1] < 0 )
    RtlRaiseStatus(-1073741811);
  v51 = (IRP *)SpinLock;
  *((_DWORD *)SpinLock + 4) |= 0x830u;
  v52 = p_LockNV;
  p_LockNV[2] = v5;
  v52[4] = v8;
  Thread = v51->Tail.Overlay.Thread;
  p_LockNV = &Thread[1].SystemCallNumber;
  p_ThreadListEntry = &v51->ThreadListEntry;
  v115 = (HANDLE *)KeGetCurrentIrql();
  __writecr8(2uLL);
  SpinLock = (PKSPIN_LOCK)&Thread[1].WaitBlockFill11[16];
  KxAcquireSpinLock((PKSPIN_LOCK)&Thread[1].WaitBlockFill11[16]);
  v55 = (struct _LIST_ENTRY *)p_LockNV;
  v56 = *(struct _LIST_ENTRY **)p_LockNV;
  if ( *(_DWORD **)(*(_QWORD *)p_LockNV + 8LL) != p_LockNV )
    __fastfail(3u);
  p_ThreadListEntry->Flink = v56;
  v51->ThreadListEntry.Blink = v55;
  v56->Blink = p_ThreadListEntry;
  v55->Flink = p_ThreadListEntry;
  KxReleaseSpinLock(SpinLock);
  __writecr8((unsigned __int8)v115);
  v57 = KeGetCurrentThread();
  ++v57->OtherOperationCount;
  __incgsdword(0x2EE4u);
  if ( v8 == FileModeInformation )
  {
    MasterIrp = v51->AssociatedIrp.MasterIrp;
    v87 = *(_DWORD *)&MasterIrp->Type;
    if ( (*(_DWORD *)&MasterIrp->Type & 0xFFFFFFC9) == 0 )
    {
      v93 = v110;
      if ( ((v87 & 0x30) == 0 || (*v110 & 2) != 0)
        && ((v87 & 0x30) != 0 || (*v110 & 2) == 0)
        && (*(_DWORD *)&MasterIrp->Type & 0x30) != 0x30 )
      {
        v94 = *v110;
        if ( (*v110 & 8) == 0 )
        {
          if ( (v87 & 2) != 0 )
            v95 = v94 | 0x10;
          else
            v95 = v94 & 0xFFFFFFEF;
          *v110 = v95;
        }
        if ( (*(_DWORD *)&MasterIrp->Type & 4) != 0 )
          *v93 |= 0x20u;
        else
          *v93 &= ~0x20u;
        v96 = *v93;
        if ( (*v93 & 2) != 0 )
        {
          if ( (*(_DWORD *)&MasterIrp->Type & 0x10) != 0 )
            v97 = v96 | 4;
          else
            v97 = v96 & 0xFFFFFFFB;
          *v93 = v97;
        }
        v60 = 0;
        goto LABEL_126;
      }
    }
    goto LABEL_177;
  }
  if ( (unsigned int)(v8 - 10) <= 0x37 )
  {
    v58 = 0x80000000200003LL;
    if ( _bittest64(&v58, v8 - 10) )
    {
      v75 = v51->AssociatedIrp.MasterIrp;
      Flags = v75->Flags;
      if ( !Flags || (Flags & 1) != 0 || (int)v5 - 20 < Flags )
      {
        v60 = -1073741811;
        v51->IoStatus.Status = -1073741811;
        v59 = v103;
        goto LABEL_88;
      }
      if ( v8 == FileMoveClusterInformation )
      {
        v52[8] = *(_DWORD *)&v75->Type;
      }
      else
      {
        if ( v8 == FileRenameInformationEx )
          Type = (*(_DWORD *)&v75->Type & 1) != 0;
        else
          Type = v75->Type;
        *((_BYTE *)v52 + 32) = Type;
        if ( v104 )
          *((_BYTE *)v52 + 2) |= 1u;
      }
      if ( *((_WORD *)&v75->Flags + 2) == 92 || v75->MdlAddress )
      {
        v78 = IopOpenLinkOrRenameTarget(&v120, v51, v75, Object);
        v60 = v78;
        v59 = v103;
        if ( v78 < 0 )
        {
          v51->IoStatus.Status = v78;
          goto LABEL_88;
        }
        goto LABEL_87;
      }
      goto LABEL_86;
    }
  }
  switch ( v8 )
  {
    case FileShortNameInformation:
      v98 = v51->AssociatedIrp.MasterIrp;
      v99 = v5 - 4;
      v59 = v103;
      if ( v99 < *(_DWORD *)&v98->Type )
      {
        v60 = -1073741811;
        v51->IoStatus.Status = -1073741811;
        goto LABEL_88;
      }
      if ( *(&v98->Size + 1) == 92 )
      {
        v60 = -1073741811;
        v51->IoStatus.Status = -1073741811;
        goto LABEL_88;
      }
      goto LABEL_87;
    case FileDispositionInformation:
    case FileDispositionInformationEx:
      if ( v51->AssociatedIrp.MasterIrp->Type )
        *((_QWORD *)v52 + 4) = FileHandle;
      goto LABEL_86;
    case FileCompletionInformation:
      v67 = (HANDLE *)v51->AssociatedIrp.MasterIrp;
      v115 = v67;
      v68 = (KSPIN_LOCK *)Object;
      if ( !*((_QWORD *)Object + 22) )
      {
        v69 = v110;
        if ( (*v110 & 2) == 0 )
        {
          v60 = ObReferenceObjectByHandle(*v67, 2u, IoCompletionObjectType, PreviousMode, &v114, 0LL);
          if ( v60 >= 0 )
          {
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x63436F49u);
            if ( PoolWithTag )
            {
              v105 = KeAcquireSpinLockRaiseToDpc(v68 + 23);
              if ( v68[22] )
              {
                KxReleaseSpinLock(v68 + 23);
                __writecr8(v105);
                ExFreePoolWithTag(PoolWithTag, 0);
                ObfDereferenceObjectWithTag(v114, 0x746C6644u);
                v60 = -1073741752;
              }
              else
              {
                *v69 &= ~0x400u;
                *PoolWithTag = v114;
                PoolWithTag[1] = v115[1];
                v68[22] = (KSPIN_LOCK)PoolWithTag;
                v108 = 0;
                KxReleaseSpinLock(v68 + 23);
                __writecr8(v105);
                v60 = 0;
              }
            }
            else
            {
              ObfDereferenceObjectWithTag(v114, 0x746C6644u);
              v60 = -1073741670;
            }
          }
          goto LABEL_126;
        }
      }
      goto LABEL_177;
    case FileReplaceCompletionInformation:
      v100 = v51->AssociatedIrp.MasterIrp;
      v101 = 0LL;
      v123 = 0LL;
      if ( *((_QWORD *)Object + 22) )
      {
        if ( *(_QWORD *)&v100->Type )
        {
          v60 = ObReferenceObjectByHandle(*(HANDLE *)&v100->Type, 2u, IoCompletionObjectType, PreviousMode, &v122, 0LL);
          v101 = v122;
          v123 = v122;
        }
        else
        {
          v60 = v108;
        }
        if ( v60 >= 0 )
        {
          v60 = IopReplaceCompletionPort(Object, v101, v100->MdlAddress);
          if ( v101 )
          {
            ObfDereferenceObjectWithTag(v101, 0x746C6644u);
            v51->IoStatus.Status = v60;
            v51->IoStatus.Information = 0LL;
            v59 = v103;
            goto LABEL_88;
          }
        }
        goto LABEL_126;
      }
      goto LABEL_177;
    case FileIoCompletionNotificationInformation:
      v72 = v51->AssociatedIrp.MasterIrp;
      v73 = v110;
      v74 = *v110;
      if ( (*v110 & 2) != 0 )
      {
        v60 = -1073741811;
      }
      else
      {
        v108 = 0;
        if ( (*(_DWORD *)&v72->Type & 1) != 0 )
          *v110 = v74 | 0x2000000;
        if ( (*(_DWORD *)&v72->Type & 2) != 0 )
          *v73 |= 0x4000000u;
        v60 = v108;
        if ( (*(_DWORD *)&v72->Type & 4) != 0 )
          *v73 |= 0x8000000u;
      }
      v51->IoStatus.Status = v60;
      v51->IoStatus.Information = 0LL;
      v59 = v103;
      goto LABEL_88;
    case FileIoStatusBlockRangeInformation:
      if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
      {
        if ( (*v110 & 2) != 0 )
          v60 = -1073741811;
        else
          v60 = IopSetFileObjectIosbRange(Object, v51);
      }
      else
      {
        v60 = -1073741727;
      }
      v51->IoStatus.Status = v60;
      v51->IoStatus.Information = 0LL;
      v59 = v103;
      goto LABEL_88;
    case FileIoPriorityHintInformation:
      v83 = v51->AssociatedIrp.MasterIrp;
      if ( *(_DWORD *)&v83->Type <= 2u )
      {
        v60 = IopAllocateFileObjectExtension(Object, &v124);
        if ( v60 >= 0 )
          *(_DWORD *)(v124 + 80) = *(_DWORD *)&v83->Type + 1;
        goto LABEL_126;
      }
LABEL_177:
      v60 = -1073741811;
LABEL_126:
      v51->IoStatus.Status = v60;
      v51->IoStatus.Information = 0LL;
      v59 = v103;
      goto LABEL_88;
  }
  if ( v8 != FileMemoryPartitionInformation )
  {
LABEL_86:
    v59 = v103;
LABEL_87:
    v60 = IopCallDriverReference(v111, v51, v59, Object, 2);
LABEL_88:
    v61 = PreviousMode;
    goto LABEL_89;
  }
  v61 = PreviousMode;
  if ( PreviousMode )
  {
    v60 = -1073741790;
  }
  else
  {
    v60 = IopSetFileMemoryPartitionInformation(Object, v51->AssociatedIrp.MasterIrp, (unsigned int)v5);
    v61 = 0;
  }
  v51->IoStatus.Status = v60;
  v51->IoStatus.Information = 0LL;
  v59 = v103;
LABEL_89:
  if ( v60 == 259 )
  {
    if ( !v59 )
    {
      v84 = KeWaitForSingleObject(&v116, Executive, v61, 0, 0LL);
      if ( v84 == 257 || v84 == 192 )
        IopCancelAlertedRequest(&v116, v51);
      v60 = v121[0];
      *v48 = *(PIO_STATUS_BLOCK)v121;
      goto LABEL_96;
    }
    v82 = (volatile __int32 *)Object;
    v60 = IopWaitForSynchronousIo(v51);
    _InterlockedExchange(v82 + 29, 0);
    v63 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
  }
  else
  {
    if ( !v59 )
      v51->UserEvent = 0LL;
    v51->UserIosb = v48;
    v62 = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((_DWORD)v51 + 120, (unsigned int)&v128, (unsigned int)v126, (unsigned int)&v125, (__int64)v126);
    __writecr8(v62);
    if ( !v59 )
      goto LABEL_96;
    _InterlockedExchange((volatile __int32 *)Object + 29, 0);
    v63 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
  }
  ObfDereferenceObjectWithTag(v63, 0x746C6644u);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
LABEL_96:
  if ( v107 )
    KeSetKernelStackSwapEnable(1u);
  if ( v120 )
    ObCloseHandle(v120, 0);
  return v60;
}

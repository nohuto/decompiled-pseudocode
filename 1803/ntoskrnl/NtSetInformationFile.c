/*
 * XREFs of NtSetInformationFile @ 0x1400ECB00
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140060FB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1400651D4 (IopVerifyDeviceObjectOnStack.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetFileObjectExtension @ 0x140069628 (IopGetFileObjectExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140069670 (IopAllocateFileObjectExtension.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1400AA020 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KeSetKernelStackSwapEnable @ 0x1400B71D0 (KeSetKernelStackSwapEnable.c)
 *     ObpDeferObjectDeletion @ 0x1400BD920 (ObpDeferObjectDeletion.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     IopWaitForSynchronousIo @ 0x1400EE730 (IopWaitForSynchronousIo.c)
 *     IopCallDriverReference @ 0x1400EEF70 (IopCallDriverReference.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAreAllApcsDisabled @ 0x1400F0AD0 (KeAreAllApcsDisabled.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDevice @ 0x140107050 (IoGetAttachedDevice.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     IopReplaceCompletionPort @ 0x140155AE0 (IopReplaceCompletionPort.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     RtlIsSandboxedToken @ 0x1404DD0B0 (RtlIsSandboxedToken.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140552910 (ObpHandleRevocationBlockRemoveObject.c)
 *     IopOpenLinkOrRenameTarget @ 0x140576138 (IopOpenLinkOrRenameTarget.c)
 *     IopTrackLink @ 0x14057DFD0 (IopTrackLink.c)
 *     PsIsProcessAppContainer @ 0x14058A3A4 (PsIsProcessAppContainer.c)
 *     ObpRemoveObjectRoutine @ 0x14059C950 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x14071957C (IopCancelAlertedRequest.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x14071AF1C (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14071CDA4 (IopSetFileMemoryPartitionInformation.c)
 *     ObpDeregisterObject @ 0x14075A4D0 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
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
  struct _FILE_OBJECT *v16; // rdi
  _DWORD *v17; // rax
  ULONG *p_Flags; // rcx
  PVPB Vpb; // rbx
  struct _DEVICE_OBJECT *v20; // rbx
  struct _DEVICE_OBJECT **p_AttachedDevice; // r15
  unsigned __int64 v22; // r10
  struct _DEVICE_OBJECT *i; // rax
  PDEVICE_OBJECT AttachedDevice; // r11
  struct _KTHREAD *v25; // rax
  volatile __int32 *v26; // r15
  volatile signed __int64 *v27; // rbx
  signed __int64 v28; // rax
  LARGE_INTEGER v29; // rax
  NTSTATUS v30; // r15d
  struct _KTHREAD *v31; // rcx
  PVOID v32; // rdi
  signed __int64 v33; // rdi
  signed __int64 v34; // rax
  bool v35; // cc
  signed __int64 v36; // rax
  struct _KTHREAD *v37; // rcx
  bool v38; // zf
  signed __int64 v39; // rbx
  signed __int64 v40; // rbx
  char v42; // r15
  volatile signed __int32 *p_Lock; // rbx
  unsigned __int8 CurrentIrql; // di
  IRP *v45; // rax
  IRP *v46; // rdi
  PIO_STATUS_BLOCK v47; // r15
  PIO_STATUS_BLOCK v48; // rax
  __int16 *v49; // rcx
  __int64 CurrentStackLocation; // rcx
  KSPIN_LOCK *PoolWithQuota_0; // rax
  unsigned __int64 v52; // rax
  PETHREAD Thread; // rax
  struct _LIST_ENTRY *p_SystemCallNumber; // r12
  LIST_ENTRY *p_ThreadListEntry; // rbx
  struct _LIST_ENTRY *Flink; // rax
  struct _KTHREAD *v57; // rax
  __int64 v58; // rcx
  char v59; // r12
  PVOID v60; // r14
  int v61; // ebx
  KPROCESSOR_MODE v62; // al
  unsigned __int8 v63; // bl
  PVOID v64; // rbx
  BOOLEAN v65; // al
  struct _DEVICE_OBJECT **FileObjectExtension; // rax
  char v67; // r8
  USHORT SectorSize; // cx
  struct _DEVICE_OBJECT *v69; // rcx
  PVPB v70; // rbx
  struct _IRP *v71; // r13
  _QWORD *PoolWithTag; // rbx
  KSPIN_LOCK *v73; // rcx
  struct _IRP *v74; // rdx
  int v75; // eax
  int v76; // ecx
  struct _IRP *v77; // r8
  unsigned int Flags; // ecx
  char Type; // al
  unsigned __int64 v80; // rcx
  int v81; // eax
  __int16 *p_Event; // rax
  NTSTATUS v83; // eax
  NTSTATUS v84; // ebx
  PVOID v85; // rdi
  struct _IRP *v86; // r12
  char IsSandboxedToken; // bl
  NTSTATUS v88; // eax
  struct _IRP *v89; // r13
  PVOID v90; // r12
  char IsProcessAppContainer; // al
  char v92; // al
  PVOID v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  struct _IRP *MasterIrp; // r8
  int v103; // edx
  int v104; // ecx
  unsigned int v105; // ecx
  unsigned int v106; // ecx
  struct _IRP *v107; // rcx
  __int64 v108; // r8
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-108h]
  char v110; // [rsp+31h] [rbp-107h]
  int v111; // [rsp+34h] [rbp-104h]
  BOOLEAN v112; // [rsp+38h] [rbp-100h]
  char v113; // [rsp+39h] [rbp-FFh]
  PVOID v114; // [rsp+40h] [rbp-F8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-F0h] BYREF
  unsigned __int64 v116; // [rsp+50h] [rbp-E8h]
  char v117; // [rsp+58h] [rbp-E0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-D8h]
  PIRP Irp; // [rsp+68h] [rbp-D0h]
  PKSPIN_LOCK SpinLock; // [rsp+70h] [rbp-C8h]
  PVOID v121; // [rsp+78h] [rbp-C0h] BYREF
  __int16 v122; // [rsp+80h] [rbp-B8h] BYREF
  char v123; // [rsp+82h] [rbp-B6h]
  int v124; // [rsp+84h] [rbp-B4h]
  _QWORD v125[2]; // [rsp+88h] [rbp-B0h] BYREF
  HANDLE v126; // [rsp+98h] [rbp-A0h] BYREF
  __int128 v127; // [rsp+A0h] [rbp-98h] BYREF
  PVOID v128; // [rsp+B0h] [rbp-88h] BYREF
  PVOID v129; // [rsp+B8h] [rbp-80h]
  __int64 v130; // [rsp+C0h] [rbp-78h] BYREF
  char v131[8]; // [rsp+C8h] [rbp-70h] BYREF
  LARGE_INTEGER v132; // [rsp+D0h] [rbp-68h]
  char v133; // [rsp+D8h] [rbp-60h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-58h] BYREF
  void *retaddr; // [rsp+138h] [rbp+0h]

  v5 = Length;
  v127 = 0uLL;
  v126 = 0LL;
  v112 = 0;
  v113 = 0;
  CurrentThread = KeGetCurrentThread();
  SpinLock = (PKSPIN_LOCK)CurrentThread;
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
LABEL_113:
        v14 = IopSetOperationAccess[v8];
        goto LABEL_26;
    }
    v113 = 1;
    goto LABEL_113;
  }
  v8 = FileInformationClass;
  if ( (unsigned int)FileInformationClass >= FileLinkInformationEx )
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
      goto LABEL_25;
    v13 = 0LL;
    if ( Length != 1 )
      v13 = 3LL;
    if ( (v13 & (unsigned __int64)FileInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation + Length <= 0x7FFFFFFF0000LL
      && (char *)FileInformation + Length >= FileInformation )
    {
      goto LABEL_25;
    }
  }
  else
  {
    if ( !Length )
      goto LABEL_25;
    if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)FileInformationClass) - 1LL) & (unsigned __int64)FileInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation + Length <= 0x7FFFFFFF0000LL
      && (char *)FileInformation + Length >= FileInformation )
    {
      goto LABEL_25;
    }
  }
  MEMORY[0x7FFFFFFF0000] = 0;
LABEL_25:
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
LABEL_26:
  v15 = ObReferenceObjectByHandle(FileHandle, v14, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v111 = v15;
  v16 = (struct _FILE_OBJECT *)Object;
  v114 = Object;
  if ( v15 >= 0 )
  {
    v17 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v17 )
    {
      if ( (*v17 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v16 = (struct _FILE_OBJECT *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          v15 = -1073739504;
          v111 = -1073739504;
        }
      }
    }
  }
  LODWORD(Irp) = v15;
  if ( v15 < 0 )
    return v15;
  p_Flags = &v16->Flags;
  v116 = (unsigned __int64)&v16->Flags;
  if ( (v16->Flags & 0x800) != 0 )
  {
    AttachedDevice = IoGetAttachedDevice(v16->DeviceObject);
    DeviceObject = AttachedDevice;
    v22 = 1LL;
    p_Flags = (ULONG *)v116;
  }
  else
  {
    Vpb = v16->Vpb;
    if ( !Vpb || (v20 = Vpb->DeviceObject) == 0LL )
    {
      v70 = v16->DeviceObject->Vpb;
      if ( !v70 || (v20 = v70->DeviceObject) == 0LL )
        v20 = v16->DeviceObject;
    }
    p_AttachedDevice = &v20->AttachedDevice;
    v22 = 1LL;
    if ( !v20->AttachedDevice )
      goto LABEL_36;
    if ( !v16->FileObjectExtension )
      goto LABEL_34;
    FileObjectExtension = (struct _DEVICE_OBJECT **)IopGetFileObjectExtension((__int64)v16, 1, 0LL);
    if ( !FileObjectExtension || (v69 = *FileObjectExtension, (DeviceObject = v69) == 0LL) )
    {
      p_Flags = (ULONG *)v116;
      goto LABEL_34;
    }
    v92 = IopVerifyDeviceObjectOnStack((__int64)v20, (__int64)v69, v67);
    p_Flags = (ULONG *)v116;
    v22 = 1LL;
    if ( !v92 )
    {
LABEL_34:
      for ( i = *p_AttachedDevice; i; i = i->AttachedDevice )
        v20 = i;
LABEL_36:
      AttachedDevice = v20;
      DeviceObject = v20;
      goto LABEL_37;
    }
    AttachedDevice = DeviceObject;
  }
LABEL_37:
  if ( (*p_Flags & 2) == 0 )
  {
    v122 = 1;
    v123 = 6;
    v124 = 0;
    v125[1] = v125;
    v125[0] = v125;
    v42 = 0;
    goto LABEL_60;
  }
  v25 = KeGetCurrentThread();
  --v25->KernelApcDisable;
  v26 = (volatile __int32 *)Object;
  if ( _InterlockedExchange((volatile __int32 *)Object + 29, v22) )
  {
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
    v16 = (struct _FILE_OBJECT *)Object;
    v84 = IopAcquireFileObjectLock(Object);
    v111 = v84;
    LODWORD(Irp) = v84;
    if ( v117 )
      goto LABEL_162;
    p_Flags = (ULONG *)v116;
    v22 = 1LL;
    AttachedDevice = DeviceObject;
  }
  else
  {
    v27 = (volatile signed __int64 *)Object;
    if ( ObpTraceFlags )
    {
      ObpPushStackInfo((_DWORD)Object - 48);
      p_Flags = (ULONG *)v116;
      v22 = 1LL;
      AttachedDevice = DeviceObject;
    }
    v28 = _InterlockedExchangeAdd64(v27 - 6, v22) + 1;
    if ( v28 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 0x10uLL, v28);
    v16 = (struct _FILE_OBJECT *)Object;
  }
  if ( v8 != FilePositionInformation )
  {
    v42 = 1;
LABEL_60:
    v110 = v42;
    if ( (*p_Flags & 0x4000000) == 0 )
    {
      p_Lock = &v16->Event.Header.Lock;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      KiAcquireKobjectLockSafe(p_Lock);
      *((_DWORD *)p_Lock + 1) = 0;
      _InterlockedAnd(p_Lock, 0xFFFFFF7F);
      __writecr8(CurrentIrql);
      v16 = (struct _FILE_OBJECT *)Object;
      AttachedDevice = DeviceObject;
    }
    if ( v8 != FileTrackingInformation )
    {
      v45 = (IRP *)IopAllocateIrpExReturn(
                     AttachedDevice,
                     (unsigned __int8)AttachedDevice->StackSize,
                     (unsigned __int8)v42 ^ 1u,
                     retaddr);
      Irp = v45;
      if ( !v45 )
      {
        IopAllocateIrpCleanup(v16, 0LL);
        return -1073741670;
      }
      v45->Tail.Overlay.OriginalFileObject = v16;
      v46 = v45;
      v45->Tail.Overlay.Thread = (PETHREAD)SpinLock;
      v45->RequestorMode = PreviousMode;
      if ( v42 )
      {
        v45->AllocationFlags |= 2u;
        v47 = IoStatusBlock;
        v48 = IoStatusBlock;
        v49 = 0LL;
      }
      else
      {
        if ( PreviousMode == 1 )
          v112 = KeSetKernelStackSwapEnable(0);
        v46->Flags = 4;
        v48 = (PIO_STATUS_BLOCK)&v127;
        v49 = &v122;
        v47 = IoStatusBlock;
      }
      v46->UserEvent = (PKEVENT)v49;
      v46->UserIosb = v48;
      v46->Overlay.AllocationSize.QuadPart = 0LL;
      CurrentStackLocation = (__int64)v46->Tail.Overlay.CurrentStackLocation;
      v116 = CurrentStackLocation;
      *(_BYTE *)(CurrentStackLocation - 72) = 6;
      *(_QWORD *)(CurrentStackLocation - 24) = v114;
      v46->AssociatedIrp.MasterIrp = 0LL;
      v46->MdlAddress = 0LL;
      PoolWithQuota_0 = (KSPIN_LOCK *)IopVerifierExAllocatePoolWithQuota_0(CurrentStackLocation, v5);
      SpinLock = PoolWithQuota_0;
      v46->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota_0;
      memmove(PoolWithQuota_0, FileInformation, v5);
      if ( ((unsigned int)(v8 - 19) <= 1 || v8 == FilePositionInformation) && *((int *)SpinLock + 1) < 0 )
        RtlRaiseStatus(-1073741811);
      v46->Flags |= 0x830u;
      v52 = v116;
      *(_DWORD *)(v116 - 64) = v5;
      *(_DWORD *)(v52 - 56) = v8;
      Thread = v46->Tail.Overlay.Thread;
      p_SystemCallNumber = (struct _LIST_ENTRY *)&Thread[1].SystemCallNumber;
      p_ThreadListEntry = &v46->ThreadListEntry;
      Irp = (PIRP)KeGetCurrentIrql();
      __writecr8(2uLL);
      SpinLock = (PKSPIN_LOCK)&Thread[1].WaitBlockFill11[16];
      KxAcquireSpinLock((PKSPIN_LOCK)&Thread[1].WaitBlockFill11[16]);
      Flink = p_SystemCallNumber->Flink;
      if ( p_SystemCallNumber->Flink->Blink != p_SystemCallNumber )
        __fastfail(3u);
      p_ThreadListEntry->Flink = Flink;
      v46->ThreadListEntry.Blink = p_SystemCallNumber;
      Flink->Blink = p_ThreadListEntry;
      p_SystemCallNumber->Flink = p_ThreadListEntry;
      KxReleaseSpinLock(SpinLock);
      __writecr8((unsigned __int8)Irp);
      v57 = KeGetCurrentThread();
      ++v57->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( v8 == FileModeInformation )
      {
        MasterIrp = v46->AssociatedIrp.MasterIrp;
        v103 = *(_DWORD *)&MasterIrp->Type;
        v60 = v114;
        if ( (*(_DWORD *)&MasterIrp->Type & 0xFFFFFFC9) == 0
          && ((v103 & 0x30) == 0 || (*((_DWORD *)v114 + 20) & 2) != 0)
          && ((v103 & 0x30) != 0 || (*((_DWORD *)v114 + 20) & 2) == 0)
          && (*(_DWORD *)&MasterIrp->Type & 0x30) != 0x30 )
        {
          v104 = *((_DWORD *)v114 + 20);
          if ( (v104 & 8) == 0 )
          {
            if ( (v103 & 2) != 0 )
              v104 |= 0x10u;
            else
              v104 &= ~0x10u;
            *((_DWORD *)v114 + 20) = v104;
          }
          if ( (*(_DWORD *)&MasterIrp->Type & 4) != 0 )
            v105 = v104 | 0x20;
          else
            v105 = v104 & 0xFFFFFFDF;
          *((_DWORD *)v60 + 20) = v105;
          if ( (v105 & 2) != 0 )
          {
            if ( (*(_DWORD *)&MasterIrp->Type & 0x10) != 0 )
              v106 = v105 | 4;
            else
              v106 = v105 & 0xFFFFFFFB;
            *((_DWORD *)v60 + 20) = v106;
          }
          v61 = 0;
          goto LABEL_250;
        }
        goto LABEL_248;
      }
      if ( (unsigned int)(v8 - 10) <= 0x37 && (v58 = 0x80000000200003LL, _bittest64(&v58, v8 - 10)) )
      {
        v77 = v46->AssociatedIrp.MasterIrp;
        Flags = v77->Flags;
        if ( Flags && (Flags & 1) == 0 && (int)v5 - 20 >= Flags )
        {
          if ( v8 == FileMoveClusterInformation )
          {
            *(_DWORD *)(v116 - 40) = *(_DWORD *)&v77->Type;
          }
          else
          {
            if ( v8 == FileRenameInformationEx )
              Type = (*(_DWORD *)&v77->Type & 1) != 0;
            else
              Type = v77->Type;
            v80 = v116;
            *(_BYTE *)(v116 - 40) = Type;
            if ( v113 )
              *(_BYTE *)(v80 - 70) |= 1u;
          }
          if ( *((_WORD *)&v77->Flags + 2) == 92 || v77->MdlAddress )
          {
            v60 = v114;
            v81 = IopOpenLinkOrRenameTarget(&v126, v46, v77, v114);
            v61 = v81;
            v111 = v81;
            v59 = v110;
            if ( v81 < 0 )
            {
              v46->IoStatus.Status = v81;
              goto LABEL_85;
            }
            goto LABEL_84;
          }
          goto LABEL_83;
        }
      }
      else
      {
        if ( v8 != FileShortNameInformation )
        {
          switch ( v8 )
          {
            case FileDispositionInformation:
            case FileDispositionInformationEx:
              if ( v46->AssociatedIrp.MasterIrp->Type )
                *(_QWORD *)(v116 - 40) = FileHandle;
LABEL_83:
              v59 = v110;
              v60 = v114;
LABEL_84:
              v61 = IopCallDriverReference(DeviceObject, v46, 2);
              v111 = v61;
LABEL_85:
              v62 = PreviousMode;
              goto LABEL_86;
            case FileCompletionInformation:
              v71 = v46->AssociatedIrp.MasterIrp;
              v60 = v114;
              if ( !*((_QWORD *)v114 + 22) && (*((_DWORD *)v114 + 20) & 2) == 0 )
              {
                v61 = ObReferenceObjectByHandle(
                        *(HANDLE *)&v71->Type,
                        2u,
                        IoCompletionObjectType,
                        PreviousMode,
                        &v121,
                        0LL);
                v111 = v61;
                if ( v61 >= 0 )
                {
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x63436F49u);
                  if ( !PoolWithTag )
                  {
                    ObfDereferenceObjectWithTag(v121, 0x746C6644u);
                    v61 = -1073741670;
                    goto LABEL_250;
                  }
                  v116 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v114 + 23);
                  v73 = (KSPIN_LOCK *)((char *)v114 + 184);
                  if ( *((_QWORD *)v114 + 22) )
                  {
                    KxReleaseSpinLock(v73);
                    __writecr8(v116);
                    ExFreePoolWithTag(PoolWithTag, 0);
                    ObfDereferenceObjectWithTag(v121, 0x746C6644u);
                    v61 = -1073741752;
                    goto LABEL_250;
                  }
                  *((_DWORD *)v114 + 20) &= ~0x400u;
                  *PoolWithTag = v121;
                  PoolWithTag[1] = v71->MdlAddress;
                  *((_QWORD *)v60 + 22) = PoolWithTag;
                  v111 = 0;
                  KxReleaseSpinLock(v73);
                  __writecr8(v116);
                  v61 = 0;
                }
LABEL_126:
                v46->IoStatus.Status = v61;
                v46->IoStatus.Information = 0LL;
                v59 = v110;
                goto LABEL_85;
              }
              break;
            case FileReplaceCompletionInformation:
              v89 = v46->AssociatedIrp.MasterIrp;
              v90 = 0LL;
              v129 = 0LL;
              v60 = v114;
              if ( *((_QWORD *)v114 + 22) )
              {
                if ( *(_QWORD *)&v89->Type )
                {
                  v61 = ObReferenceObjectByHandle(
                          *(HANDLE *)&v89->Type,
                          2u,
                          IoCompletionObjectType,
                          PreviousMode,
                          &v128,
                          0LL);
                  v111 = v61;
                  v90 = v128;
                  v129 = v128;
                }
                else
                {
                  v61 = v111;
                }
                if ( v61 < 0 )
                  goto LABEL_126;
                v61 = IopReplaceCompletionPort(v114, v90, v89->MdlAddress);
                v111 = v61;
                if ( !v90 )
                  goto LABEL_126;
                ObfDereferenceObjectWithTag(v90, 0x746C6644u);
                v46->IoStatus.Information = 0LL;
LABEL_135:
                v46->IoStatus.Status = v61;
                v59 = v110;
                goto LABEL_85;
              }
              break;
            case FileIoCompletionNotificationInformation:
              v74 = v46->AssociatedIrp.MasterIrp;
              v60 = v114;
              v75 = *((_DWORD *)v114 + 20);
              if ( (v75 & 2) != 0 )
              {
                v61 = -1073741811;
                v111 = -1073741811;
              }
              else
              {
                v61 = 0;
                v111 = 0;
                v76 = *(_DWORD *)&v74->Type;
                if ( (*(_DWORD *)&v74->Type & 1) != 0 )
                {
                  v75 |= 0x2000000u;
                  *((_DWORD *)v114 + 20) = v75;
                  v76 = *(_DWORD *)&v74->Type;
                }
                if ( (v76 & 2) != 0 )
                {
                  v75 |= 0x4000000u;
                  *((_DWORD *)v60 + 20) = v75;
                  v76 = *(_DWORD *)&v74->Type;
                }
                if ( (v76 & 4) != 0 )
                  *((_DWORD *)v60 + 20) = v75 | 0x8000000;
              }
              v46->IoStatus.Information = 0LL;
              goto LABEL_135;
            case FileIoStatusBlockRangeInformation:
              v60 = v114;
              if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
              {
                if ( (*((_DWORD *)v114 + 20) & 2) != 0 )
                  v61 = -1073741811;
                else
                  v61 = IopSetFileObjectIosbRange(v114, v46);
              }
              else
              {
                v61 = -1073741727;
              }
              v46->IoStatus.Information = 0LL;
              goto LABEL_254;
            case FileIoPriorityHintInformation:
              v86 = v46->AssociatedIrp.MasterIrp;
              v60 = v114;
              if ( *(_DWORD *)&v86->Type <= 2u )
              {
                v61 = IopAllocateFileObjectExtension((__int64)v114, &v130);
                v111 = v61;
                if ( v61 >= 0 )
                {
                  *(_DWORD *)(v130 + 80) = *(_DWORD *)&v86->Type + 1;
                  v46->IoStatus.Status = v61;
                  v46->IoStatus.Information = 0LL;
                  v59 = v110;
                  goto LABEL_85;
                }
                goto LABEL_126;
              }
              break;
            case FileMemoryPartitionInformation:
              v62 = PreviousMode;
              if ( PreviousMode )
              {
                v61 = -1073741790;
                v60 = v114;
              }
              else
              {
                v108 = (unsigned int)v5;
                v60 = v114;
                v61 = IopSetFileMemoryPartitionInformation(v114, v46->AssociatedIrp.MasterIrp, v108);
                v62 = 0;
              }
              v111 = v61;
              v46->IoStatus.Status = v61;
              v46->IoStatus.Information = 0LL;
              v59 = v110;
LABEL_86:
              if ( v61 == 259 )
              {
                if ( !v59 )
                {
                  v88 = KeWaitForSingleObject(&v122, Executive, v62, 0, 0LL);
                  if ( v88 == 257 || v88 == 192 )
                    IopCancelAlertedRequest(&v122, v46);
                  v15 = v127;
                  *(_OWORD *)&v47->Status = v127;
                  v65 = v112;
LABEL_95:
                  if ( v65 )
                    KeSetKernelStackSwapEnable(1u);
                  if ( v126 )
                  {
                    ObCloseHandle(v126, 0);
                    return v15;
                  }
                  return v15;
                }
                v15 = IopWaitForSynchronousIo(v46);
                _InterlockedExchange((volatile __int32 *)v60 + 29, 0);
                if ( *((_DWORD *)v114 + 28) )
                  KeSetEvent((PRKEVENT)((char *)v114 + 128), 0, 0);
                ObfDereferenceObjectWithTag(v114, 0x746C6644u);
                KeLeaveCriticalRegionThread(KeGetCurrentThread());
              }
              else
              {
                if ( !v59 )
                  v46->UserEvent = 0LL;
                v46->UserIosb = v47;
                v63 = KeGetCurrentIrql();
                __writecr8(1uLL);
                IopCompleteRequest(
                  (_DWORD)v46 + 120,
                  (unsigned int)&v133,
                  (unsigned int)v131,
                  (unsigned int)&v114,
                  (__int64)v131);
                __writecr8(v63);
                if ( v59 )
                {
                  _InterlockedExchange((volatile __int32 *)v60 + 29, 0);
                  v64 = v114;
                  if ( *((_DWORD *)v114 + 28) )
                    KeSetEvent((PRKEVENT)((char *)v114 + 128), 0, 0);
                  ObfDereferenceObjectWithTag(v64, 0x746C6644u);
                  KeLeaveCriticalRegionThread(KeGetCurrentThread());
                }
                v15 = v111;
              }
              v65 = v112;
              goto LABEL_95;
            default:
              goto LABEL_83;
          }
LABEL_248:
          v61 = -1073741811;
LABEL_250:
          v111 = v61;
          goto LABEL_126;
        }
        v107 = v46->AssociatedIrp.MasterIrp;
        if ( (unsigned int)(v5 - 4) >= *(_DWORD *)&v107->Type )
        {
          v60 = v114;
          v59 = v110;
          if ( *(&v107->Size + 1) == 92 )
          {
            v61 = -1073741811;
            v111 = -1073741811;
            v46->IoStatus.Status = -1073741811;
            goto LABEL_85;
          }
          goto LABEL_84;
        }
      }
      v61 = -1073741811;
      v60 = v114;
LABEL_254:
      v111 = v61;
      goto LABEL_135;
    }
    if ( (unsigned int)v5 < 0x10 )
    {
      v84 = -1073741820;
    }
    else
    {
      if ( v42 )
        p_Event = (__int16 *)&v16->Event;
      else
        p_Event = &v122;
      v83 = IopTrackLink((_DWORD)v16, (unsigned int)&v127, (_DWORD)FileInformation, v5, (__int64)p_Event, PreviousMode);
      v84 = v83;
      LODWORD(Irp) = v83;
      if ( v83 >= 0 )
      {
        IoStatusBlock->Information = 0LL;
        IoStatusBlock->Status = v83;
      }
    }
    if ( v42 )
    {
      _InterlockedExchange((volatile __int32 *)&v16->Busy, 0);
      v85 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObjectWithTag(v85, 0x746C6644u);
      KeLeaveCriticalRegionThread(KeGetCurrentThread());
      v16 = (struct _FILE_OBJECT *)Object;
    }
LABEL_162:
    ObfDereferenceObjectWithTag(v16, 0x746C6644u);
    return v84;
  }
  if ( (unsigned int)v5 < 8 )
  {
    _InterlockedExchange(v26 + 29, 0);
    v93 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObjectWithTag(v93, 0x746C6644u);
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return -1073741820;
  }
  v29 = *(LARGE_INTEGER *)FileInformation;
  v132 = *(LARGE_INTEGER *)FileInformation;
  if ( (*p_Flags & 8) != 0 && (SectorSize = AttachedDevice->SectorSize) != 0 && ((SectorSize - 1) & v29.LowPart) != 0
    || v29.HighPart < 0 )
  {
    v30 = -1073741811;
  }
  else
  {
    v16->CurrentByteOffset = v29;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 0LL;
    v30 = v111;
  }
  v31 = KeGetCurrentThread();
  v31->OtherTransferCount += (unsigned int)v5;
  __addgsqword(0x2EF8u, (unsigned int)v5);
  _InterlockedExchange((volatile __int32 *)Object + 29, 0);
  v32 = Object;
  if ( *((_DWORD *)Object + 28) )
  {
    KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    v22 = 1LL;
  }
  v33 = (signed __int64)v32 - 48;
  if ( ObpTraceFlags )
  {
    ObpPushStackInfo(v33);
    v22 = 1LL;
  }
  v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33, 0xFFFFFFFFFFFFFFFFuLL);
  v35 = v34 <= 1;
  v36 = v34 - 1;
  if ( v35 )
  {
    if ( *(_QWORD *)(v33 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v33 + 24) ^ (unsigned __int64)BYTE1(v33)],
        (ULONG_PTR)Object,
        v22,
        *(_QWORD *)(v33 + 8));
    if ( v36 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v36);
    if ( KeAreAllApcsDisabled() )
    {
      ObpDeferObjectDeletion(v33, v94, v95, v96);
    }
    else
    {
      v97 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v33);
      if ( v97 )
        ObpHandleRevocationBlockRemoveObject(v97);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v33);
      ObpRemoveObjectRoutine(v33, 0LL);
    }
    v22 = 1LL;
  }
  v37 = KeGetCurrentThread();
  v38 = v37->KernelApcDisable++ == -1;
  if ( v38
    && ($005F0E83B22994B61E86C72E0CE43C71 *)v37->ApcState.ApcListHead[0].Flink != &v37->152
    && !v37->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
    v22 = 1LL;
  }
  if ( ObpTraceFlags )
  {
    ObpPushStackInfo(v33);
    v22 = 1LL;
  }
  v39 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33, 0xFFFFFFFFFFFFFFFFuLL);
  v35 = v39 <= 1;
  v40 = v39 - 1;
  if ( v35 )
  {
    if ( *(_QWORD *)(v33 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v33 + 24) ^ (unsigned __int64)BYTE1(v33)],
        (ULONG_PTR)Object,
        v22,
        *(_QWORD *)(v33 + 8));
    if ( v40 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v40);
    if ( KeAreAllApcsDisabled() )
    {
      ObpDeferObjectDeletion(v33, v98, v99, v100);
    }
    else
    {
      v101 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v33);
      if ( v101 )
        ObpHandleRevocationBlockRemoveObject(v101);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v33);
      ObpRemoveObjectRoutine(v33, 0LL);
    }
  }
  return v30;
}

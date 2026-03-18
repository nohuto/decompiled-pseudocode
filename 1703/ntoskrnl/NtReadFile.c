/*
 * XREFs of NtReadFile @ 0x140566B00
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x14024D714 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     PfSnGetPrefetchInstructions @ 0x140565894 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     IopIsProcessAppContainer @ 0x140005C2C (IopIsProcessAppContainer.c)
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140033E50 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     MmProbeAndLockPages @ 0x1400B3C30 (MmProbeAndLockPages.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     IopExceptionFilter @ 0x1401EFA10 (IopExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     ExRaiseAccessViolation @ 0x14071ED40 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x14076804C (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140768104 (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtReadFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  KPROCESSOR_MODE PreviousMode; // r15
  int v11; // esi
  struct _FILE_OBJECT *v12; // rbx
  _DWORD *v13; // rax
  __int64 SectorSize; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  PVOID v18; // r12
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  PLARGE_INTEGER v22; // rsi
  __int64 v23; // rax
  __int16 v24; // cx
  struct _IO_STATUS_BLOCK *Status; // rcx
  struct _KEVENT *v26; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // r15
  ULONG *p_Flags; // r13
  ULONG Flags; // eax
  struct _KTHREAD *v30; // rax
  volatile __int32 *v31; // r14
  __int64 v32; // r9
  __int64 (__fastcall *FastIoRead)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r15
  void *v34; // r14
  char v35; // si
  struct _KTHREAD *v36; // rax
  struct _KTHREAD *v37; // rcx
  unsigned __int64 v38; // rax
  volatile __int32 *v39; // rbx
  PVOID v40; // rbx
  struct _KTHREAD *v41; // rcx
  __int16 v42; // ax
  char v44; // r15
  IRP *v45; // rax
  IRP *v46; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  ULONG v48; // eax
  ULONG v49; // ecx
  int v50; // r15d
  PRKEVENT v51; // rsi
  struct _MDL *Mdl; // rax
  PVOID v53; // rbx
  PVOID v54; // rbx
  KPROCESSOR_MODE v55; // [rsp+50h] [rbp-A8h]
  PVOID Object; // [rsp+58h] [rbp-A0h] BYREF
  char v57; // [rsp+60h] [rbp-98h]
  _BYTE v58[7]; // [rsp+61h] [rbp-97h] BYREF
  LONGLONG QuadPart; // [rsp+68h] [rbp-90h] BYREF
  ULONG v60; // [rsp+70h] [rbp-88h]
  PRKEVENT Eventa; // [rsp+78h] [rbp-80h]
  int v62; // [rsp+80h] [rbp-78h]
  PIRP Irp; // [rsp+88h] [rbp-70h]
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp-68h]
  __int128 v65; // [rsp+98h] [rbp-60h] BYREF
  PVOID v66; // [rsp+A8h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-48h]
  PVOID v68; // [rsp+B8h] [rbp-40h]
  __int64 retaddr; // [rsp+F8h] [rbp+0h]

  Eventa = 0LL;
  v60 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v55 = PreviousMode;
  v11 = ObReferenceObjectByHandle(FileHandle, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v12 = (struct _FILE_OBJECT *)Object;
  v68 = Object;
  if ( v11 >= 0 )
  {
    v13 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v13 )
    {
      if ( (*v13 & 4) != 0 )
      {
        if ( IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
        {
          ObfDereferenceObject(Object);
          return -1073739504;
        }
        v12 = (struct _FILE_OBJECT *)Object;
      }
    }
  }
  if ( v11 < 0 )
    return v11;
  RelatedDeviceObject = IoGetRelatedDeviceObject(v12);
  DeviceObject = RelatedDeviceObject;
  if ( !PreviousMode )
  {
    v22 = ByteOffset;
    if ( ByteOffset )
      QuadPart = ByteOffset->QuadPart;
    v18 = Buffer;
    if ( Key )
      v60 = *Key;
    goto LABEL_48;
  }
  v62 = 0;
  v16 = (__int64)IoStatusBlock;
  if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
    v16 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v16 = *(_DWORD *)v16;
  v17 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v17 && ((v24 = *(_WORD *)(v17 + 8), v24 == 332) || v24 == 452) )
  {
    v57 = 1;
    v12 = (struct _FILE_OBJECT *)Object;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
      goto LABEL_10;
    ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
    Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
    IoStatusBlock = Status;
    Status->Status = Status->Status;
  }
  else
  {
    v57 = 0;
  }
  v12 = (struct _FILE_OBJECT *)Object;
LABEL_10:
  v18 = Buffer;
  if ( Length )
  {
    v19 = (unsigned __int64)Buffer;
    v20 = (unsigned __int64)Buffer + Length - 1;
    if ( (unsigned __int64)Buffer > v20 || v20 >= 0x7FFFFFFF0000LL )
    {
      if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
        ExRaiseAccessViolation();
      v12 = (struct _FILE_OBJECT *)Object;
    }
    else
    {
      v21 = (v20 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v19 = *(_BYTE *)v19;
        v19 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v19 != v21 );
      v12 = (struct _FILE_OBJECT *)Object;
    }
  }
  if ( v12->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    goto LABEL_136;
  v22 = ByteOffset;
  if ( ByteOffset )
  {
    if ( ((unsigned __int8)ByteOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = ByteOffset->QuadPart;
    v12 = (struct _FILE_OBJECT *)Object;
  }
  if ( (v12->Flags & 8) != 0 )
  {
    if ( (SectorSize = RelatedDeviceObject->SectorSize, (_WORD)SectorSize)
      && (((unsigned __int16)SectorSize - 1) & Length) != 0
      || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0 )
    {
      if ( (_WORD)SectorSize && Length % (unsigned __int16)SectorSize
        || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0 )
      {
        goto LABEL_136;
      }
    }
    if ( ByteOffset && (_WORD)SectorSize && (((unsigned __int16)SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      goto LABEL_136;
  }
  v23 = (__int64)Key;
  if ( Key )
  {
    if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
      v23 = 0x7FFFFFFF0000LL;
    v60 = *(_DWORD *)v23;
    v12 = (struct _FILE_OBJECT *)Object;
  }
LABEL_48:
  if ( Event )
  {
    v50 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v66, 0LL);
    v26 = (struct _KEVENT *)v66;
    Eventa = (PRKEVENT)v66;
    if ( v50 < 0 )
    {
      ObfDereferenceObject(v12);
      return v50;
    }
    KeResetEvent((PRKEVENT)v66);
  }
  else
  {
    v26 = Eventa;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  p_Flags = &v12->Flags;
  Flags = v12->Flags;
  if ( (Flags & 2) == 0 )
  {
    if ( !v22 && (Flags & 0x280) == 0 )
    {
      if ( v26 )
        ObfDereferenceObject(v26);
      goto LABEL_136;
    }
    v44 = 0;
LABEL_71:
    if ( QuadPart >= 0 )
    {
      if ( (*p_Flags & 0x4000000) == 0 )
        KeResetEvent(&v12->Event);
      LOBYTE(SectorSize) = v44 == 0;
      v45 = (IRP *)IopAllocateIrpExReturn(
                     (__int64)DeviceObject,
                     (unsigned __int8)DeviceObject->StackSize,
                     SectorSize,
                     retaddr);
      v46 = v45;
      Irp = v45;
      if ( !v45 )
      {
        IopAllocateIrpCleanup(v12, v26);
        return -1073741670;
      }
      v45->Tail.Overlay.OriginalFileObject = v12;
      v45->Tail.Overlay.Thread = CurrentThread;
      v45->Tail.Overlay.AuxiliaryBuffer = 0LL;
      v45->RequestorMode = v55;
      v45->PendingReturned = 0;
      v45->Cancel = 0;
      v45->CancelRoutine = 0LL;
      v45->UserEvent = v26;
      v45->UserIosb = IoStatusBlock;
      v45->Overlay.AllocationSize.QuadPart = (LONGLONG)ApcRoutine;
      v45->Overlay.AsynchronousParameters.UserApcContext = ApcContext;
      CurrentStackLocation = v45->Tail.Overlay.CurrentStackLocation;
      *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
      CurrentStackLocation[-1].FileObject = v12;
      v45->AssociatedIrp.MasterIrp = 0LL;
      v45->MdlAddress = 0LL;
      v48 = DeviceObject->Flags;
      if ( (v48 & 4) != 0 )
      {
        v49 = Length;
        if ( !Length )
        {
          v46->Flags = 80;
          goto LABEL_78;
        }
        v46->AssociatedIrp.MasterIrp = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(
                                                        NonPagedPoolNxCacheAligned,
                                                        Length);
        v46->Flags = 112;
      }
      else
      {
        v46->Flags = 0;
        if ( (v48 & 0x10) != 0 )
        {
          v49 = Length;
          if ( Length )
          {
            Mdl = IoAllocateMdl(v18, Length, 0, 1u, v46);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            MmProbeAndLockPages(Mdl, v55, IoWriteAccess);
            v49 = Length;
          }
          goto LABEL_78;
        }
      }
      v49 = Length;
      v46->UserBuffer = v18;
LABEL_78:
      if ( (*p_Flags & 8) != 0 )
        v46->Flags |= 0x901u;
      else
        v46->Flags |= 0x900u;
      CurrentStackLocation[-1].Parameters.Read.Length = v49;
      CurrentStackLocation[-1].Parameters.Create.Options = v60;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
      return IopSynchronousServiceTail(DeviceObject, v46, (__int64)v12, 1, v55, v44, 0);
    }
    if ( v26 )
      ObfDereferenceObject(v26);
    if ( v44 )
    {
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      v54 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v54);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v12 = (struct _FILE_OBJECT *)Object;
    }
LABEL_136:
    ObfDereferenceObject(v12);
    return -1073741811;
  }
  v30 = KeGetCurrentThread();
  --v30->KernelApcDisable;
  v31 = (volatile __int32 *)Object;
  if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v12 = (struct _FILE_OBJECT *)Object;
    LODWORD(Irp) = IopAcquireFileObjectLock((char *)Object, v55, (*p_Flags & 4) != 0, v58);
    if ( v58[0] )
    {
      if ( Eventa )
        ObfDereferenceObject(Eventa);
      ObfDereferenceObject(v12);
      return (int)Irp;
    }
  }
  else
  {
    v12 = (struct _FILE_OBJECT *)Object;
    ObfReferenceObject(Object);
  }
  if ( !v22 || (_DWORD)QuadPart == -2 && HIDWORD(QuadPart) == -1 )
    QuadPart = v12->CurrentByteOffset.QuadPart;
  if ( !v12->PrivateCacheMap )
    goto LABEL_70;
  v65 = 0uLL;
  FastIoRead = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoRead;
  if ( QuadPart < 0 )
  {
    if ( Eventa )
      ObfDereferenceObject(Eventa);
    _InterlockedExchange(v31 + 29, 0);
    v53 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v53);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
    return -1073741811;
  }
  else
  {
    if ( (MmVerifierData & 0x10) != 0 )
      v34 = (void *)VfFastIoSnapState();
    else
      v34 = 0LL;
    LOBYTE(v32) = 1;
    v35 = FastIoRead(v12, &QuadPart, Length, v32, v60, v18, &v65, DeviceObject);
    if ( v34 )
      VfFastIoCheckState(v34);
    if ( !v35 || (_DWORD)v65 && (_DWORD)v65 != -1073741807 && (_DWORD)v65 != -2147483643 )
    {
LABEL_70:
      v44 = 1;
      v26 = Eventa;
      goto LABEL_71;
    }
    v36 = KeGetCurrentThread();
    ++v36->ReadOperationCount;
    __incgsdword(0x2EDCu);
    v37 = KeGetCurrentThread();
    v38 = DWORD2(v65);
    v37->ReadTransferCount += DWORD2(v65);
    __addgsqword(0x2EE8u, v38);
    *(_OWORD *)&IoStatusBlock->Status = v65;
    v39 = (volatile __int32 *)Object;
    if ( Event )
    {
      v51 = Eventa;
      if ( (*((_DWORD *)Object + 20) & 0x8000000) == 0 )
        KeSetEvent(Eventa, 0, 0);
      ObfDereferenceObject(v51);
    }
    _InterlockedExchange(v39 + 29, 0);
    v40 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v40);
    v41 = KeGetCurrentThread();
    v42 = v41->KernelApcDisable + 1;
    v41->KernelApcDisable = v42;
    if ( !v42
      && ($69CD3F157F9F39B6F7113F2231989901 *)v41->ApcState.ApcListHead[0].Flink != &v41->152
      && !v41->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v41);
    }
    ObfDereferenceObject(Object);
    return v65;
  }
}

/*
 * XREFs of NtWriteFile @ 0x1404818C0
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x14024D714 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
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
 *     memmove @ 0x140192A40 (memmove.c)
 *     IopExceptionFilter @ 0x1401EFA10 (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x14020ECE8 (MmUpdateMdlTracker.c)
 *     ObReferenceFileObjectForWrite @ 0x1404821C0 (ObReferenceFileObjectForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x14076804C (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140768104 (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtWriteFile(
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
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS v11; // esi
  struct _FILE_OBJECT *v12; // rdi
  _DWORD *FileObjectExtension; // rax
  __int64 Flags; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r10
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  ULONG v18; // r15d
  PVOID v19; // r12
  PLARGE_INTEGER v20; // rsi
  __int64 v21; // rax
  __int16 v22; // cx
  USHORT SectorSize; // r9
  struct _IO_STATUS_BLOCK *Status; // rcx
  void *v26; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  ULONG *p_Flags; // rcx
  ULONG v29; // eax
  struct _KTHREAD *v30; // rax
  __int64 v31; // r9
  char v32; // dl
  __int64 (__fastcall *FastIoWrite)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r13
  void *v34; // r14
  char v35; // si
  struct _KTHREAD *v36; // rax
  struct _KTHREAD *v37; // rcx
  unsigned __int64 v38; // rax
  struct _KTHREAD *v39; // rcx
  __int16 v40; // ax
  __int64 v41; // rax
  IRP *v42; // rsi
  char v43; // cl
  __int64 v44; // r14
  ULONG *v45; // r13
  struct _DEVICE_OBJECT *v46; // r10
  ULONG v47; // eax
  int v48; // r13d
  struct _MDL *Mdl; // rax
  unsigned __int64 v50; // rbx
  unsigned __int8 v51; // r12
  PRKEVENT v52; // rsi
  struct _IRP *PoolWithQuota_1; // rax
  unsigned __int8 v54; // [rsp+50h] [rbp-B8h]
  char v55; // [rsp+51h] [rbp-B7h]
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-B0h]
  LONGLONG QuadPart; // [rsp+60h] [rbp-A8h] BYREF
  char v58; // [rsp+68h] [rbp-A0h]
  char v59; // [rsp+69h] [rbp-9Fh]
  PRKEVENT Eventa; // [rsp+70h] [rbp-98h]
  ULONG v61; // [rsp+78h] [rbp-90h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-88h]
  int v63; // [rsp+88h] [rbp-80h]
  PIRP Irp; // [rsp+90h] [rbp-78h]
  ULONG *v65; // [rsp+98h] [rbp-70h]
  __int128 v66; // [rsp+A0h] [rbp-68h] BYREF
  int v67; // [rsp+B4h] [rbp-54h]
  PVOID Object; // [rsp+B8h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-48h]
  __int64 retaddr; // [rsp+108h] [rbp+0h]

  Eventa = 0LL;
  v61 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v54 = PreviousMode;
  v11 = ObReferenceFileObjectForWrite((ULONG_PTR)FileHandle);
  if ( v11 < 0 )
  {
LABEL_111:
    v12 = FileObject;
    goto LABEL_3;
  }
  v12 = FileObject;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( FileObjectExtension && (*FileObjectExtension & 4) != 0 )
  {
    if ( IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    {
      ObfDereferenceObject(FileObject);
      return -1073739504;
    }
    goto LABEL_111;
  }
LABEL_3:
  if ( v11 < 0 )
    return v11;
  RelatedDeviceObject = IoGetRelatedDeviceObject(v12);
  DeviceObject = RelatedDeviceObject;
  if ( !PreviousMode )
  {
    v20 = ByteOffset;
    if ( ByteOffset )
      QuadPart = ByteOffset->QuadPart;
    v18 = Length;
    v19 = Buffer;
    if ( Key )
      v61 = *Key;
    goto LABEL_48;
  }
  v63 = 0;
  v16 = (__int64)IoStatusBlock;
  if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
    v16 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v16 = *(_DWORD *)v16;
  v17 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( !v17 || (v22 = *(_WORD *)(v17 + 8), v22 != 332) && v22 != 452 )
  {
    v58 = 0;
LABEL_9:
    v12 = FileObject;
    goto LABEL_10;
  }
  v58 = 1;
  v12 = FileObject;
  if ( (FileObject->Flags & 2) == 0 )
  {
    ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
    Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
    IoStatusBlock = Status;
    Status->Status = Status->Status;
    goto LABEL_9;
  }
LABEL_10:
  v18 = Length;
  v19 = Buffer;
  if ( Length && ((unsigned __int64)Buffer + Length > 0x7FFFFFFF0000LL || (char *)Buffer + Length < Buffer) )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( v12->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    goto LABEL_33;
  v20 = ByteOffset;
  if ( ByteOffset )
  {
    if ( ((unsigned __int8)ByteOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = ByteOffset->QuadPart;
    v12 = FileObject;
  }
  Flags = v12->Flags;
  if ( (Flags & 8) != 0
    && (((SectorSize = RelatedDeviceObject->SectorSize) != 0 && ((SectorSize - 1) & Length) != 0
      || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0)
     && (SectorSize && Length % SectorSize || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0)
     || ByteOffset
     && QuadPart != -1
     && (QuadPart != -2 || (Flags & 2) == 0)
     && SectorSize
     && ((SectorSize - 1) & (unsigned int)QuadPart) != 0) )
  {
LABEL_33:
    ObfDereferenceObject(v12);
    return -1073741811;
  }
  v21 = (__int64)Key;
  if ( Key )
  {
    if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    v61 = *(_DWORD *)v21;
    v12 = FileObject;
  }
LABEL_48:
  if ( (v67 & 6) == 4 )
    QuadPart = -1LL;
  if ( Event )
  {
    v48 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v26 = Object;
    Eventa = (PRKEVENT)Object;
    if ( v48 < 0 )
    {
      ObfDereferenceObject(v12);
      return v48;
    }
    KeResetEvent((PRKEVENT)Object);
    RelatedDeviceObject = DeviceObject;
  }
  else
  {
    v26 = Eventa;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  p_Flags = &v12->Flags;
  v65 = &v12->Flags;
  v29 = v12->Flags;
  if ( (v29 & 2) != 0 )
  {
    v30 = KeGetCurrentThread();
    --v30->KernelApcDisable;
    if ( !_InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      v12 = FileObject;
      ObfReferenceObject(FileObject);
      goto LABEL_55;
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v12 = FileObject;
    LODWORD(Irp) = IopAcquireFileObjectLock(FileObject);
    if ( !v59 )
    {
LABEL_55:
      v32 = 1;
      v55 = 1;
      if ( !v20 && !(_DWORD)QuadPart || (_DWORD)QuadPart == -2 && HIDWORD(QuadPart) == -1 )
        QuadPart = v12->CurrentByteOffset.QuadPart;
      if ( v12->PrivateCacheMap )
      {
        v66 = 0uLL;
        FastIoWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoWrite;
        if ( QuadPart < 0 && (HIDWORD(QuadPart) != -1 || (_DWORD)QuadPart != -1) )
        {
          if ( Eventa )
            ObfDereferenceObject(Eventa);
          _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 0);
          if ( FileObject->Waiters )
            KeSetEvent(&FileObject->Lock, 0, 0);
          ObfDereferenceObject(FileObject);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(FileObject);
          return -1073741811;
        }
        if ( (MmVerifierData & 0x10) != 0 )
          v34 = (void *)VfFastIoSnapState();
        else
          v34 = 0LL;
        LOBYTE(v31) = 1;
        v35 = FastIoWrite(v12, &QuadPart, v18, v31, v61, v19, &v66, DeviceObject);
        if ( v34 )
          VfFastIoCheckState(v34);
        if ( v35 && !(_DWORD)v66 )
        {
          v36 = KeGetCurrentThread();
          ++v36->WriteOperationCount;
          __incgsdword(0x2EE0u);
          v37 = KeGetCurrentThread();
          v38 = DWORD2(v66);
          v37->WriteTransferCount += DWORD2(v66);
          __addgsqword(0x2EF0u, v38);
          *(_OWORD *)&IoStatusBlock->Status = v66;
          if ( Event )
          {
            v52 = Eventa;
            if ( (FileObject->Flags & 0x8000000) == 0 )
              KeSetEvent(Eventa, 0, 0);
            ObfDereferenceObject(v52);
          }
          _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 0);
          if ( FileObject->Waiters )
            KeSetEvent(&FileObject->Lock, 0, 0);
          ObfDereferenceObject(FileObject);
          v39 = KeGetCurrentThread();
          v40 = v39->KernelApcDisable + 1;
          v39->KernelApcDisable = v40;
          if ( !v40
            && ($69CD3F157F9F39B6F7113F2231989901 *)v39->ApcState.ApcListHead[0].Flink != &v39->152
            && !v39->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery((__int64)v39);
          }
          ObfDereferenceObject(FileObject);
          return v66;
        }
        v26 = Eventa;
        p_Flags = v65;
        v32 = 1;
        RelatedDeviceObject = DeviceObject;
      }
      else
      {
        v26 = Eventa;
        p_Flags = v65;
        RelatedDeviceObject = DeviceObject;
      }
      goto LABEL_75;
    }
    if ( Eventa )
      ObfDereferenceObject(Eventa);
    ObfDereferenceObject(FileObject);
    return (int)Irp;
  }
  else
  {
    if ( v20 || (v29 & 0x280) != 0 )
    {
      v32 = 0;
      v55 = 0;
LABEL_75:
      if ( QuadPart >= 0 || QuadPart == -1 )
      {
        if ( (*p_Flags & 0x4000000) == 0 )
        {
          KeResetEvent(&v12->Event);
          v32 = v55;
          RelatedDeviceObject = DeviceObject;
        }
        LOBYTE(Flags) = v32 == 0;
        v41 = IopAllocateIrpExReturn(
                (__int64)RelatedDeviceObject,
                (unsigned __int8)RelatedDeviceObject->StackSize,
                Flags,
                retaddr);
        v42 = (IRP *)v41;
        Irp = (PIRP)v41;
        if ( v41 )
        {
          *(_QWORD *)(v41 + 192) = v12;
          *(_QWORD *)(v41 + 152) = CurrentThread;
          *(_QWORD *)(v41 + 160) = 0LL;
          v43 = v54;
          *(_WORD *)(v41 + 64) = v54;
          *(_BYTE *)(v41 + 68) = 0;
          *(_QWORD *)(v41 + 104) = 0LL;
          *(_QWORD *)(v41 + 80) = v26;
          *(_QWORD *)(v41 + 72) = IoStatusBlock;
          *(_QWORD *)(v41 + 88) = ApcRoutine;
          *(_QWORD *)(v41 + 96) = ApcContext;
          v44 = *(_QWORD *)(v41 + 184);
          *(_DWORD *)(v44 - 72) = 4;
          *(_QWORD *)(v44 - 24) = v12;
          v45 = v65;
          if ( (*v65 & 0x10) != 0 )
            *(_BYTE *)(v44 - 70) = 4;
          *(_QWORD *)(v41 + 24) = 0LL;
          *(_QWORD *)(v41 + 8) = 0LL;
          v46 = DeviceObject;
          v47 = DeviceObject->Flags;
          if ( (v47 & 4) != 0 )
          {
            if ( v18 )
            {
              PoolWithQuota_1 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(NonPagedPoolNxCacheAligned, v18);
              v42->AssociatedIrp.MasterIrp = PoolWithQuota_1;
              memmove(PoolWithQuota_1, v19, v18);
              v42->Flags = 48;
              v43 = v54;
              v46 = DeviceObject;
            }
            else
            {
              v42->Flags = 16;
            }
          }
          else
          {
            v42->Flags = 0;
            if ( (v47 & 0x10) != 0 )
            {
              if ( v18 )
              {
                Mdl = IoAllocateMdl(v19, v18, 0, 1u, v42);
                v50 = (unsigned __int64)Mdl;
                if ( !Mdl )
                  RtlRaiseStatus(-1073741670);
                v51 = *(_BYTE *)(v44 - 72);
                MmProbeAndLockPages(Mdl, v54, IoReadAccess);
                if ( (MmTrackLockedPages & 1) != 0 )
                  MmUpdateMdlTracker(
                    v50,
                    (__int64)DeviceObject->DriverObject->MajorFunction[v51],
                    (__int64)DeviceObject);
                v43 = v54;
                v46 = DeviceObject;
              }
            }
            else
            {
              v42->UserBuffer = v19;
            }
          }
          if ( (*v45 & 8) != 0 )
            v42->Flags |= 0xA01u;
          else
            v42->Flags |= 0xA00u;
          *(_DWORD *)(v44 - 64) = v18;
          *(_DWORD *)(v44 - 56) = v61;
          *(_QWORD *)(v44 - 48) = QuadPart;
          return IopSynchronousServiceTail(v46, v42, v43, v55, 1);
        }
        else
        {
          IopAllocateIrpCleanup(v12, v26);
          return -1073741670;
        }
      }
      else
      {
        if ( v26 )
        {
          ObfDereferenceObject(v26);
          v32 = v55;
        }
        if ( v32 )
        {
          _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
          if ( FileObject->Waiters )
            KeSetEvent(&FileObject->Lock, 0, 0);
          ObfDereferenceObject(FileObject);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v12 = FileObject;
        }
        ObfDereferenceObject(v12);
        return -1073741811;
      }
    }
    if ( v26 )
      ObfDereferenceObject(v26);
    ObfDereferenceObject(v12);
    return -1073741811;
  }
}

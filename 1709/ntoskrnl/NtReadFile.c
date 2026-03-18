/*
 * XREFs of NtReadFile @ 0x140562BE0
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x140272964 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     PfSnGetPrefetchInstructions @ 0x140453D1C (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x1400BDA30 (MmProbeAndLockPages.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400FEBE0 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     IopIsProcessAppContainer @ 0x14012BDD8 (IopIsProcessAppContainer.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     IopExceptionFilter @ 0x1401F5104 (IopExceptionFilter.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     ExRaiseAccessViolation @ 0x14075EBA0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1407A9C74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407A9D54 (VfFastIoSnapState.c)
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
  KPROCESSOR_MODE PreviousMode; // r12
  int v11; // ebx
  struct _FILE_OBJECT *v12; // rdi
  _DWORD *v13; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r10
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  PLARGE_INTEGER v20; // rbx
  __int64 v21; // rax
  USHORT SectorSize; // r8
  __int16 v23; // cx
  struct _IO_STATUS_BLOCK *Status; // rcx
  void *v25; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  ULONG *p_Flags; // r15
  ULONG Flags; // eax
  struct _KTHREAD *v29; // rax
  volatile __int32 *v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 (__fastcall *FastIoRead)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r12
  void *v36; // r14
  PVOID v37; // r13
  char v38; // bl
  struct _KTHREAD *v39; // rax
  struct _KTHREAD *v40; // rcx
  unsigned __int64 v41; // rax
  volatile __int32 *v42; // rbx
  PVOID v43; // rbx
  struct _KTHREAD *v44; // rcx
  bool v45; // zf
  char v47; // r12
  __int64 Irp; // rax
  IRP *v49; // rbx
  __int64 v50; // r14
  ULONG v51; // eax
  ULONG v52; // ecx
  int v53; // r15d
  PRKEVENT v54; // rdi
  struct _MDL *Mdl; // rax
  NTSTATUS v56; // r12d
  PVOID v57; // rbx
  PVOID v58; // rbx
  KPROCESSOR_MODE v59; // [rsp+50h] [rbp-98h]
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v61[8]; // [rsp+60h] [rbp-88h] BYREF
  LONGLONG QuadPart; // [rsp+68h] [rbp-80h] BYREF
  ULONG v63; // [rsp+70h] [rbp-78h]
  PRKEVENT Eventa; // [rsp+78h] [rbp-70h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-68h]
  int v66; // [rsp+88h] [rbp-60h]
  PVOID v67; // [rsp+90h] [rbp-58h] BYREF
  __int128 v68; // [rsp+98h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-40h]

  Eventa = 0LL;
  v63 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v59 = PreviousMode;
  v11 = ObReferenceObjectByHandle(FileHandle, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  if ( v11 < 0 )
  {
LABEL_115:
    v12 = (struct _FILE_OBJECT *)Object;
    goto LABEL_3;
  }
  v12 = (struct _FILE_OBJECT *)Object;
  v13 = (_DWORD *)*((_QWORD *)Object + 26);
  if ( v13 && (*v13 & 4) != 0 )
  {
    if ( IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    {
      ObfDereferenceObject(Object);
      return -1073739504;
    }
    goto LABEL_115;
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
    if ( Key )
      v63 = *Key;
    goto LABEL_48;
  }
  v66 = 0;
  v15 = (__int64)IoStatusBlock;
  if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
    v15 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v15 = *(_DWORD *)v15;
  v16 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v16 )
  {
    v23 = *(_WORD *)(v16 + 8);
    if ( v23 == 332 || v23 == 452 )
    {
      v12 = (struct _FILE_OBJECT *)Object;
      if ( (*((_DWORD *)Object + 20) & 2) != 0 )
        goto LABEL_9;
      ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
      Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
      IoStatusBlock = Status;
      Status->Status = Status->Status;
    }
  }
  v12 = (struct _FILE_OBJECT *)Object;
LABEL_9:
  if ( Length )
  {
    v17 = (unsigned __int64)Buffer;
    v18 = (unsigned __int64)Buffer + Length - 1;
    if ( (unsigned __int64)Buffer > v18 || v18 >= 0x7FFFFFFF0000LL )
    {
      if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
        ExRaiseAccessViolation();
      v12 = (struct _FILE_OBJECT *)Object;
    }
    else
    {
      v19 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v17 = *(_BYTE *)v17;
        v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v17 != v19 );
      v12 = (struct _FILE_OBJECT *)Object;
    }
  }
  if ( v12->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    goto LABEL_137;
  v20 = ByteOffset;
  if ( ByteOffset )
  {
    if ( ((unsigned __int8)ByteOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = ByteOffset->QuadPart;
    v12 = (struct _FILE_OBJECT *)Object;
  }
  if ( (v12->Flags & 8) != 0 )
  {
    if ( ((SectorSize = RelatedDeviceObject->SectorSize) != 0 && ((SectorSize - 1) & Length) != 0
       || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0)
      && (SectorSize && Length % SectorSize || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0) )
    {
      goto LABEL_137;
    }
    if ( ByteOffset && SectorSize && ((SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      goto LABEL_137;
  }
  v21 = (__int64)Key;
  if ( Key )
  {
    if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    v63 = *(_DWORD *)v21;
    v12 = (struct _FILE_OBJECT *)Object;
  }
LABEL_48:
  if ( Event )
  {
    v53 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v67, 0LL);
    v25 = v67;
    Eventa = (PRKEVENT)v67;
    if ( v53 < 0 )
    {
      ObfDereferenceObject(v12);
      return v53;
    }
    KeResetEvent((PRKEVENT)v67);
    RelatedDeviceObject = DeviceObject;
  }
  else
  {
    v25 = Eventa;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  p_Flags = &v12->Flags;
  Flags = v12->Flags;
  if ( (Flags & 2) == 0 )
  {
    if ( !v20 && (Flags & 0x280) == 0 )
    {
      if ( v25 )
        ObfDereferenceObject(v25);
      goto LABEL_137;
    }
    v47 = 0;
    v37 = Buffer;
LABEL_71:
    if ( QuadPart >= 0 )
    {
      if ( (*p_Flags & 0x4000000) == 0 )
        KeResetEvent(&v12->Event);
      Irp = IopAllocateIrpExReturn();
      v49 = (IRP *)Irp;
      v67 = (PVOID)Irp;
      if ( !Irp )
      {
        IopAllocateIrpCleanup(v12, v25);
        return -1073741670;
      }
      *(_QWORD *)(Irp + 192) = v12;
      *(_QWORD *)(Irp + 152) = CurrentThread;
      *(_QWORD *)(Irp + 160) = 0LL;
      *(_BYTE *)(Irp + 64) = v59;
      *(_BYTE *)(Irp + 65) = 0;
      *(_BYTE *)(Irp + 68) = 0;
      *(_QWORD *)(Irp + 104) = 0LL;
      *(_QWORD *)(Irp + 80) = v25;
      *(_QWORD *)(Irp + 72) = IoStatusBlock;
      *(_QWORD *)(Irp + 88) = ApcRoutine;
      *(_QWORD *)(Irp + 96) = ApcContext;
      v50 = *(_QWORD *)(Irp + 184);
      *(_DWORD *)(v50 - 72) = 3;
      *(_QWORD *)(v50 - 24) = v12;
      *(_QWORD *)(Irp + 24) = 0LL;
      *(_QWORD *)(Irp + 8) = 0LL;
      v51 = DeviceObject->Flags;
      if ( (v51 & 4) != 0 )
      {
        v52 = Length;
        if ( !Length )
        {
          v49->Flags = 80;
          goto LABEL_78;
        }
        v49->AssociatedIrp.MasterIrp = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(
                                                        NonPagedPoolNxCacheAligned,
                                                        Length);
        v49->Flags = 112;
      }
      else
      {
        v49->Flags = 0;
        if ( (v51 & 0x10) != 0 )
        {
          v52 = Length;
          if ( Length )
          {
            Mdl = IoAllocateMdl(v37, Length, 0, 1u, v49);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            MmProbeAndLockPages(Mdl, v59, IoWriteAccess);
            v52 = Length;
          }
          goto LABEL_78;
        }
      }
      v52 = Length;
      v49->UserBuffer = v37;
LABEL_78:
      if ( (*p_Flags & 8) != 0 )
        v49->Flags |= 0x901u;
      else
        v49->Flags |= 0x900u;
      *(_DWORD *)(v50 - 64) = v52;
      *(_DWORD *)(v50 - 56) = v63;
      *(_QWORD *)(v50 - 48) = QuadPart;
      return IopSynchronousServiceTail(DeviceObject, v49, (__int64)v12, 1, v59, v47, 0);
    }
    if ( v25 )
      ObfDereferenceObject(v25);
    if ( v47 )
    {
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      v58 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v58);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v12 = (struct _FILE_OBJECT *)Object;
    }
LABEL_137:
    ObfDereferenceObject(v12);
    return -1073741811;
  }
  v29 = KeGetCurrentThread();
  --v29->KernelApcDisable;
  v30 = (volatile __int32 *)Object;
  if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v12 = (struct _FILE_OBJECT *)Object;
    v56 = IopAcquireFileObjectLock((char *)Object, PreviousMode, (*p_Flags & 4) != 0, v61);
    if ( v61[0] )
    {
      if ( Eventa )
        ObfDereferenceObject(Eventa);
      ObfDereferenceObject(v12);
      return v56;
    }
  }
  else
  {
    v12 = (struct _FILE_OBJECT *)Object;
    ObfReferenceObject(Object);
  }
  if ( !v20 || (_DWORD)QuadPart == -2 && HIDWORD(QuadPart) == -1 )
    QuadPart = v12->CurrentByteOffset.QuadPart;
  if ( !v12->PrivateCacheMap )
  {
    v37 = Buffer;
LABEL_85:
    v47 = 1;
    v25 = Eventa;
    goto LABEL_71;
  }
  v68 = 0uLL;
  FastIoRead = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoRead;
  if ( QuadPart >= 0 )
  {
    if ( (MmVerifierData & 0x10) != 0 )
      v36 = (void *)VfFastIoSnapState(v32, v31, v33);
    else
      v36 = 0LL;
    v37 = Buffer;
    LOBYTE(v34) = 1;
    v38 = FastIoRead(v12, &QuadPart, Length, v34, v63, Buffer, &v68, DeviceObject);
    if ( v36 )
      VfFastIoCheckState(v36, (ULONG_PTR)FastIoRead);
    if ( v38 && (!(_DWORD)v68 || (_DWORD)v68 == -1073741807 || (_DWORD)v68 == -2147483643) )
    {
      v39 = KeGetCurrentThread();
      ++v39->ReadOperationCount;
      __incgsdword(0x2EDCu);
      v40 = KeGetCurrentThread();
      v41 = DWORD2(v68);
      v40->ReadTransferCount += DWORD2(v68);
      __addgsqword(0x2EE8u, v41);
      *(_OWORD *)&IoStatusBlock->Status = v68;
      v42 = (volatile __int32 *)Object;
      if ( Event )
      {
        v54 = Eventa;
        if ( (*((_DWORD *)Object + 20) & 0x8000000) == 0 )
          KeSetEvent(Eventa, 0, 0);
        ObfDereferenceObject(v54);
      }
      _InterlockedExchange(v42 + 29, 0);
      v43 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v43);
      v44 = KeGetCurrentThread();
      v45 = v44->KernelApcDisable++ == -1;
      if ( v45
        && ($B476B70DB57F76B110DA5B9238C3E934 *)v44->ApcState.ApcListHead[0].Flink != &v44->152
        && !v44->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v44);
      }
      ObfDereferenceObject(Object);
      return v68;
    }
    goto LABEL_85;
  }
  if ( Eventa )
    ObfDereferenceObject(Eventa);
  _InterlockedExchange(v30 + 29, 0);
  v57 = Object;
  if ( *((_DWORD *)Object + 28) )
    KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
  ObfDereferenceObject(v57);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObfDereferenceObject(Object);
  return -1073741811;
}

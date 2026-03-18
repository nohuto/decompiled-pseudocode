/*
 * XREFs of NtReadFile @ 0x14052A160
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x1402A6C90 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     PfSnGetPrefetchInstructions @ 0x140527FA4 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400D05A8 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     IopExceptionFilter @ 0x140232634 (IopExceptionFilter.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     PsIsProcessAppContainer @ 0x14058A3A4 (PsIsProcessAppContainer.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 *     ExRaiseAccessViolation @ 0x1407C5920 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x140816D04 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140816DDC (VfFastIoSnapState.c)
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
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  PVOID v17; // r12
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  PLARGE_INTEGER v21; // rsi
  __int64 v22; // rax
  USHORT SectorSize; // cx
  unsigned int v24; // edx
  unsigned int v25; // r8d
  __int16 v26; // cx
  struct _IO_STATUS_BLOCK *Status; // rcx
  void *v28; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // r15
  ULONG *p_Flags; // r13
  ULONG Flags; // eax
  struct _KTHREAD *v32; // rax
  volatile __int32 *v33; // r14
  __int64 v34; // r9
  __int64 (__fastcall *FastIoRead)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r15
  void *v36; // r14
  char v37; // si
  struct _KTHREAD *v38; // rax
  struct _KTHREAD *v39; // rcx
  unsigned __int64 v40; // rax
  volatile __int32 *v41; // rbx
  PVOID v42; // rbx
  struct _KTHREAD *v43; // rcx
  bool v44; // zf
  char v46; // r15
  PDEVICE_OBJECT v47; // r13
  __int64 Irp; // rax
  IRP *v49; // rsi
  __int64 v50; // r14
  ULONG v51; // eax
  int v52; // r15d
  PRKEVENT v53; // rsi
  struct _MDL *Mdl; // rax
  int v55; // eax
  PVOID v57; // rbx
  PVOID v58; // rbx
  char v59; // [rsp+50h] [rbp-A8h]
  PVOID Object; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v61[8]; // [rsp+60h] [rbp-98h] BYREF
  LONGLONG QuadPart; // [rsp+68h] [rbp-90h] BYREF
  ULONG v63; // [rsp+70h] [rbp-88h]
  PRKEVENT Eventa; // [rsp+78h] [rbp-80h]
  int v65; // [rsp+80h] [rbp-78h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-70h]
  __int128 v67; // [rsp+90h] [rbp-68h] BYREF
  NTSTATUS v68; // [rsp+A0h] [rbp-58h]
  PVOID v69; // [rsp+A8h] [rbp-50h]
  PVOID v70; // [rsp+B0h] [rbp-48h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-40h]
  __int64 retaddr; // [rsp+F8h] [rbp+0h]

  Eventa = 0LL;
  v63 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v59 = PreviousMode;
  v11 = ObReferenceObjectByHandle(FileHandle, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v12 = (struct _FILE_OBJECT *)Object;
  v69 = Object;
  if ( v11 >= 0 )
  {
    v13 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v13 )
    {
      if ( (*v13 & 4) != 0 )
      {
        if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
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
  if ( PreviousMode )
  {
    v65 = 0;
    v15 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v16 )
    {
      v26 = *(_WORD *)(v16 + 8);
      if ( v26 == 332 || v26 == 452 )
      {
        v12 = (struct _FILE_OBJECT *)Object;
        if ( (*((_DWORD *)Object + 20) & 2) != 0 )
        {
LABEL_9:
          v17 = Buffer;
          if ( Length )
          {
            v18 = (unsigned __int64)Buffer;
            v19 = (unsigned __int64)Buffer + Length - 1;
            if ( (unsigned __int64)Buffer > v19 || v19 >= 0x7FFFFFFF0000LL )
            {
              if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
                ExRaiseAccessViolation();
              v12 = (struct _FILE_OBJECT *)Object;
            }
            else
            {
              v20 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
              do
              {
                *(_BYTE *)v18 = *(_BYTE *)v18;
                v18 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
              }
              while ( v18 != v20 );
              v12 = (struct _FILE_OBJECT *)Object;
            }
          }
          if ( v12->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            goto LABEL_131;
          v21 = ByteOffset;
          if ( ByteOffset )
          {
            if ( ((unsigned __int8)ByteOffset & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            QuadPart = ByteOffset->QuadPart;
            v12 = (struct _FILE_OBJECT *)Object;
          }
          if ( (v12->Flags & 8) == 0 )
          {
LABEL_18:
            v22 = (__int64)Key;
            if ( Key )
            {
              if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
                v22 = 0x7FFFFFFF0000LL;
              v63 = *(_DWORD *)v22;
              v12 = (struct _FILE_OBJECT *)Object;
            }
            goto LABEL_47;
          }
          SectorSize = RelatedDeviceObject->SectorSize;
          if ( SectorSize )
          {
            v24 = SectorSize;
            v25 = SectorSize;
            if ( ((SectorSize - 1) & Length) != 0 )
            {
LABEL_38:
              if ( SectorSize && Length % v25 )
                goto LABEL_131;
              v24 = v25;
              if ( (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0 )
                goto LABEL_131;
LABEL_30:
              if ( ByteOffset && SectorSize && ((v24 - 1) & (unsigned int)QuadPart) != 0 )
                goto LABEL_131;
              goto LABEL_18;
            }
          }
          else
          {
            v24 = 0;
          }
          v25 = v24;
          if ( (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) == 0 )
            goto LABEL_30;
          goto LABEL_38;
        }
        ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
        Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
        IoStatusBlock = Status;
        Status->Status = Status->Status;
      }
    }
    v12 = (struct _FILE_OBJECT *)Object;
    goto LABEL_9;
  }
  v21 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  v17 = Buffer;
  if ( Key )
    v63 = *Key;
LABEL_47:
  if ( Event )
  {
    v52 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v70, 0LL);
    v28 = v70;
    Eventa = (PRKEVENT)v70;
    if ( v52 < 0 )
    {
      ObfDereferenceObject(v12);
      return v52;
    }
    KeResetEvent((PRKEVENT)v70);
  }
  else
  {
    v28 = Eventa;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  p_Flags = &v12->Flags;
  Flags = v12->Flags;
  if ( (Flags & 2) == 0 )
  {
    if ( !v21 && (Flags & 0x280) == 0 )
    {
      if ( v28 )
        ObfDereferenceObject(v28);
      goto LABEL_131;
    }
    v46 = 0;
    goto LABEL_70;
  }
  v32 = KeGetCurrentThread();
  --v32->KernelApcDisable;
  v33 = (volatile __int32 *)Object;
  if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v12 = (struct _FILE_OBJECT *)Object;
    v68 = IopAcquireFileObjectLock((char *)Object, v59, (*p_Flags & 4) != 0, v61);
    if ( v61[0] )
    {
      if ( Eventa )
        ObfDereferenceObject(Eventa);
      ObfDereferenceObject(v12);
      return v68;
    }
  }
  else
  {
    v12 = (struct _FILE_OBJECT *)Object;
    ObfReferenceObject(Object);
  }
  if ( !v21 || QuadPart == -2 )
    QuadPart = v12->CurrentByteOffset.QuadPart;
  if ( !v12->PrivateCacheMap )
    goto LABEL_81;
  v67 = 0uLL;
  FastIoRead = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoRead;
  if ( QuadPart < 0 )
  {
    if ( Eventa )
      ObfDereferenceObject(Eventa);
    _InterlockedExchange(v33 + 29, 0);
    v57 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v57);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
    return -1073741811;
  }
  else
  {
    if ( (MmVerifierData & 0x10) != 0 )
      v36 = (void *)VfFastIoSnapState();
    else
      v36 = 0LL;
    LOBYTE(v34) = 1;
    v37 = FastIoRead(v12, &QuadPart, Length, v34, v63, v17, &v67, DeviceObject);
    if ( v36 )
      VfFastIoCheckState(v36, (ULONG_PTR)FastIoRead);
    if ( !v37 || (_DWORD)v67 && (_DWORD)v67 != -1073741807 && (_DWORD)v67 != -2147483643 )
    {
LABEL_81:
      v46 = 1;
      v28 = Eventa;
LABEL_70:
      if ( QuadPart >= 0 )
      {
        if ( (*p_Flags & 0x4000000) == 0 )
          KeResetEvent(&v12->Event);
        v47 = DeviceObject;
        Irp = IopAllocateIrpExReturn(
                (__int64)DeviceObject,
                (unsigned __int8)DeviceObject->StackSize,
                (unsigned __int8)v46 ^ 1u,
                retaddr);
        v49 = (IRP *)Irp;
        DeviceObject = (PDEVICE_OBJECT)Irp;
        if ( Irp )
        {
          *(_QWORD *)(Irp + 192) = v12;
          *(_QWORD *)(Irp + 152) = CurrentThread;
          *(_QWORD *)(Irp + 160) = 0LL;
          *(_BYTE *)(Irp + 64) = v59;
          *(_BYTE *)(Irp + 65) = 0;
          *(_BYTE *)(Irp + 68) = 0;
          *(_QWORD *)(Irp + 104) = 0LL;
          *(_QWORD *)(Irp + 80) = v28;
          *(_QWORD *)(Irp + 72) = IoStatusBlock;
          *(_QWORD *)(Irp + 88) = ApcRoutine;
          *(_QWORD *)(Irp + 96) = ApcContext;
          v50 = *(_QWORD *)(Irp + 184);
          *(_DWORD *)(v50 - 72) = 3;
          *(_QWORD *)(v50 - 24) = v12;
          *(_QWORD *)(Irp + 24) = 0LL;
          *(_QWORD *)(Irp + 8) = 0LL;
          v51 = v47->Flags;
          if ( (v51 & 4) != 0 )
          {
            if ( Length )
            {
              v49->AssociatedIrp.MasterIrp = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(
                                                              NonPagedPoolNxCacheAligned,
                                                              Length);
              v49->UserBuffer = v17;
              v55 = 112;
            }
            else
            {
              v55 = 80;
            }
            v49->Flags = v55;
          }
          else
          {
            v49->Flags = 0;
            if ( (v51 & 0x10) != 0 )
            {
              if ( Length )
              {
                Mdl = IoAllocateMdl(v17, Length, 0, 1u, v49);
                if ( !Mdl )
                  RtlRaiseStatus(-1073741670);
                MmProbeAndLockPages(Mdl, v59, IoWriteAccess);
              }
            }
            else
            {
              v49->UserBuffer = v17;
            }
          }
          v49->Flags |= (*((_DWORD *)v69 + 20) & 8 | 0x4800u) >> 3;
          *(_DWORD *)(v50 - 64) = Length;
          *(_DWORD *)(v50 - 56) = v63;
          *(_QWORD *)(v50 - 48) = QuadPart;
          return IopSynchronousServiceTail(v47, v49, v59, v46, 0);
        }
        else
        {
          IopAllocateIrpCleanup(v12, v28);
          return -1073741670;
        }
      }
      if ( v28 )
        ObfDereferenceObject(v28);
      if ( v46 )
      {
        _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
        v58 = Object;
        if ( *((_DWORD *)Object + 28) )
          KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
        ObfDereferenceObject(v58);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v12 = (struct _FILE_OBJECT *)Object;
      }
LABEL_131:
      ObfDereferenceObject(v12);
      return -1073741811;
    }
    v38 = KeGetCurrentThread();
    ++v38->ReadOperationCount;
    __incgsdword(0x2EDCu);
    v39 = KeGetCurrentThread();
    v40 = DWORD2(v67);
    v39->ReadTransferCount += DWORD2(v67);
    __addgsqword(0x2EE8u, v40);
    *(_OWORD *)&IoStatusBlock->Status = v67;
    v41 = (volatile __int32 *)Object;
    if ( Event )
    {
      v53 = Eventa;
      if ( (*((_DWORD *)Object + 20) & 0x8000000) == 0 )
        KeSetEvent(Eventa, 0, 0);
      ObfDereferenceObject(v53);
    }
    _InterlockedExchange(v41 + 29, 0);
    v42 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v42);
    v43 = KeGetCurrentThread();
    v44 = v43->KernelApcDisable++ == -1;
    if ( v44
      && ($005F0E83B22994B61E86C72E0CE43C71 *)v43->ApcState.ApcListHead[0].Flink != &v43->152
      && !v43->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ObfDereferenceObject(Object);
    return v67;
  }
}

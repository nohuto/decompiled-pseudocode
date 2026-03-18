/*
 * XREFs of NtWriteFileGather @ 0x14044F2A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140033E50 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x14004F3DC (IopReferenceFileObject.c)
 *     MmProbeAndLockSelectedPages @ 0x1400B2BF0 (MmProbeAndLockSelectedPages.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     IopExceptionFilter @ 0x1401EFA10 (IopExceptionFilter.c)
 *     IopAcquireFastLock_1 @ 0x1401F5DBC (IopAcquireFastLock_1.c)
 *     MmUpdateMdlTracker @ 0x14020ECE8 (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtWriteFileGather(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        FILE_SEGMENT_ELEMENT BufferDescription[],
        ULONG BufferLength,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  HANDLE v9; // r12
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  unsigned __int8 GrantedAccess; // bl
  PFILE_OBJECT v13; // rdi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v15; // r8
  PDEVICE_OBJECT v16; // r10
  ULONG *p_Flags; // r15
  __int64 Flags; // rdx
  unsigned __int64 DeviceType; // rcx
  ULONG v20; // r11d
  ULONG v21; // r14d
  __int64 v22; // r12
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  SIZE_T v26; // rbx
  FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rsi
  ULONG v28; // r9d
  USHORT SectorSize; // cx
  __int16 v30; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  __int16 v32; // ax
  int v33; // ebx
  struct _KEVENT *v34; // r14
  char v35; // r12
  struct _DEVICE_OBJECT *v36; // r13
  IRP *Irp; // rax
  IRP *v38; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _MDL *Mdl; // rax
  unsigned __int64 v41; // r15
  UCHAR MajorFunction; // r13
  __int64 v43; // rcx
  PFILE_OBJECT v44; // rbx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-A8h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-A0h]
  char v47; // [rsp+52h] [rbp-96h]
  FILE_SEGMENT_ELEMENT *P; // [rsp+58h] [rbp-90h]
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-88h] BYREF
  ULONG v50; // [rsp+68h] [rbp-80h]
  int v51; // [rsp+6Ch] [rbp-7Ch]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-78h]
  int v53; // [rsp+78h] [rbp-70h]
  ACCESS_MASK v54; // [rsp+7Ch] [rbp-6Ch]
  PVOID v55; // [rsp+80h] [rbp-68h]
  PVOID Object; // [rsp+88h] [rbp-60h] BYREF
  ULONG *v57; // [rsp+90h] [rbp-58h]
  struct _OBJECT_HANDLE_INFORMATION v58; // [rsp+98h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-48h]
  __int64 retaddr; // [rsp+E8h] [rbp+0h]

  v9 = Event;
  P = 0LL;
  v55 = 0LL;
  v50 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&FileObject, &v58);
  if ( result < 0 )
    return result;
  GrantedAccess = v58.GrantedAccess;
  v54 = v58.GrantedAccess;
  v13 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v16 = RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  p_Flags = &v13->Flags;
  v57 = &v13->Flags;
  Flags = v13->Flags;
  if ( (v13->Flags & 0xA) != 8
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v15 = 0x40000100100348LL, !_bittest64(&v15, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v13);
    return -1073741811;
  }
  v20 = BufferLength;
  v21 = (BufferLength >> 12) + ((BufferLength & 0xFFF) != 0);
  if ( PreviousMode )
  {
    if ( ((~(unsigned __int8)((unsigned int)Flags >> 5) & 4 | 2) & GrantedAccess) == 0 )
    {
      ObfDereferenceObject(v13);
      return -1073741790;
    }
    v51 = 0;
    v22 = 0x7FFFFFFF0000LL;
    v23 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v23 = (__int64)IoStatusBlock;
    *(_DWORD *)v23 = *(_DWORD *)v23;
    v24 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    v15 = 332LL;
    Flags = 452LL;
    if ( v24 )
    {
      v30 = *(_WORD *)(v24 + 8);
      if ( (v30 == 332 || v30 == 452) && (*p_Flags & 2) == 0 )
      {
        ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
        Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
        IoStatusBlock = Status;
        Status->Status = Status->Status;
      }
    }
    v25 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v25 && ((v32 = *(_WORD *)(v25 + 8), v32 == 332) || v32 == 452) )
    {
      v26 = 8LL * v21;
      if ( v26 )
      {
        if ( ((unsigned __int8)BufferDescription & 3) != 0 )
          ExRaiseDatatypeMisalignment();
LABEL_14:
        if ( (unsigned __int64)&BufferDescription[v26 / 8] > 0x7FFFFFFF0000LL
          || &BufferDescription[v26 / 8] < BufferDescription )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
    }
    else
    {
      v26 = 8LL * v21;
      if ( v26 )
      {
        if ( ((unsigned __int8)BufferDescription & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_14;
      }
    }
    if ( BufferLength )
    {
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, v26);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, BufferDescription, v26);
      BufferDescription = PoolWithQuota_1;
      Flags = 0LL;
      v53 = 0;
      while ( (unsigned int)Flags < v21 )
      {
        if ( ((__int64)PoolWithQuota_1[(unsigned int)Flags].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        Flags = (unsigned int)(Flags + 1);
        v53 = Flags;
      }
      v16 = DeviceObject;
      v20 = BufferLength;
    }
    else
    {
      PoolWithQuota_1 = 0LL;
    }
    v13 = FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      PoolWithQuota_1 = P;
      v13 = FileObject;
    }
    p_Flags = &v13->Flags;
    v57 = &v13->Flags;
    v28 = v13->Flags;
    if ( (v28 & 8) != 0 )
    {
      SectorSize = v16->SectorSize;
      if ( SectorSize )
      {
        v15 = SectorSize;
        if ( ((SectorSize - 1) & v20) != 0 )
        {
          Flags = v20 % SectorSize;
          if ( v20 % SectorSize )
            RtlRaiseStatus(-1073741811);
        }
      }
      if ( ByteOffset
        && QuadPart != -1
        && (QuadPart != -2 || (v28 & 2) == 0)
        && SectorSize
        && ((SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      {
        RtlRaiseStatus(-1073741811);
      }
    }
    if ( Key )
    {
      if ( (unsigned __int64)Key < 0x7FFFFFFF0000LL )
        v22 = (__int64)Key;
      v50 = *(_DWORD *)v22;
      PoolWithQuota_1 = P;
      v13 = FileObject;
    }
    GrantedAccess = v54;
    v9 = Event;
    goto LABEL_63;
  }
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  PoolWithQuota_1 = 0LL;
  if ( Key )
    v50 = *Key;
LABEL_63:
  if ( (GrantedAccess & 6) == 4 )
    QuadPart = -1LL;
  if ( v9 )
  {
    v33 = ObReferenceObjectByHandle(v9, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
    v34 = (struct _KEVENT *)Object;
    v55 = Object;
    if ( v33 < 0 )
    {
LABEL_100:
      ObfDereferenceObject(v13);
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return v33;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v34 = (struct _KEVENT *)v55;
  }
  if ( (*p_Flags & 2) == 0 )
  {
    if ( !ByteOffset && (*p_Flags & 0x280) == 0 )
    {
      if ( v34 )
        ObfDereferenceObject(v34);
LABEL_116:
      ObfDereferenceObject(v13);
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return -1073741811;
    }
    v35 = 0;
    goto LABEL_71;
  }
  if ( !IopAcquireFastLock_1((volatile __int32 *)&v13->Type) )
  {
    v33 = IopAcquireFileObjectLock(v13);
    if ( v47 )
    {
      if ( v34 )
        ObfDereferenceObject(v34);
      goto LABEL_100;
    }
  }
  v35 = 1;
  if ( !ByteOffset && !(_DWORD)QuadPart || QuadPart == -2 )
    QuadPart = v13->CurrentByteOffset.QuadPart;
LABEL_71:
  if ( QuadPart < 0 && QuadPart != -1 )
  {
    if ( v34 )
      ObfDereferenceObject(v34);
    if ( v35 )
    {
      _InterlockedExchange((volatile __int32 *)&v13->Busy, 0);
      v44 = FileObject;
      if ( FileObject->Waiters )
        KeSetEvent(&FileObject->Lock, 0, 0);
      ObfDereferenceObject(v44);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      PoolWithQuota_1 = P;
      v13 = FileObject;
    }
    goto LABEL_116;
  }
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v13->Event);
  LOBYTE(v15) = v35 == 0;
  v36 = DeviceObject;
  LOBYTE(Flags) = DeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, Flags, v15, retaddr);
  v38 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v13;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = AccessMode;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = v34;
    Irp->UserIosb = IoStatusBlock;
    Irp->Overlay.AllocationSize.QuadPart = (LONGLONG)ApcRoutine;
    Irp->Overlay.AsynchronousParameters.UserApcContext = ApcContext;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = v13;
    if ( (*p_Flags & 0x10) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    if ( BufferLength )
    {
      Mdl = IoAllocateMdl(BufferDescription->Buffer, BufferLength, 0, 1u, Irp);
      v41 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MajorFunction = CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockSelectedPages(Mdl, BufferDescription, AccessMode, IoReadAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
      {
        v43 = MajorFunction;
        v36 = DeviceObject;
        MmUpdateMdlTracker(v41, (__int64)DeviceObject->DriverObject->MajorFunction[v43], (__int64)DeviceObject);
      }
      else
      {
        v36 = DeviceObject;
      }
      v38->UserBuffer = BufferDescription->Buffer;
      p_Flags = v57;
    }
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    if ( (*p_Flags & 8) != 0 )
      v38->Flags |= 0xA01u;
    else
      v38->Flags |= 0xA00u;
    CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
    CurrentStackLocation[-1].Parameters.Create.Options = v50;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    return IopSynchronousServiceTail(v36, v38, AccessMode, v35, 1);
  }
  else
  {
    IopAllocateIrpCleanup(v13, v34);
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return -1073741670;
  }
}

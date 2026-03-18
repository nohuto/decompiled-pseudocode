/*
 * XREFs of NtWriteFileGather @ 0x140561D0C
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x140024E54 (IopReferenceFileObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400FEBE0 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     MmProbeAndLockSelectedPages @ 0x140100140 (MmProbeAndLockSelectedPages.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     IopExceptionFilter @ 0x1401F5104 (IopExceptionFilter.c)
 *     IopAcquireFastLock_3 @ 0x1401FBC04 (IopAcquireFastLock_3.c)
 *     MmUpdateMdlTracker @ 0x1402165C0 (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  PDEVICE_OBJECT v15; // r10
  ULONG *p_Flags; // r15
  ULONG Flags; // edx
  unsigned __int64 DeviceType; // rcx
  __int64 v19; // r8
  ULONG v20; // r11d
  ULONG v21; // r14d
  __int64 v22; // r12
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  SIZE_T v26; // rbx
  FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rsi
  ULONG v28; // edx
  ULONG v29; // r9d
  USHORT SectorSize; // cx
  __int16 v31; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  __int16 v33; // ax
  NTSTATUS v34; // ebx
  struct _KEVENT *v35; // r14
  char v36; // r12
  struct _DEVICE_OBJECT *v37; // r13
  IRP *Irp; // rax
  IRP *v39; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _MDL *Mdl; // rax
  unsigned __int64 v42; // r15
  UCHAR MajorFunction; // r13
  __int64 v44; // rcx
  PFILE_OBJECT v45; // rbx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-A8h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-A0h]
  char v48[8]; // [rsp+50h] [rbp-98h] BYREF
  PVOID P; // [rsp+58h] [rbp-90h]
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-88h] BYREF
  ULONG v51; // [rsp+68h] [rbp-80h]
  int v52; // [rsp+6Ch] [rbp-7Ch]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-78h]
  ULONG v54; // [rsp+78h] [rbp-70h]
  ACCESS_MASK v55; // [rsp+7Ch] [rbp-6Ch]
  PVOID v56; // [rsp+80h] [rbp-68h]
  PVOID Object; // [rsp+88h] [rbp-60h] BYREF
  ULONG *v58; // [rsp+90h] [rbp-58h]
  struct _OBJECT_HANDLE_INFORMATION v59; // [rsp+98h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-48h]

  v9 = Event;
  P = 0LL;
  v56 = 0LL;
  v51 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&FileObject, &v59);
  if ( result < 0 )
    return result;
  GrantedAccess = v59.GrantedAccess;
  v55 = v59.GrantedAccess;
  v13 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v15 = RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  p_Flags = &v13->Flags;
  v58 = &v13->Flags;
  Flags = v13->Flags;
  if ( (Flags & 8) == 0
    || (Flags & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v19 = 0x40000100100348LL, !_bittest64(&v19, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v13);
    return -1073741811;
  }
  v20 = BufferLength;
  v21 = (BufferLength >> 12) + ((BufferLength & 0xFFF) != 0);
  if ( PreviousMode )
  {
    if ( ((~(unsigned __int8)(Flags >> 5) & 4 | 2) & GrantedAccess) == 0 )
    {
      ObfDereferenceObject(v13);
      return -1073741790;
    }
    v52 = 0;
    v22 = 0x7FFFFFFF0000LL;
    v23 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v23 = (__int64)IoStatusBlock;
    *(_DWORD *)v23 = *(_DWORD *)v23;
    v24 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v24 )
    {
      v31 = *(_WORD *)(v24 + 8);
      if ( (v31 == 332 || v31 == 452) && (*p_Flags & 2) == 0 )
      {
        ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
        Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
        IoStatusBlock = Status;
        Status->Status = Status->Status;
      }
    }
    v25 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v25 && ((v33 = *(_WORD *)(v25 + 8), v33 == 332) || v33 == 452) )
    {
      v26 = 8LL * v21;
      if ( v26 )
      {
        if ( ((unsigned __int8)BufferDescription & 3) != 0 )
          ExRaiseDatatypeMisalignment();
LABEL_15:
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
        goto LABEL_15;
      }
    }
    if ( BufferLength )
    {
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, v26);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, BufferDescription, v26);
      BufferDescription = PoolWithQuota_1;
      v28 = 0;
      v54 = 0;
      while ( v28 < v21 )
      {
        if ( ((__int64)PoolWithQuota_1[v28].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        v54 = ++v28;
      }
      v15 = DeviceObject;
      v20 = BufferLength;
    }
    else
    {
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
    }
    v13 = FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
      v13 = FileObject;
    }
    p_Flags = &v13->Flags;
    v58 = &v13->Flags;
    v29 = v13->Flags;
    if ( (v29 & 8) != 0 )
    {
      SectorSize = v15->SectorSize;
      if ( SectorSize && ((SectorSize - 1) & v20) != 0 && v20 % SectorSize )
        RtlRaiseStatus(-1073741811);
      if ( ByteOffset
        && QuadPart != -1
        && (QuadPart != -2 || (v29 & 2) == 0)
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
      v51 = *(_DWORD *)v22;
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
      v13 = FileObject;
    }
    GrantedAccess = v55;
    v9 = Event;
    goto LABEL_63;
  }
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
  if ( Key )
    v51 = *Key;
LABEL_63:
  if ( (GrantedAccess & 6) == 4 )
    QuadPart = -1LL;
  if ( v9 )
  {
    v34 = ObReferenceObjectByHandle(v9, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
    v35 = (struct _KEVENT *)Object;
    v56 = Object;
    if ( v34 < 0 )
    {
LABEL_100:
      ObfDereferenceObject(v13);
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return v34;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v35 = (struct _KEVENT *)v56;
  }
  if ( (*p_Flags & 2) == 0 )
  {
    if ( !ByteOffset && (*p_Flags & 0x280) == 0 )
    {
      if ( v35 )
        ObfDereferenceObject(v35);
LABEL_116:
      ObfDereferenceObject(v13);
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return -1073741811;
    }
    v36 = 0;
    goto LABEL_71;
  }
  if ( !IopAcquireFastLock_3((volatile __int32 *)&v13->Type) )
  {
    v34 = IopAcquireFileObjectLock((char *)v13, AccessMode, (*p_Flags & 4) != 0, v48);
    if ( v48[0] )
    {
      if ( v35 )
        ObfDereferenceObject(v35);
      goto LABEL_100;
    }
  }
  v36 = 1;
  if ( !ByteOffset && !(_DWORD)QuadPart || QuadPart == -2 )
    QuadPart = v13->CurrentByteOffset.QuadPart;
LABEL_71:
  if ( QuadPart < 0 && QuadPart != -1 )
  {
    if ( v35 )
      ObfDereferenceObject(v35);
    if ( v36 )
    {
      _InterlockedExchange((volatile __int32 *)&v13->Busy, 0);
      v45 = FileObject;
      if ( FileObject->Waiters )
        KeSetEvent(&FileObject->Lock, 0, 0);
      ObfDereferenceObject(v45);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
      v13 = FileObject;
    }
    goto LABEL_116;
  }
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v13->Event);
  v37 = DeviceObject;
  Irp = (IRP *)IopAllocateIrpExReturn();
  v39 = Irp;
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
    Irp->UserEvent = v35;
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
      v42 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MajorFunction = CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockSelectedPages(Mdl, BufferDescription, AccessMode, IoReadAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
      {
        v44 = MajorFunction;
        v37 = DeviceObject;
        MmUpdateMdlTracker(v42, (__int64)DeviceObject->DriverObject->MajorFunction[v44], (__int64)DeviceObject);
      }
      else
      {
        v37 = DeviceObject;
      }
      v39->UserBuffer = BufferDescription->Buffer;
      p_Flags = v58;
    }
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    if ( (*p_Flags & 8) != 0 )
      v39->Flags |= 0xA01u;
    else
      v39->Flags |= 0xA00u;
    CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
    CurrentStackLocation[-1].Parameters.Create.Options = v51;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    return IopSynchronousServiceTail(v37, v39, (__int64)v13, 1, AccessMode, v36, 1u);
  }
  else
  {
    IopAllocateIrpCleanup(v13, v35);
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return -1073741670;
  }
}

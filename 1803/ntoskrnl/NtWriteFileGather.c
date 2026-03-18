/*
 * XREFs of NtWriteFileGather @ 0x140580364
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x1400697A4 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400D05A8 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmProbeAndLockSelectedPages @ 0x140136C00 (MmProbeAndLockSelectedPages.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     IopExceptionFilter @ 0x140232634 (IopExceptionFilter.c)
 *     IopAcquireFastLock_3 @ 0x1402388DC (IopAcquireFastLock_3.c)
 *     MmUpdateMdlTracker @ 0x1402542A8 (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
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
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  unsigned __int8 GrantedAccess; // r14
  PFILE_OBJECT v12; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v14; // r8
  PDEVICE_OBJECT v15; // r10
  ULONG *p_Flags; // r15
  __int64 Flags; // rdx
  unsigned __int64 DeviceType; // rcx
  ULONG v19; // r11d
  ULONG v20; // edi
  __int64 v21; // r14
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  bool v25; // cl
  __int64 v26; // rbx
  FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rsi
  ULONG v28; // r9d
  USHORT SectorSize; // cx
  __int16 v30; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  __int16 v32; // ax
  NTSTATUS v33; // edi
  struct _KEVENT *v34; // r14
  char v35; // r12
  struct _DEVICE_OBJECT *v36; // r13
  IRP *Irp; // rax
  IRP *v38; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _MDL *Mdl; // rax
  unsigned __int64 v41; // r15
  UCHAR MajorFunction; // r13
  __int64 v43; // rcx
  PFILE_OBJECT v44; // rbx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-A8h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-A0h]
  char v47[7]; // [rsp+51h] [rbp-97h] BYREF
  PVOID P; // [rsp+58h] [rbp-90h]
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
  v12 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v15 = RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  p_Flags = &v12->Flags;
  v57 = &v12->Flags;
  Flags = v12->Flags;
  if ( (Flags & 8) == 0
    || (Flags & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v14 = 0x40000100100348LL, !_bittest64(&v14, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v12);
    return -1073741811;
  }
  v19 = BufferLength;
  v20 = (BufferLength >> 12) + ((BufferLength & 0xFFF) != 0);
  if ( PreviousMode )
  {
    if ( ((~(unsigned __int8)((unsigned int)Flags >> 5) & 4 | 2) & GrantedAccess) == 0 )
    {
      ObfDereferenceObject(v12);
      return -1073741790;
    }
    v51 = 0;
    v21 = 0x7FFFFFFF0000LL;
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v22 = (__int64)IoStatusBlock;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    v23 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    v14 = 332LL;
    Flags = 452LL;
    if ( v23 )
    {
      v30 = *(_WORD *)(v23 + 8);
      if ( (v30 == 332 || v30 == 452) && (*p_Flags & 2) == 0 )
      {
        ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
        Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
        IoStatusBlock = Status;
        Status->Status = Status->Status;
      }
    }
    v24 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    v25 = 0;
    if ( v24 )
    {
      v32 = *(_WORD *)(v24 + 8);
      if ( v32 == 332 || v32 == 452 )
        v25 = 1;
    }
    v26 = v20;
    if ( v25 )
    {
      if ( v26 * 8 )
      {
        if ( ((unsigned __int8)BufferDescription & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_20;
      }
    }
    else if ( v26 * 8 )
    {
      if ( ((unsigned __int8)BufferDescription & 7) != 0 )
        ExRaiseDatatypeMisalignment();
LABEL_20:
      if ( (unsigned __int64)&BufferDescription[v26] > 0x7FFFFFFF0000LL || &BufferDescription[v26] < BufferDescription )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( BufferLength )
    {
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, 8LL * v20);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, BufferDescription, 8LL * v20);
      BufferDescription = PoolWithQuota_1;
      Flags = 0LL;
      v53 = 0;
      while ( (unsigned int)Flags < v20 )
      {
        if ( ((__int64)PoolWithQuota_1[(unsigned int)Flags].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        Flags = (unsigned int)(Flags + 1);
        v53 = Flags;
      }
      v15 = DeviceObject;
      v19 = BufferLength;
    }
    else
    {
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
    }
    v12 = FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
      v12 = FileObject;
    }
    p_Flags = &v12->Flags;
    v57 = &v12->Flags;
    v28 = v12->Flags;
    if ( (v28 & 8) != 0 )
    {
      SectorSize = v15->SectorSize;
      if ( SectorSize )
      {
        v14 = SectorSize;
        if ( ((SectorSize - 1) & v19) != 0 )
        {
          Flags = v19 % SectorSize;
          if ( v19 % SectorSize )
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
        v21 = (__int64)Key;
      v50 = *(_DWORD *)v21;
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
      v12 = FileObject;
    }
    GrantedAccess = v54;
    goto LABEL_68;
  }
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
  if ( Key )
    v50 = *Key;
LABEL_68:
  if ( (GrantedAccess & 6) == 4 )
    QuadPart = -1LL;
  if ( Event )
  {
    v33 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
    v34 = (struct _KEVENT *)Object;
    v55 = Object;
    if ( v33 < 0 )
    {
LABEL_99:
      ObfDereferenceObject(v12);
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
LABEL_115:
      ObfDereferenceObject(v12);
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return -1073741811;
    }
    v35 = 0;
    goto LABEL_76;
  }
  if ( !IopAcquireFastLock_3((volatile __int32 *)&v12->Type) )
  {
    v33 = IopAcquireFileObjectLock((char *)v12, AccessMode, (*p_Flags & 4) != 0, v47);
    if ( v47[0] )
    {
      if ( v34 )
        ObfDereferenceObject(v34);
      goto LABEL_99;
    }
  }
  v35 = 1;
  if ( !ByteOffset && !(_DWORD)QuadPart || QuadPart == -2 )
    QuadPart = v12->CurrentByteOffset.QuadPart;
LABEL_76:
  if ( QuadPart < 0 && QuadPart != -1 )
  {
    if ( v34 )
      ObfDereferenceObject(v34);
    if ( v35 )
    {
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      v44 = FileObject;
      if ( FileObject->Waiters )
        KeSetEvent(&FileObject->Lock, 0, 0);
      ObfDereferenceObject(v44);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
      v12 = FileObject;
    }
    goto LABEL_115;
  }
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v12->Event);
  LOBYTE(v14) = v35 ^ 1;
  v36 = DeviceObject;
  LOBYTE(Flags) = DeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, Flags, v14, retaddr);
  v38 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v12;
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
    CurrentStackLocation[-1].FileObject = v12;
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
    v38->Flags |= (*p_Flags & 8 | 0x5000) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
    CurrentStackLocation[-1].Parameters.Create.Options = v50;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    return IopSynchronousServiceTail(v36, v38, AccessMode, v35, 1);
  }
  else
  {
    IopAllocateIrpCleanup(v12, v34);
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return -1073741670;
  }
}

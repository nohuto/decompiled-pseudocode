/*
 * XREFs of NtReadFileScatter @ 0x1404507E0
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
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtReadFileScatter(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE UserApcRoutine,
        PVOID UserApcContext,
        PIO_STATUS_BLOCK UserIoStatusBlock,
        FILE_SEGMENT_ELEMENT BufferDescription[],
        ULONG BufferLength,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  HANDLE v9; // r15
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  PFILE_OBJECT v12; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v14; // r8
  __int64 i; // rdx
  unsigned __int64 DeviceType; // rcx
  ULONG v17; // r12d
  __int64 v18; // r15
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  PLARGE_INTEGER v21; // rsi
  unsigned __int16 v22; // cx
  unsigned __int64 v23; // rax
  SIZE_T v24; // rbx
  FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rdi
  __int16 v26; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  __int16 v28; // ax
  int v29; // r15d
  struct _KEVENT *v30; // r14
  ULONG Flags; // eax
  char v32; // r12
  IRP *Irp; // rax
  IRP *v34; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _MDL *Mdl; // rax
  PFILE_OBJECT v37; // rbx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-88h]
  char v39; // [rsp+43h] [rbp-85h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-80h]
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-78h] BYREF
  PVOID P; // [rsp+58h] [rbp-70h]
  ULONG v43; // [rsp+60h] [rbp-68h]
  int v44; // [rsp+64h] [rbp-64h]
  int v45; // [rsp+68h] [rbp-60h]
  PVOID v46; // [rsp+70h] [rbp-58h]
  PVOID Object; // [rsp+78h] [rbp-50h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-40h]
  __int64 retaddr; // [rsp+C8h] [rbp+0h]

  v9 = Event;
  P = 0LL;
  v46 = 0LL;
  v43 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( result < 0 )
    return result;
  v12 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  i = (__int64)RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  if ( (v12->Flags & 0xA) != 8
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v14 = 0x40000100100348LL, !_bittest64(&v14, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v12);
    return -1073741811;
  }
  v17 = (BufferLength >> 12) + ((BufferLength & 0xFFF) != 0);
  if ( PreviousMode )
  {
    v44 = 0;
    v18 = 0x7FFFFFFF0000LL;
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)UserIoStatusBlock < 0x7FFFFFFF0000LL )
      v19 = (__int64)UserIoStatusBlock;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    v20 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v20 )
    {
      v26 = *(_WORD *)(v20 + 8);
      if ( (v26 == 332 || v26 == 452) && (v12->Flags & 2) == 0 )
      {
        UserApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)UserApcRoutine | 1);
        Status = (struct _IO_STATUS_BLOCK *)(unsigned int)UserIoStatusBlock->Status;
        UserIoStatusBlock = Status;
        Status->Status = Status->Status;
      }
    }
    v14 = (__int64)FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)UserApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(FileObject);
      return -1073741811;
    }
    v21 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v14 = (__int64)FileObject;
    }
    if ( (v12->Flags & 8) != 0 )
    {
      if ( (v22 = *(_WORD *)(i + 304)) != 0 && ((v22 - 1) & BufferLength) != 0 && (i = BufferLength % v22, (_DWORD)i)
        || ByteOffset && v22 && ((v22 - 1) & (unsigned int)QuadPart) != 0 )
      {
        ObfDereferenceObject((PVOID)v14);
        return -1073741811;
      }
    }
    v23 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v23 && ((v28 = *(_WORD *)(v23 + 8), v28 == 332) || v28 == 452) )
    {
      v24 = 8LL * v17;
      if ( v24 )
      {
        if ( ((unsigned __int8)BufferDescription & 3) != 0 )
          ExRaiseDatatypeMisalignment();
LABEL_24:
        if ( (unsigned __int64)&BufferDescription[v24 / 8] > 0x7FFFFFFF0000LL
          || &BufferDescription[v24 / 8] < BufferDescription )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
    }
    else
    {
      v24 = 8LL * v17;
      if ( v24 )
      {
        if ( ((unsigned __int8)BufferDescription & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_24;
      }
    }
    if ( BufferLength )
    {
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, v24);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, BufferDescription, v24);
      BufferDescription = PoolWithQuota_1;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v45 = i;
        if ( (unsigned int)i >= v17 )
          break;
        if ( ((__int64)PoolWithQuota_1[i].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
      }
    }
    else
    {
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
    }
    if ( Key )
    {
      if ( (unsigned __int64)Key < 0x7FFFFFFF0000LL )
        v18 = (__int64)Key;
      v43 = *(_DWORD *)v18;
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
    }
    v12 = FileObject;
    v9 = Event;
    goto LABEL_55;
  }
  v21 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
  if ( Key )
    v43 = *Key;
LABEL_55:
  if ( v9 )
  {
    v29 = ObReferenceObjectByHandle(v9, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v30 = (struct _KEVENT *)Object;
    v46 = Object;
    if ( v29 < 0 )
    {
LABEL_84:
      ObfDereferenceObject(v12);
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return v29;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v30 = (struct _KEVENT *)v46;
  }
  Flags = v12->Flags;
  if ( (Flags & 2) == 0 )
  {
    if ( !v21 && (Flags & 0x280) == 0 )
    {
      if ( v30 )
        ObfDereferenceObject(v30);
LABEL_100:
      ObfDereferenceObject(v12);
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return -1073741811;
    }
    v32 = 0;
    goto LABEL_61;
  }
  if ( !IopAcquireFastLock_1((volatile __int32 *)&v12->Type) )
  {
    v29 = IopAcquireFileObjectLock(v12);
    if ( v39 )
    {
      if ( v30 )
        ObfDereferenceObject(v30);
      goto LABEL_84;
    }
  }
  if ( !v21 || QuadPart == -2 )
    QuadPart = v12->CurrentByteOffset.QuadPart;
  v32 = 1;
LABEL_61:
  if ( QuadPart < 0 )
  {
    if ( v30 )
      ObfDereferenceObject(v30);
    if ( v32 )
    {
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      v37 = FileObject;
      if ( FileObject->Waiters )
        KeSetEvent(&FileObject->Lock, 0, 0);
      ObfDereferenceObject(v37);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
      v12 = FileObject;
    }
    goto LABEL_100;
  }
  if ( (v12->Flags & 0x4000000) == 0 )
    KeResetEvent(&v12->Event);
  LOBYTE(v14) = v32 == 0;
  LOBYTE(i) = DeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, i, v14, retaddr);
  v34 = Irp;
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
    Irp->UserEvent = v30;
    Irp->UserIosb = UserIoStatusBlock;
    Irp->Overlay.AllocationSize.QuadPart = (LONGLONG)UserApcRoutine;
    Irp->Overlay.AsynchronousParameters.UserApcContext = UserApcContext;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = v12;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    if ( BufferLength )
    {
      Mdl = IoAllocateMdl(BufferDescription->Buffer, BufferLength, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MmProbeAndLockSelectedPages(Mdl, BufferDescription, AccessMode, IoWriteAccess);
      v34->UserBuffer = BufferDescription->Buffer;
    }
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    if ( (v12->Flags & 8) != 0 )
      v34->Flags |= 0x901u;
    else
      v34->Flags |= 0x900u;
    CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
    CurrentStackLocation[-1].Parameters.Create.Options = v43;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    return IopSynchronousServiceTail(DeviceObject, v34, AccessMode, v32, 0);
  }
  else
  {
    IopAllocateIrpCleanup(v12, v30);
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return -1073741670;
  }
}

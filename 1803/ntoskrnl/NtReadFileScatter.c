/*
 * XREFs of NtReadFileScatter @ 0x1405810E8
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
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
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
  HANDLE v9; // r14
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  PFILE_OBJECT v12; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v14; // r8
  __int64 i; // rdx
  ULONG Flags; // ecx
  unsigned __int64 DeviceType; // rcx
  ULONG v18; // r12d
  __int64 v19; // rsi
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  PLARGE_INTEGER v22; // r15
  unsigned __int16 v23; // cx
  unsigned __int64 v24; // rax
  bool v25; // cl
  __int64 v26; // rbx
  FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rdi
  __int16 v28; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  __int16 v30; // ax
  NTSTATUS v31; // esi
  struct _KEVENT *v32; // r14
  ULONG v33; // eax
  char v34; // r12
  IRP *Irp; // rax
  IRP *v36; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _MDL *Mdl; // rax
  PFILE_OBJECT v39; // rbx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-88h]
  _BYTE v41[6]; // [rsp+42h] [rbp-86h] BYREF
  LONGLONG QuadPart; // [rsp+48h] [rbp-80h]
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-78h] BYREF
  PVOID P; // [rsp+58h] [rbp-70h]
  ULONG v45; // [rsp+60h] [rbp-68h]
  int v46; // [rsp+64h] [rbp-64h]
  int v47; // [rsp+68h] [rbp-60h]
  PVOID v48; // [rsp+70h] [rbp-58h]
  PVOID Object; // [rsp+78h] [rbp-50h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-40h]
  __int64 retaddr; // [rsp+C8h] [rbp+0h]

  v9 = Event;
  P = 0LL;
  v48 = 0LL;
  v45 = 0;
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
  v18 = (BufferLength >> 12) + ((BufferLength & 0xFFF) != 0);
  if ( PreviousMode )
  {
    v46 = 0;
    v19 = 0x7FFFFFFF0000LL;
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)UserIoStatusBlock < 0x7FFFFFFF0000LL )
      v20 = (__int64)UserIoStatusBlock;
    *(_DWORD *)v20 = *(_DWORD *)v20;
    v21 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v21 )
    {
      v28 = *(_WORD *)(v21 + 8);
      if ( (v28 == 332 || v28 == 452) && (v12->Flags & 2) == 0 )
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
    v22 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v14 = (__int64)FileObject;
    }
    if ( (v12->Flags & 8) != 0 )
    {
      if ( (v23 = *(_WORD *)(i + 304)) != 0 && ((v23 - 1) & BufferLength) != 0 && (i = BufferLength % v23, (_DWORD)i)
        || ByteOffset && v23 && ((v23 - 1) & (unsigned int)QuadPart) != 0 )
      {
        ObfDereferenceObject((PVOID)v14);
        return -1073741811;
      }
    }
    v24 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    v25 = 0;
    if ( v24 )
    {
      v30 = *(_WORD *)(v24 + 8);
      if ( v30 == 332 || v30 == 452 )
        v25 = 1;
    }
    v26 = v18;
    if ( v25 )
    {
      if ( v26 * 8 )
      {
        if ( ((unsigned __int8)BufferDescription & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_30;
      }
    }
    else if ( v26 * 8 )
    {
      if ( ((unsigned __int8)BufferDescription & 7) != 0 )
        ExRaiseDatatypeMisalignment();
LABEL_30:
      if ( (unsigned __int64)&BufferDescription[v26] > 0x7FFFFFFF0000LL || &BufferDescription[v26] < BufferDescription )
        MEMORY[0x7FFFFFFF0000] = 0;
      v9 = Event;
    }
    if ( BufferLength )
    {
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, 8LL * v18);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, BufferDescription, 8LL * v18);
      BufferDescription = PoolWithQuota_1;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v47 = i;
        if ( (unsigned int)i >= v18 )
          break;
        if ( ((__int64)PoolWithQuota_1[i].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
      }
      v9 = Event;
    }
    else
    {
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
    }
    if ( Key )
    {
      if ( (unsigned __int64)Key < 0x7FFFFFFF0000LL )
        v19 = (__int64)Key;
      v45 = *(_DWORD *)v19;
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
    }
    v12 = FileObject;
    PreviousMode = AccessMode;
    goto LABEL_63;
  }
  v22 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
  if ( Key )
    v45 = *Key;
LABEL_63:
  if ( v9 )
  {
    v31 = ObReferenceObjectByHandle(v9, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v32 = (struct _KEVENT *)Object;
    v48 = Object;
    if ( v31 < 0 )
    {
LABEL_86:
      ObfDereferenceObject(v12);
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return v31;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v32 = (struct _KEVENT *)v48;
  }
  v33 = v12->Flags;
  if ( (v33 & 2) == 0 )
  {
    if ( !v22 && (v33 & 0x280) == 0 )
    {
      if ( v32 )
        ObfDereferenceObject(v32);
LABEL_102:
      ObfDereferenceObject(v12);
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return -1073741811;
    }
    v34 = 0;
    goto LABEL_69;
  }
  if ( !IopAcquireFastLock_3((volatile __int32 *)&v12->Type) )
  {
    v31 = IopAcquireFileObjectLock((char *)v12, AccessMode, (v12->Flags & 4) != 0, v41);
    if ( v41[0] )
    {
      if ( v32 )
        ObfDereferenceObject(v32);
      goto LABEL_86;
    }
  }
  if ( !v22 || QuadPart == -2 )
    QuadPart = v12->CurrentByteOffset.QuadPart;
  v34 = 1;
LABEL_69:
  if ( QuadPart < 0 )
  {
    if ( v32 )
      ObfDereferenceObject(v32);
    if ( v34 )
    {
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      v39 = FileObject;
      if ( FileObject->Waiters )
        KeSetEvent(&FileObject->Lock, 0, 0);
      ObfDereferenceObject(v39);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
      v12 = FileObject;
    }
    goto LABEL_102;
  }
  if ( (v12->Flags & 0x4000000) == 0 )
    KeResetEvent(&v12->Event);
  LOBYTE(v14) = v34 ^ 1;
  LOBYTE(i) = DeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, i, v14, retaddr);
  v36 = Irp;
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
    Irp->UserEvent = v32;
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
      v36->UserBuffer = BufferDescription->Buffer;
    }
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    v36->Flags |= (v12->Flags & 8 | 0x4800) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
    CurrentStackLocation[-1].Parameters.Create.Options = v45;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    return IopSynchronousServiceTail(DeviceObject, v36, AccessMode, v34, 0);
  }
  else
  {
    IopAllocateIrpCleanup(v12, v32);
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return -1073741670;
  }
}

/*
 * XREFs of NtReadFileScatter @ 0x1405616E4
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
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  PDEVICE_OBJECT v14; // rdx
  ULONG Flags; // ecx
  unsigned __int64 DeviceType; // rcx
  __int64 v17; // r8
  ULONG v18; // r12d
  __int64 v19; // r15
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  PFILE_OBJECT v22; // r8
  PLARGE_INTEGER v23; // rsi
  USHORT SectorSize; // cx
  unsigned __int64 v25; // rax
  SIZE_T v26; // rbx
  FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rdi
  __int64 i; // rdx
  __int16 v29; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  __int16 v31; // ax
  NTSTATUS v32; // r15d
  struct _KEVENT *v33; // r14
  ULONG v34; // eax
  char v35; // r12
  IRP *Irp; // rax
  IRP *v37; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _MDL *Mdl; // rax
  PFILE_OBJECT v40; // rbx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-88h]
  char v42[7]; // [rsp+41h] [rbp-87h] BYREF
  LONGLONG QuadPart; // [rsp+48h] [rbp-80h]
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-78h] BYREF
  PVOID P; // [rsp+58h] [rbp-70h]
  ULONG v46; // [rsp+60h] [rbp-68h]
  int v47; // [rsp+64h] [rbp-64h]
  int v48; // [rsp+68h] [rbp-60h]
  PVOID v49; // [rsp+70h] [rbp-58h]
  PVOID Object; // [rsp+78h] [rbp-50h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-40h]

  v9 = Event;
  P = 0LL;
  v49 = 0LL;
  v46 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( result < 0 )
    return result;
  v12 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v14 = RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  Flags = v12->Flags;
  if ( (Flags & 8) == 0
    || (Flags & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v17 = 0x40000100100348LL, !_bittest64(&v17, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v12);
    return -1073741811;
  }
  v18 = (BufferLength >> 12) + ((BufferLength & 0xFFF) != 0);
  if ( PreviousMode )
  {
    v47 = 0;
    v19 = 0x7FFFFFFF0000LL;
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)UserIoStatusBlock < 0x7FFFFFFF0000LL )
      v20 = (__int64)UserIoStatusBlock;
    *(_DWORD *)v20 = *(_DWORD *)v20;
    v21 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v21 )
    {
      v29 = *(_WORD *)(v21 + 8);
      if ( (v29 == 332 || v29 == 452) && (v12->Flags & 2) == 0 )
      {
        UserApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)UserApcRoutine | 1);
        Status = (struct _IO_STATUS_BLOCK *)(unsigned int)UserIoStatusBlock->Status;
        UserIoStatusBlock = Status;
        Status->Status = Status->Status;
      }
    }
    v22 = FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)UserApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(FileObject);
      return -1073741811;
    }
    v23 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v22 = FileObject;
    }
    if ( (v12->Flags & 8) != 0
      && ((SectorSize = v14->SectorSize) != 0 && ((SectorSize - 1) & BufferLength) != 0 && BufferLength % SectorSize
       || ByteOffset && SectorSize && ((SectorSize - 1) & (unsigned int)QuadPart) != 0) )
    {
      ObfDereferenceObject(v22);
      return -1073741811;
    }
    v25 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v25 && ((v31 = *(_WORD *)(v25 + 8), v31 == 332) || v31 == 452) )
    {
      v26 = 8LL * v18;
      if ( v26 )
      {
        if ( ((unsigned __int8)BufferDescription & 3) != 0 )
          ExRaiseDatatypeMisalignment();
LABEL_25:
        if ( (unsigned __int64)&BufferDescription[v26 / 8] > 0x7FFFFFFF0000LL
          || &BufferDescription[v26 / 8] < BufferDescription )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
    }
    else
    {
      v26 = 8LL * v18;
      if ( v26 )
      {
        if ( ((unsigned __int8)BufferDescription & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_25;
      }
    }
    if ( BufferLength )
    {
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, v26);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, BufferDescription, v26);
      BufferDescription = PoolWithQuota_1;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v48 = i;
        if ( (unsigned int)i >= v18 )
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
        v19 = (__int64)Key;
      v46 = *(_DWORD *)v19;
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
    }
    v12 = FileObject;
    v9 = Event;
    goto LABEL_56;
  }
  v23 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
  if ( Key )
    v46 = *Key;
LABEL_56:
  if ( v9 )
  {
    v32 = ObReferenceObjectByHandle(v9, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v33 = (struct _KEVENT *)Object;
    v49 = Object;
    if ( v32 < 0 )
    {
LABEL_85:
      ObfDereferenceObject(v12);
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return v32;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v33 = (struct _KEVENT *)v49;
  }
  v34 = v12->Flags;
  if ( (v34 & 2) == 0 )
  {
    if ( !v23 && (v34 & 0x280) == 0 )
    {
      if ( v33 )
        ObfDereferenceObject(v33);
LABEL_101:
      ObfDereferenceObject(v12);
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return -1073741811;
    }
    v35 = 0;
    goto LABEL_62;
  }
  if ( !IopAcquireFastLock_3((volatile __int32 *)&v12->Type) )
  {
    v32 = IopAcquireFileObjectLock((char *)v12, AccessMode, (v12->Flags & 4) != 0, v42);
    if ( v42[0] )
    {
      if ( v33 )
        ObfDereferenceObject(v33);
      goto LABEL_85;
    }
  }
  if ( !v23 || QuadPart == -2 )
    QuadPart = v12->CurrentByteOffset.QuadPart;
  v35 = 1;
LABEL_62:
  if ( QuadPart < 0 )
  {
    if ( v33 )
      ObfDereferenceObject(v33);
    if ( v35 )
    {
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      v40 = FileObject;
      if ( FileObject->Waiters )
        KeSetEvent(&FileObject->Lock, 0, 0);
      ObfDereferenceObject(v40);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
      v12 = FileObject;
    }
    goto LABEL_101;
  }
  if ( (v12->Flags & 0x4000000) == 0 )
    KeResetEvent(&v12->Event);
  Irp = (IRP *)IopAllocateIrpExReturn();
  v37 = Irp;
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
    Irp->UserEvent = v33;
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
      v37->UserBuffer = BufferDescription->Buffer;
    }
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    if ( (v12->Flags & 8) != 0 )
      v37->Flags |= 0x901u;
    else
      v37->Flags |= 0x900u;
    CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
    CurrentStackLocation[-1].Parameters.Create.Options = v46;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    return IopSynchronousServiceTail(DeviceObject, v37, (__int64)v12, 1, AccessMode, v35, 0);
  }
  else
  {
    IopAllocateIrpCleanup(v12, v33);
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return -1073741670;
  }
}

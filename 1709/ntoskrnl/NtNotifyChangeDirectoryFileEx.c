/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x140582FC0
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x140582F60 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140024180 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x140024E54 (IopReferenceFileObject.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IopAcquireFastLock_2 @ 0x14008AA84 (IopAcquireFastLock_2.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IopProbeAndLockPages_0 @ 0x1401FBAA8 (IopProbeAndLockPages_0.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 */

NTSTATUS __cdecl NtNotifyChangeDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass)
{
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v13; // rcx
  ULONG v14; // r12d
  NTSTATUS result; // eax
  PFILE_OBJECT v16; // rdi
  ULONG *p_Flags; // rsi
  unsigned __int64 v18; // rax
  __int16 v19; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 Irp; // rax
  IRP *v23; // rsi
  __int64 v24; // rbx
  DIRECTORY_NOTIFY_INFORMATION_CLASS v25; // ecx
  ULONG Flags; // eax
  char v27; // al
  NTSTATUS v28; // ebx
  struct _IRP *PoolWithQuota_0; // rcx
  PMDL Mdl; // rcx
  __int64 v31; // r8
  char v32; // [rsp+40h] [rbp-58h]
  _BYTE v33[7]; // [rsp+41h] [rbp-57h] BYREF
  PVOID v34; // [rsp+48h] [rbp-50h]
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-48h] BYREF
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]

  v34 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v13 = (__int64)IoStatusBlock;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = Length;
    if ( Length )
      ProbeForWrite(Buffer, Length, 4u);
    if ( (CompletionFilter & 0xFFFFF000) != 0 || !CompletionFilter )
      return -1073741811;
  }
  else
  {
    v14 = Length;
  }
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( result >= 0 )
  {
    v16 = FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v28 = -1073741811;
      goto LABEL_43;
    }
    if ( Event )
    {
      v28 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v34 = Object;
      if ( v28 < 0 )
      {
LABEL_43:
        ObfDereferenceObject(v16);
        return v28;
      }
      KeResetEvent((PRKEVENT)Object);
    }
    p_Flags = &v16->Flags;
    if ( (v16->Flags & 2) != 0 )
    {
      if ( !IopAcquireFastLock_2((__int64)v16) )
      {
        v28 = IopAcquireFileObjectLock((char *)v16, PreviousMode, (*p_Flags & 4) != 0, v33);
        if ( v33[0] )
        {
          if ( v34 )
            ObfDereferenceObject(v34);
          goto LABEL_43;
        }
      }
      v32 = 1;
    }
    else
    {
      v32 = 0;
      if ( PreviousMode )
      {
        v18 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
        if ( v18 )
        {
          v19 = *(_WORD *)(v18 + 8);
          if ( v19 == 332 || v19 == 452 )
          {
            ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
            Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
            IoStatusBlock = Status;
            Status->Status = Status->Status;
          }
        }
        v16 = FileObject;
      }
    }
    if ( (*p_Flags & 0x4000000) == 0 )
      KeResetEvent(&v16->Event);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v16);
    Irp = IopAllocateIrpExReturn();
    v23 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup(v16, v34);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 192) = v16;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = v34;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_QWORD *)(Irp + 88) = ApcRoutine;
    *(_QWORD *)(Irp + 96) = ApcContext;
    v24 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v24 - 72) = 12;
    v25 = DirectoryNotifyInformationClass;
    if ( DirectoryNotifyInformationClass == DirectoryNotifyExtendedInformation )
      *(_BYTE *)(v24 - 71) = 3;
    else
      *(_BYTE *)(v24 - 71) = 2;
    *(_QWORD *)(v24 - 24) = v16;
    if ( !v14 )
      goto LABEL_27;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(
                                         (unsigned int)DirectoryNotifyInformationClass,
                                         v14);
      v23->AssociatedIrp.MasterIrp = PoolWithQuota_0;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota_0, 0, v14);
      v23->Flags = 112;
      v25 = DirectoryNotifyInformationClass;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl(Buffer, v14, 0, 1u, v23);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_0(Mdl, PreviousMode, v31, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v24 - 72));
      v25 = DirectoryNotifyInformationClass;
      goto LABEL_27;
    }
    v23->UserBuffer = Buffer;
LABEL_27:
    *(_DWORD *)(v24 - 64) = v14;
    *(_DWORD *)(v24 - 56) = CompletionFilter;
    if ( *(_BYTE *)(v24 - 71) == 3 )
      *(_DWORD *)(v24 - 48) = v25;
    *(_BYTE *)(v24 - 70) = 0;
    v27 = *(_BYTE *)(v24 - 70);
    if ( WatchTree )
      v27 = 1;
    *(_BYTE *)(v24 - 70) = v27;
    return IopSynchronousServiceTail(RelatedDeviceObject, v23, (__int64)v16, 0, PreviousMode, v32, 2u);
  }
  return result;
}

/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x140572550
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x1405724F0 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140060FB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopReferenceFileObject @ 0x1400697A4 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     IopAcquireFastLock_2 @ 0x1400EB86C (IopAcquireFastLock_2.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x1402387E8 (IopProbeAndLockPages_1.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
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
  NTSTATUS v17; // ebx
  ULONG *p_Flags; // rsi
  char v19; // bl
  unsigned __int64 v20; // rax
  __int16 v21; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 Irp; // rax
  IRP *v27; // rbx
  __int64 v28; // rsi
  DIRECTORY_NOTIFY_INFORMATION_CLASS v29; // ecx
  ULONG Flags; // eax
  char v31; // al
  struct _IRP *PoolWithQuota_0; // rcx
  PMDL Mdl; // rcx
  __int64 v34; // r8
  char v35; // [rsp+40h] [rbp-58h]
  _BYTE v36[7]; // [rsp+41h] [rbp-57h] BYREF
  PVOID v37; // [rsp+48h] [rbp-50h]
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-48h] BYREF
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  v37 = 0LL;
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
      v17 = -1073741811;
      goto LABEL_41;
    }
    if ( Event )
    {
      v17 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v37 = Object;
      if ( v17 < 0 )
      {
LABEL_41:
        ObfDereferenceObject(v16);
        return v17;
      }
      KeResetEvent((PRKEVENT)Object);
    }
    p_Flags = &v16->Flags;
    if ( (v16->Flags & 2) != 0 )
    {
      if ( !IopAcquireFastLock_2((__int64)v16) )
      {
        v17 = IopAcquireFileObjectLock((char *)v16, PreviousMode, (*p_Flags & 4) != 0, v36);
        if ( v36[0] )
        {
          if ( v37 )
            ObfDereferenceObject(v37);
          goto LABEL_41;
        }
      }
      v19 = 1;
      v35 = 1;
    }
    else
    {
      v19 = 0;
      v35 = 0;
      if ( PreviousMode )
      {
        v20 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
        if ( v20 )
        {
          v21 = *(_WORD *)(v20 + 8);
          if ( v21 == 332 || v21 == 452 )
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
    LOBYTE(v24) = v19 ^ 1;
    LOBYTE(v25) = RelatedDeviceObject->StackSize;
    Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v25, v24, retaddr);
    v27 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup(v16, v37);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 192) = v16;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = v37;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_QWORD *)(Irp + 88) = ApcRoutine;
    *(_QWORD *)(Irp + 96) = ApcContext;
    v28 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v28 - 72) = 12;
    v29 = DirectoryNotifyInformationClass;
    *(_BYTE *)(v28 - 71) = (DirectoryNotifyInformationClass == DirectoryNotifyExtendedInformation) + 2;
    *(_QWORD *)(v28 - 24) = v16;
    if ( !v14 )
      goto LABEL_27;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(
                                         (unsigned int)DirectoryNotifyInformationClass,
                                         v14);
      v27->AssociatedIrp.MasterIrp = PoolWithQuota_0;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota_0, 0, v14);
      v27->Flags = 112;
      v29 = DirectoryNotifyInformationClass;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl(Buffer, v14, 0, 1u, v27);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_1(Mdl, PreviousMode, v34, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v28 - 72));
      v29 = DirectoryNotifyInformationClass;
      goto LABEL_27;
    }
    v27->UserBuffer = Buffer;
LABEL_27:
    *(_DWORD *)(v28 - 64) = v14;
    *(_DWORD *)(v28 - 56) = CompletionFilter;
    if ( *(_BYTE *)(v28 - 71) == 3 )
      *(_DWORD *)(v28 - 48) = v29;
    *(_BYTE *)(v28 - 70) = 0;
    v31 = *(_BYTE *)(v28 - 70);
    if ( WatchTree )
      v31 = 1;
    *(_BYTE *)(v28 - 70) = v31;
    return IopSynchronousServiceTail(RelatedDeviceObject, v27, PreviousMode, v35, 2);
  }
  return result;
}

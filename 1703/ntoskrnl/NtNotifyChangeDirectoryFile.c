/*
 * XREFs of NtNotifyChangeDirectoryFile @ 0x140445BB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140022E90 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x14004F3DC (IopReferenceFileObject.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x1401F5CD4 (IopProbeAndLockPages_1.c)
 *     IopAcquireFastLock_1 @ 0x1401F5DBC (IopAcquireFastLock_1.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 */

NTSTATUS __stdcall NtNotifyChangeDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG BufferSize,
        ULONG CompletionFilter,
        BOOLEAN WatchTree)
{
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v12; // rcx
  ULONG v13; // r13d
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v15; // rdi
  int v16; // ebx
  ULONG *p_Flags; // rsi
  char v18; // bl
  unsigned __int64 v19; // rax
  __int16 v20; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 Irp; // rax
  __int64 v26; // rcx
  IRP *v27; // rbx
  __int64 v28; // rsi
  ULONG Flags; // eax
  struct _IRP *PoolWithQuota; // rcx
  PMDL Mdl; // rcx
  __int64 v32; // r8
  char v33; // [rsp+40h] [rbp-58h]
  char v34; // [rsp+41h] [rbp-57h]
  PVOID v35; // [rsp+48h] [rbp-50h]
  PVOID v36; // [rsp+50h] [rbp-48h] BYREF
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  v35 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v12 = (__int64)IoStatusBlock;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    v13 = BufferSize;
    if ( BufferSize )
      ProbeForWrite(Buffer, BufferSize, 4u);
    if ( (CompletionFilter & 0xFFFFF000) != 0 || !CompletionFilter )
      return -1073741811;
  }
  else
  {
    v13 = BufferSize;
  }
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, &v36, 0LL);
  if ( result >= 0 )
  {
    v15 = (struct _FILE_OBJECT *)v36;
    if ( *((_QWORD *)v36 + 22) && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v16 = -1073741811;
LABEL_22:
      ObfDereferenceObject(v15);
      return v16;
    }
    if ( Event )
    {
      v16 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v35 = Object;
      if ( v16 < 0 )
        goto LABEL_22;
      KeResetEvent((PRKEVENT)Object);
    }
    p_Flags = &v15->Flags;
    if ( (v15->Flags & 2) != 0 )
    {
      if ( !IopAcquireFastLock_1((volatile __int32 *)&v15->Type) )
      {
        v16 = IopAcquireFileObjectLock(v15);
        if ( v34 )
        {
          if ( v35 )
            ObfDereferenceObject(v35);
          goto LABEL_22;
        }
      }
      v18 = 1;
      v33 = 1;
    }
    else
    {
      v18 = 0;
      v33 = 0;
      if ( PreviousMode )
      {
        v19 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
        if ( v19 )
        {
          v20 = *(_WORD *)(v19 + 8);
          if ( v20 == 332 || v20 == 452 )
          {
            ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
            Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
            IoStatusBlock = Status;
            Status->Status = Status->Status;
          }
        }
        v15 = (struct _FILE_OBJECT *)v36;
      }
    }
    if ( (*p_Flags & 0x4000000) == 0 )
      KeResetEvent(&v15->Event);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v15);
    LOBYTE(v23) = v18 == 0;
    LOBYTE(v24) = RelatedDeviceObject->StackSize;
    Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v24, v23, retaddr);
    v27 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup(v15, v35);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 192) = v15;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = v35;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_QWORD *)(Irp + 88) = ApcRoutine;
    *(_QWORD *)(Irp + 96) = ApcContext;
    v28 = *(_QWORD *)(Irp + 184);
    *(_WORD *)(v28 - 72) = 524;
    *(_QWORD *)(v28 - 24) = v15;
    if ( !v13 )
      goto LABEL_44;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v26, v13);
      v27->AssociatedIrp.MasterIrp = PoolWithQuota;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota, 0, v13);
      v27->Flags = 112;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl(Buffer, v13, 0, 1u, v27);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_1(Mdl, PreviousMode, v32, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v28 - 72));
      goto LABEL_44;
    }
    v27->UserBuffer = Buffer;
LABEL_44:
    *(_DWORD *)(v28 - 64) = v13;
    *(_DWORD *)(v28 - 56) = CompletionFilter;
    if ( WatchTree )
      *(_BYTE *)(v28 - 70) = 1;
    return IopSynchronousServiceTail(RelatedDeviceObject, v27, PreviousMode, v33, 2);
  }
  return result;
}

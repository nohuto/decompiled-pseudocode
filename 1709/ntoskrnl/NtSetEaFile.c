/*
 * XREFs of NtSetEaFile @ 0x14044F5E0
 * Callers:
 *     <none>
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140024180 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopAcquireFastLock_0 @ 0x140024220 (IopAcquireFastLock_0.c)
 *     IopReferenceFileObject @ 0x140024E54 (IopReferenceFileObject.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     IopProbeAndLockPages_1 @ 0x1401FBB08 (IopProbeAndLockPages_1.c)
 *     IopVerifierExAllocatePool_2 @ 0x1401FBB70 (IopVerifierExAllocatePool_2.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     IoCheckEaBufferValidity @ 0x14053D6F0 (IoCheckEaBufferValidity.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1405753C0 (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID EaBuffer, ULONG EaBufferSize)
{
  SIZE_T v4; // rbx
  PIO_STATUS_BLOCK v6; // rdi
  struct _KEVENT *v8; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v10; // rcx
  NTSTATUS result; // eax
  PFILE_OBJECT v12; // r14
  IRP *v13; // rax
  IRP *Irp; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  ULONG Flags; // eax
  char v17; // r12
  __int64 v18; // r9
  NTSTATUS v19; // ebx
  struct _KEVENT *Pool_2; // rax
  _FILE_FULL_EA_INFORMATION *PoolWithQuota_0; // rdi
  int v22; // eax
  PMDL Mdl; // rcx
  char v24; // [rsp+40h] [rbp-78h]
  char v25; // [rsp+41h] [rbp-77h]
  char v26; // [rsp+41h] [rbp-77h]
  ULONG ErrorOffset; // [rsp+48h] [rbp-70h] BYREF
  PVOID P; // [rsp+50h] [rbp-68h]
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-60h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  PIRP v31; // [rsp+68h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-48h]
  _QWORD v33[3]; // [rsp+78h] [rbp-40h] BYREF

  v4 = EaBufferSize;
  v6 = IoStatusBlock;
  v8 = 0LL;
  P = 0LL;
  v33[0] = 0LL;
  v33[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v24 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v10 = (__int64)IoStatusBlock;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( EaBufferSize )
    {
      if ( ((unsigned __int8)EaBuffer & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)EaBuffer + EaBufferSize > 0x7FFFFFFF0000LL || (char *)EaBuffer + EaBufferSize < EaBuffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(FileHandle, 0x10u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( result < 0 )
    return result;
  v12 = FileObject;
  if ( (FileObject->Flags & 2) == 0 )
  {
    Pool_2 = (struct _KEVENT *)IopVerifierExAllocatePool_2();
    v8 = Pool_2;
    P = Pool_2;
    if ( Pool_2 )
    {
      KeInitializeEvent(Pool_2, SynchronizationEvent, 0);
      v26 = 0;
      goto LABEL_15;
    }
    v19 = -1073741670;
    goto LABEL_30;
  }
  if ( !IopAcquireFastLock_0((volatile __int32 *)&FileObject->Type) )
  {
    v19 = IopAcquireFileObjectLock(v12);
    if ( !v25 )
    {
      v4 = EaBufferSize;
      goto LABEL_14;
    }
LABEL_30:
    ObfDereferenceObject(v12);
    return v19;
  }
LABEL_14:
  v26 = 1;
LABEL_15:
  if ( (v12->Flags & 0x4000000) == 0 )
    KeResetEvent(&v12->Event);
  DeviceObject = IoGetRelatedDeviceObject(v12);
  v13 = (IRP *)IopAllocateIrpExReturn();
  Irp = v13;
  v31 = v13;
  if ( v13 )
  {
    v13->Tail.Overlay.OriginalFileObject = v12;
    v13->Tail.Overlay.Thread = CurrentThread;
    v13->RequestorMode = PreviousMode;
    if ( v26 )
    {
      v13->UserEvent = 0LL;
      v13->UserIosb = v6;
    }
    else
    {
      v13->UserEvent = v8;
      v13->UserIosb = (PIO_STATUS_BLOCK)v33;
      v13->Flags = 4;
    }
    v13->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 8;
    CurrentStackLocation[-1].FileObject = v12;
    Flags = DeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      if ( (_DWORD)v4 )
      {
        PoolWithQuota_0 = (_FILE_FULL_EA_INFORMATION *)IopVerifierExAllocatePoolWithQuota_0(0LL, v4);
        Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota_0;
        memmove(PoolWithQuota_0, EaBuffer, v4);
        LODWORD(v4) = EaBufferSize;
        v22 = IoCheckEaBufferValidity(PoolWithQuota_0, EaBufferSize, &ErrorOffset);
        if ( v22 < 0 )
        {
          IoStatusBlock->Status = v22;
          IoStatusBlock->Information = ErrorOffset;
          RtlRaiseStatus(v22);
        }
        Irp->Flags |= 0x30u;
        v6 = IoStatusBlock;
      }
      else
      {
        Irp->AssociatedIrp.MasterIrp = 0LL;
      }
    }
    else if ( (Flags & 0x10) != 0 )
    {
      if ( (_DWORD)v4 )
      {
        Mdl = IoAllocateMdl(EaBuffer, v4, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        v17 = v24;
        IopProbeAndLockPages_1(Mdl, v24, 0, (__int64)DeviceObject, CurrentStackLocation[-1].MajorFunction);
        goto LABEL_24;
      }
    }
    else
    {
      Irp->UserBuffer = EaBuffer;
    }
    v17 = v24;
LABEL_24:
    CurrentStackLocation[-1].Parameters.Read.Length = v4;
    result = IopSynchronousServiceTail(DeviceObject, Irp, v17, v26, 2);
    if ( !v26 )
    {
      LOBYTE(v18) = v17;
      return IopSynchronousApiServiceTail((unsigned int)result, v8, Irp, v18, v33, v6);
    }
    return result;
  }
  if ( (v12->Flags & 2) == 0 )
    ExFreePoolWithTag(v8, 0);
  IopAllocateIrpCleanup(v12, 0LL);
  return -1073741670;
}

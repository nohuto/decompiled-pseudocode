/*
 * XREFs of NtSetEaFile @ 0x14068D200
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     IopAcquireFastLock @ 0x140022E54 (IopAcquireFastLock.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140022E90 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x14004F3DC (IopReferenceFileObject.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     IopProbeAndLockPages_0 @ 0x1401EFEC4 (IopProbeAndLockPages_0.c)
 *     IopVerifierExAllocatePool_2 @ 0x1401F5D34 (IopVerifierExAllocatePool_2.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopSynchronousApiServiceTail @ 0x140440474 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IoCheckEaBufferValidity @ 0x140544020 (IoCheckEaBufferValidity.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID EaBuffer, ULONG EaBufferSize)
{
  SIZE_T v4; // rbx
  PIO_STATUS_BLOCK v6; // rdi
  struct _KEVENT *v8; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v10; // rcx
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v12; // r14
  NTSTATUS v13; // ebx
  struct _KEVENT *Pool_2; // rax
  __int64 v15; // rdx
  IRP *v16; // rax
  IRP *Irp; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  ULONG Flags; // eax
  _FILE_FULL_EA_INFORMATION *PoolWithQuota; // rdi
  int v21; // eax
  PMDL Mdl; // rcx
  char v23; // r12
  char v24; // bl
  char v25; // [rsp+40h] [rbp-78h]
  char v26; // [rsp+41h] [rbp-77h] BYREF
  char v27; // [rsp+42h] [rbp-76h]
  NTSTATUS v28; // [rsp+44h] [rbp-74h]
  ULONG ErrorOffset; // [rsp+48h] [rbp-70h] BYREF
  PVOID P; // [rsp+50h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  PIRP v33; // [rsp+68h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-48h]
  _QWORD v35[3]; // [rsp+78h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v4 = EaBufferSize;
  v6 = IoStatusBlock;
  v8 = 0LL;
  P = 0LL;
  v35[0] = 0LL;
  v35[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v25 = PreviousMode;
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
  result = IopReferenceFileObject(FileHandle, 0x10u, PreviousMode, &Object, 0LL);
  v28 = result;
  if ( result >= 0 )
  {
    v12 = (struct _FILE_OBJECT *)Object;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      if ( IopAcquireFastLock((volatile __int32 *)Object) )
      {
LABEL_15:
        v26 = 1;
        goto LABEL_20;
      }
      v13 = IopAcquireFileObjectLock((char *)v12, PreviousMode, (v12->Flags & 4) != 0, &v26);
      v28 = v13;
      if ( !v26 )
      {
        v4 = EaBufferSize;
        goto LABEL_15;
      }
    }
    else
    {
      Pool_2 = (struct _KEVENT *)IopVerifierExAllocatePool_2();
      v8 = Pool_2;
      P = Pool_2;
      if ( Pool_2 )
      {
        KeInitializeEvent(Pool_2, SynchronizationEvent, 0);
        v26 = 0;
LABEL_20:
        if ( (v12->Flags & 0x4000000) == 0 )
          KeResetEvent(&v12->Event);
        DeviceObject = IoGetRelatedDeviceObject(v12);
        LOBYTE(v15) = DeviceObject->StackSize;
        v16 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v15, 0LL, retaddr);
        Irp = v16;
        v33 = v16;
        if ( !v16 )
        {
          if ( (v12->Flags & 2) == 0 )
            ExFreePoolWithTag(v8, 0);
          IopAllocateIrpCleanup((char *)v12, 0LL);
          return -1073741670;
        }
        v16->Tail.Overlay.OriginalFileObject = v12;
        v16->Tail.Overlay.Thread = CurrentThread;
        v16->RequestorMode = PreviousMode;
        if ( v26 )
        {
          v16->UserEvent = 0LL;
          v16->UserIosb = v6;
        }
        else
        {
          v16->UserEvent = v8;
          v16->UserIosb = (PIO_STATUS_BLOCK)v35;
          v16->Flags = 4;
        }
        v16->Overlay.AllocationSize.QuadPart = 0LL;
        CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].MajorFunction = 8;
        CurrentStackLocation[-1].FileObject = v12;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          if ( (_DWORD)v4 )
          {
            v27 = 0;
            PoolWithQuota = (_FILE_FULL_EA_INFORMATION *)IopVerifierExAllocatePoolWithQuota(0LL, v4);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota;
            memmove(PoolWithQuota, EaBuffer, v4);
            LODWORD(v4) = EaBufferSize;
            v21 = IoCheckEaBufferValidity(PoolWithQuota, EaBufferSize, &ErrorOffset);
            v28 = v21;
            if ( v21 < 0 )
            {
              v27 = 1;
              IoStatusBlock->Status = v21;
              IoStatusBlock->Information = ErrorOffset;
              RtlRaiseStatus(v21);
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
            v23 = v25;
            IopProbeAndLockPages_0(Mdl, v25, 0, (__int64)DeviceObject, CurrentStackLocation[-1].MajorFunction);
            goto LABEL_42;
          }
        }
        else
        {
          Irp->UserBuffer = EaBuffer;
        }
        v23 = v25;
LABEL_42:
        CurrentStackLocation[-1].Parameters.Read.Length = v4;
        v24 = v26;
        result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v12, 0, v23, v26, 2u);
        if ( !v24 )
          return IopSynchronousApiServiceTail(result, v8, Irp, v23, (unsigned int *)v35, v6);
        return result;
      }
      v13 = -1073741670;
    }
    ObfDereferenceObject(v12);
    return v13;
  }
  return result;
}

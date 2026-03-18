/*
 * XREFs of NtQueryEaFile @ 0x14043F120
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
 *     memset @ 0x140192D80 (memset.c)
 *     IopProbeAndLockPages_0 @ 0x1401EFEC4 (IopProbeAndLockPages_0.c)
 *     IopVerifierExAllocatePool_2 @ 0x1401F5D34 (IopVerifierExAllocatePool_2.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopSynchronousApiServiceTail @ 0x140440474 (IopSynchronousApiServiceTail.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryEaFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        PULONG EaIndex,
        BOOLEAN RestartScan)
{
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  char *v15; // rax
  UNICODE_STRING *PoolWithQuota; // rdi
  UNICODE_STRING *v17; // rbx
  signed int v18; // ecx
  NTSTATUS result; // eax
  unsigned int v20; // eax
  __int64 v21; // rdx
  NTSTATUS v22; // ebx
  struct _KEVENT *v23; // rsi
  struct _FILE_OBJECT *v24; // r14
  char v25; // r13
  struct _KEVENT *Pool_2; // rax
  __int64 v27; // rdx
  IRP *v28; // rax
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *v30; // rsi
  struct _DEVICE_OBJECT *v31; // rdi
  ULONG Flags; // eax
  ULONG v33; // eax
  struct _IRP *v34; // rcx
  PMDL Mdl; // rcx
  __int64 v36; // r9
  char v37; // [rsp+40h] [rbp-88h]
  char v38; // [rsp+41h] [rbp-87h]
  char v39; // [rsp+42h] [rbp-86h]
  ULONG v40; // [rsp+50h] [rbp-78h]
  struct _KEVENT *v41; // [rsp+58h] [rbp-70h]
  PVOID Object; // [rsp+60h] [rbp-68h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-60h]
  PIRP v44; // [rsp+70h] [rbp-58h]
  UNICODE_STRING *v45; // [rsp+78h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-48h]
  _QWORD v47[3]; // [rsp+88h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+C8h] [rbp+0h]

  v41 = 0LL;
  v37 = 0;
  v40 = 0;
  v47[0] = 0LL;
  v47[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v38 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( EaList && EaListLength )
    {
      v37 = 1;
      PoolWithQuota = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota((__int64)FileHandle, EaListLength);
      memmove(PoolWithQuota, EaList, EaListLength);
    }
    else
    {
      PoolWithQuota = 0LL;
    }
    if ( EaIndex )
      v40 = *EaIndex;
LABEL_36:
    v22 = IopReferenceFileObject(FileHandle, 8u, PreviousMode, &Object, 0LL);
    v23 = 0LL;
    if ( v22 < 0 )
    {
      if ( v37 )
        ExFreePoolWithTag(PoolWithQuota, 0);
      return v22;
    }
    v24 = (struct _FILE_OBJECT *)Object;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      if ( !IopAcquireFastLock((volatile __int32 *)Object) )
      {
        v22 = IopAcquireFileObjectLock(v24);
        if ( v39 )
        {
          if ( v37 )
            ExFreePoolWithTag(PoolWithQuota, 0);
LABEL_50:
          ObfDereferenceObject(v24);
          return v22;
        }
      }
      v25 = 1;
    }
    else
    {
      Pool_2 = (struct _KEVENT *)IopVerifierExAllocatePool_2();
      v23 = Pool_2;
      v41 = Pool_2;
      if ( !Pool_2 )
      {
        if ( v37 )
          ExFreePoolWithTag(PoolWithQuota, 0);
        v22 = -1073741670;
        goto LABEL_50;
      }
      KeInitializeEvent(Pool_2, SynchronizationEvent, 0);
      v25 = 0;
    }
    if ( (v24->Flags & 0x4000000) == 0 )
      KeResetEvent(&v24->Event);
    DeviceObject = IoGetRelatedDeviceObject(v24);
    LOBYTE(v27) = DeviceObject->StackSize;
    v28 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v27, 0LL, retaddr);
    Irp = v28;
    v44 = v28;
    if ( !v28 )
    {
      if ( (v24->Flags & 2) == 0 )
        ExFreePoolWithTag(v23, 0);
      IopAllocateIrpCleanup(v24, 0LL);
      if ( v37 )
        ExFreePoolWithTag(PoolWithQuota, 0);
      return -1073741670;
    }
    v28->Tail.Overlay.OriginalFileObject = v24;
    v28->Tail.Overlay.Thread = CurrentThread;
    v28->RequestorMode = v38;
    if ( v25 )
    {
      v28->UserEvent = 0LL;
      v28->UserIosb = IoStatusBlock;
    }
    else
    {
      v28->UserEvent = v23;
      v28->UserIosb = (PIO_STATUS_BLOCK)v47;
      v28->Flags = 4;
    }
    v28->Overlay.AllocationSize.QuadPart = 0LL;
    v30 = v28->Tail.Overlay.CurrentStackLocation - 1;
    v30->MajorFunction = 7;
    v30->FileObject = v24;
    if ( v37 )
    {
      v28->Tail.Overlay.AuxiliaryBuffer = (PCHAR)PoolWithQuota;
      v30->Parameters.QueryDirectory.FileName = PoolWithQuota;
      v30->Parameters.Read.ByteOffset.LowPart = EaListLength;
    }
    v31 = DeviceObject;
    Flags = DeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      v33 = Length;
      if ( !Length )
      {
        Irp->AssociatedIrp.MasterIrp = 0LL;
        Irp->Flags |= 0x50u;
LABEL_78:
        v30->Parameters.Read.Length = v33;
        v30->Parameters.Create.EaLength = v40;
        v30->Flags = 0;
        v30->Flags = RestartScan != 0;
        if ( ReturnSingleEntry )
          v30->Flags |= 2u;
        if ( EaIndex )
          v30->Flags |= 4u;
        result = IopSynchronousServiceTail(v31, Irp, v38, v25, 2);
        if ( !v25 )
        {
          LOBYTE(v36) = v38;
          return IopSynchronousApiServiceTail((unsigned int)result, v41, Irp, v36, v47, IoStatusBlock);
        }
        return result;
      }
      v34 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(0LL, Length);
      Irp->AssociatedIrp.MasterIrp = v34;
      if ( !IopDisableBufferedIoInit )
        memset(v34, 0, Length);
      Irp->Flags |= 0x70u;
      v31 = DeviceObject;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      v33 = Length;
      if ( Length )
      {
        Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        IopProbeAndLockPages_0(Mdl, v38, 1, (__int64)v31, v30->MajorFunction);
        v33 = Length;
      }
      goto LABEL_78;
    }
    Irp->UserBuffer = Buffer;
    v33 = Length;
    goto LABEL_78;
  }
  v12 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
    v12 = (__int64)IoStatusBlock;
  *(_DWORD *)v12 = *(_DWORD *)v12;
  ProbeForWrite(Buffer, Length, 4u);
  if ( EaIndex )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EaIndex < 0x7FFFFFFF0000LL )
      v14 = (__int64)EaIndex;
    v40 = *(_DWORD *)v14;
  }
  if ( !EaList || !EaListLength )
  {
    PoolWithQuota = 0LL;
    goto LABEL_36;
  }
  v37 = 1;
  if ( ((unsigned __int8)EaList & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (char *)EaList + EaListLength;
  if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < EaList )
    MEMORY[0x7FFFFFFF0000] = 0;
  PoolWithQuota = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota(v13, EaListLength);
  memmove(PoolWithQuota, EaList, EaListLength);
  v17 = PoolWithQuota;
  v45 = PoolWithQuota;
  v18 = EaListLength;
  while ( 1 )
  {
    if ( v18 < 5 )
    {
      ExFreePoolWithTag(PoolWithQuota, 0);
      IoStatusBlock->Status = -2147483628;
      IoStatusBlock->Information = 0LL;
      return -2147483628;
    }
    v20 = *((unsigned __int8 *)&v17->MaximumLength + 2) + 6;
    if ( v18 < v20 )
      break;
    v21 = *(unsigned int *)&v17->Length;
    if ( !(_DWORD)v21 )
    {
      if ( (int)(v18 - v20) >= 0 )
        goto LABEL_36;
      break;
    }
    if ( ((*((unsigned __int8 *)&v17->MaximumLength + 2) + 9) & 0xFFFFFFFC) != (_DWORD)v21 )
      break;
    if ( (int)v21 < 0 )
      break;
    v18 -= v21;
    if ( v18 < 0 )
      break;
    v17 = (UNICODE_STRING *)((char *)v17 + v21);
    v45 = v17;
  }
  ExFreePoolWithTag(PoolWithQuota, 0);
  IoStatusBlock->Status = -2147483628;
  IoStatusBlock->Information = (int)v17 - (int)PoolWithQuota;
  return -2147483628;
}

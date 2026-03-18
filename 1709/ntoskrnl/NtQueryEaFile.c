/*
 * XREFs of NtQueryEaFile @ 0x140572CD0
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
 *     memset @ 0x140192F40 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x1401FBB08 (IopProbeAndLockPages_1.c)
 *     IopVerifierExAllocatePool_2 @ 0x1401FBB70 (IopVerifierExAllocatePool_2.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1405753C0 (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  char *v14; // rax
  UNICODE_STRING *PoolWithQuota_0; // rdi
  UNICODE_STRING *v16; // rbx
  signed int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  NTSTATUS result; // eax
  signed int v22; // ebx
  NTSTATUS v23; // ebx
  struct _KEVENT *v24; // rsi
  PFILE_OBJECT v25; // r14
  char v26; // r13
  IRP *v27; // rax
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *v29; // rsi
  struct _DEVICE_OBJECT *v30; // rdi
  ULONG Flags; // eax
  ULONG v32; // eax
  __int64 v33; // r9
  struct _KEVENT *Pool_2; // rax
  struct _IRP *v35; // rcx
  PMDL Mdl; // rcx
  char v37; // [rsp+40h] [rbp-88h]
  char v38; // [rsp+41h] [rbp-87h]
  char v39[2]; // [rsp+42h] [rbp-86h] BYREF
  ULONG v40; // [rsp+44h] [rbp-84h]
  PVOID P; // [rsp+48h] [rbp-80h]
  ULONG v42; // [rsp+50h] [rbp-78h]
  PVOID v43; // [rsp+58h] [rbp-70h]
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-68h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-60h]
  PIRP v46; // [rsp+70h] [rbp-58h]
  UNICODE_STRING *v47; // [rsp+78h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-48h]
  _QWORD v49[3]; // [rsp+88h] [rbp-40h] BYREF

  v43 = 0LL;
  P = 0LL;
  v37 = 0;
  v42 = 0;
  v49[0] = 0LL;
  v49[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v38 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( EaList && EaListLength )
    {
      v37 = 1;
      PoolWithQuota_0 = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota_0((__int64)FileHandle, EaListLength);
      P = PoolWithQuota_0;
      memmove(PoolWithQuota_0, EaList, EaListLength);
    }
    else
    {
      PoolWithQuota_0 = (UNICODE_STRING *)P;
    }
    if ( EaIndex )
      v42 = *EaIndex;
LABEL_31:
    v23 = IopReferenceFileObject(FileHandle, 8u, PreviousMode, (PVOID *)&FileObject, 0LL);
    v24 = 0LL;
    if ( v23 < 0 )
    {
      if ( v37 )
        ExFreePoolWithTag(PoolWithQuota_0, 0);
      return v23;
    }
    v25 = FileObject;
    if ( (FileObject->Flags & 2) != 0 )
    {
      if ( !IopAcquireFastLock_0((volatile __int32 *)&FileObject->Type) )
      {
        v23 = IopAcquireFileObjectLock((char *)v25, PreviousMode, (v25->Flags & 4) != 0, v39);
        if ( v39[0] )
        {
          if ( v37 )
            ExFreePoolWithTag(PoolWithQuota_0, 0);
LABEL_60:
          ObfDereferenceObject(v25);
          return v23;
        }
      }
      v26 = 1;
    }
    else
    {
      Pool_2 = (struct _KEVENT *)IopVerifierExAllocatePool_2();
      v24 = Pool_2;
      v43 = Pool_2;
      if ( !Pool_2 )
      {
        if ( v37 )
          ExFreePoolWithTag(PoolWithQuota_0, 0);
        v23 = -1073741670;
        goto LABEL_60;
      }
      KeInitializeEvent(Pool_2, SynchronizationEvent, 0);
      v26 = 0;
    }
    if ( (v25->Flags & 0x4000000) == 0 )
      KeResetEvent(&v25->Event);
    DeviceObject = IoGetRelatedDeviceObject(v25);
    v27 = (IRP *)IopAllocateIrpExReturn();
    Irp = v27;
    v46 = v27;
    if ( !v27 )
    {
      if ( (v25->Flags & 2) == 0 )
        ExFreePoolWithTag(v24, 0);
      IopAllocateIrpCleanup(v25, 0LL);
      if ( v37 )
        ExFreePoolWithTag(PoolWithQuota_0, 0);
      return -1073741670;
    }
    v27->Tail.Overlay.OriginalFileObject = v25;
    v27->Tail.Overlay.Thread = CurrentThread;
    v27->RequestorMode = v38;
    if ( v26 )
    {
      v27->UserEvent = 0LL;
      v27->UserIosb = IoStatusBlock;
    }
    else
    {
      v27->UserEvent = v24;
      v27->UserIosb = (PIO_STATUS_BLOCK)v49;
      v27->Flags = 4;
    }
    v27->Overlay.AllocationSize.QuadPart = 0LL;
    v29 = v27->Tail.Overlay.CurrentStackLocation - 1;
    v29->MajorFunction = 7;
    v29->FileObject = v25;
    if ( v37 )
    {
      v27->Tail.Overlay.AuxiliaryBuffer = (PCHAR)PoolWithQuota_0;
      v29->Parameters.QueryDirectory.FileName = PoolWithQuota_0;
      v29->Parameters.Read.ByteOffset.LowPart = EaListLength;
    }
    v30 = DeviceObject;
    Flags = DeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      v32 = Length;
      if ( !Length )
      {
        Irp->AssociatedIrp.MasterIrp = 0LL;
        Irp->Flags |= 0x50u;
        goto LABEL_45;
      }
      v35 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(0LL, Length);
      Irp->AssociatedIrp.MasterIrp = v35;
      if ( !IopDisableBufferedIoInit )
        memset(v35, 0, Length);
      Irp->Flags |= 0x70u;
      v30 = DeviceObject;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      v32 = Length;
      if ( Length )
      {
        Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        IopProbeAndLockPages_1(Mdl, v38, 1, (__int64)v30, v29->MajorFunction);
        v32 = Length;
      }
      goto LABEL_45;
    }
    Irp->UserBuffer = Buffer;
    v32 = Length;
LABEL_45:
    v29->Parameters.Read.Length = v32;
    v29->Parameters.Create.EaLength = v42;
    v29->Flags = 0;
    v29->Flags = RestartScan != 0;
    if ( ReturnSingleEntry )
      v29->Flags |= 2u;
    if ( EaIndex )
      v29->Flags |= 4u;
    result = IopSynchronousServiceTail(v30, Irp, (__int64)v25, 0, v38, v26, 2u);
    if ( !v26 )
    {
      LOBYTE(v33) = v38;
      return IopSynchronousApiServiceTail((unsigned int)result, v43, Irp, v33, v49, IoStatusBlock);
    }
    return result;
  }
  v12 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
    v12 = (__int64)IoStatusBlock;
  *(_DWORD *)v12 = *(_DWORD *)v12;
  ProbeForWrite(Buffer, Length, 4u);
  if ( EaIndex )
  {
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EaIndex < 0x7FFFFFFF0000LL )
      v20 = (__int64)EaIndex;
    v42 = *(_DWORD *)v20;
  }
  if ( !EaList || !EaListLength )
  {
    PoolWithQuota_0 = (UNICODE_STRING *)P;
    goto LABEL_31;
  }
  v37 = 1;
  if ( ((unsigned __int8)EaList & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (char *)EaList + EaListLength;
  if ( (unsigned __int64)v14 > 0x7FFFFFFF0000LL || v14 < EaList )
    MEMORY[0x7FFFFFFF0000] = 0;
  PoolWithQuota_0 = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota_0(v13, EaListLength);
  P = PoolWithQuota_0;
  memmove(PoolWithQuota_0, EaList, EaListLength);
  v16 = PoolWithQuota_0;
  v47 = PoolWithQuota_0;
  v17 = EaListLength;
  v40 = EaListLength;
  while ( 1 )
  {
    if ( v17 < 5 )
    {
      v40 = 0;
      ExFreePoolWithTag(PoolWithQuota_0, 0);
      P = 0LL;
      IoStatusBlock->Status = -2147483628;
      IoStatusBlock->Information = 0LL;
      return -2147483628;
    }
    v18 = *((unsigned __int8 *)&v16->MaximumLength + 2) + 6;
    if ( v17 < v18 )
      break;
    v19 = *(unsigned int *)&v16->Length;
    if ( !(_DWORD)v19 )
    {
      v40 = v17 - v18;
      if ( (int)(v17 - v18) >= 0 )
        goto LABEL_31;
      break;
    }
    if ( ((*((unsigned __int8 *)&v16->MaximumLength + 2) + 9) & 0xFFFFFFFC) != (_DWORD)v19 )
      break;
    if ( (int)v19 < 0 )
      break;
    v17 -= v19;
    v40 = v17;
    if ( v17 < 0 )
      break;
    v16 = (UNICODE_STRING *)((char *)v16 + v19);
    v47 = v16;
  }
  v22 = (_DWORD)v16 - (_DWORD)PoolWithQuota_0;
  v40 = v22;
  ExFreePoolWithTag(PoolWithQuota_0, 0);
  P = 0LL;
  IoStatusBlock->Status = -2147483628;
  IoStatusBlock->Information = v22;
  return -2147483628;
}

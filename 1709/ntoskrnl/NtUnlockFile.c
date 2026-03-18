/*
 * XREFs of NtUnlockFile @ 0x14056D1B0
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopAcquireFastLock_0 @ 0x140024220 (IopAcquireFastLock_0.c)
 *     IopVerifierExAllocatePool_0 @ 0x140024EB4 (IopVerifierExAllocatePool_0.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IoGetAttachedDevice @ 0x1400855C0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x14015B9D4 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1405753C0 (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1407A9C74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407A9D54 (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int8 v9; // r13
  NTSTATUS result; // eax
  __int64 v11; // rcx
  struct _FILE_OBJECT *v12; // rbx
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _DEVICE_OBJECT *v16; // r14
  __int64 FastIoDispatch; // rcx
  __int64 (__fastcall *v18)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, PIRP *, struct _DEVICE_OBJECT *); // rdi
  void *v19; // r15
  char v20; // r12
  char v21; // r12
  struct _KEVENT *v22; // r15
  IRP *v23; // rax
  IRP *v24; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  CHAR *PoolWithQuota_2; // rax
  NTSTATUS v27; // edi
  struct _KEVENT *Pool_0; // rax
  char v29[8]; // [rsp+40h] [rbp-68h] BYREF
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  struct _KEVENT *v31; // [rsp+50h] [rbp-58h] BYREF
  PIRP Irp[2]; // [rsp+58h] [rbp-50h] BYREF
  LONGLONG v33; // [rsp+68h] [rbp-40h] BYREF
  LONGLONG QuadPart; // [rsp+70h] [rbp-38h] BYREF
  struct _KTHREAD *v35; // [rsp+78h] [rbp-30h]
  _QWORD v36[2]; // [rsp+80h] [rbp-28h] BYREF

  v36[0] = 0LL;
  v36[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v35 = CurrentThread;
  v9 = CurrentThread->gap0[10];
  result = ObReferenceObjectByHandle(
             FileHandle,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             v9,
             &Object,
             (POBJECT_HANDLE_INFORMATION)&v31);
  if ( result < 0 )
    return result;
  if ( v9 )
  {
    if ( (BYTE4(v31) & 3) == 0 )
    {
      ObfDereferenceObject(Object);
      return -1073741790;
    }
    v11 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( ((unsigned __int8)ByteOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = ByteOffset->QuadPart;
    if ( ((unsigned __int8)Length & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v33 = Length->QuadPart;
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v33 = Length->QuadPart;
  }
  v12 = (struct _FILE_OBJECT *)Object;
  if ( (*((_DWORD *)Object + 20) & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(*((PDEVICE_OBJECT *)Object + 1));
  else
    AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
  v16 = AttachedDevice;
  FastIoDispatch = (__int64)AttachedDevice->DriverObject->FastIoDispatch;
  if ( FastIoDispatch )
  {
    v18 = *(__int64 (__fastcall **)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, PIRP *, struct _DEVICE_OBJECT *))(FastIoDispatch + 56);
    if ( v18 )
    {
      Irp[0] = 0LL;
      Irp[1] = 0LL;
      if ( (MmVerifierData & 0x10) != 0 )
        v19 = (void *)VfFastIoSnapState(FastIoDispatch, v14, v15);
      else
        v19 = 0LL;
      v20 = v18(v12, &QuadPart, &v33, CurrentThread->ApcState.Process, Key, Irp, v16);
      if ( v19 )
        VfFastIoCheckState(v19, (ULONG_PTR)v18);
      if ( v20 )
      {
        *IoStatusBlock = *(PIO_STATUS_BLOCK)Irp;
        ObfDereferenceObject(v12);
        return (NTSTATUS)Irp[0];
      }
    }
  }
  if ( (v12->Flags & 2) != 0 )
  {
    if ( !IopAcquireFastLock_0((volatile __int32 *)&v12->Type) )
    {
      v27 = IopAcquireFileObjectLock((char *)v12, v9, (v12->Flags & 4) != 0, v29);
      if ( v29[0] )
      {
        ObfDereferenceObject(v12);
        return v27;
      }
    }
    v21 = 1;
    v22 = 0LL;
    v31 = 0LL;
  }
  else
  {
    Pool_0 = (struct _KEVENT *)IopVerifierExAllocatePool_0(FastIoDispatch, 0x18uLL);
    v22 = Pool_0;
    v31 = Pool_0;
    if ( !Pool_0 )
    {
      ObfDereferenceObject(v12);
      return -1073741670;
    }
    KeInitializeEvent(Pool_0, SynchronizationEvent, 0);
    v21 = 0;
  }
  v29[0] = v21;
  if ( (v12->Flags & 0x4000000) == 0 )
    KeResetEvent(&v12->Event);
  v23 = (IRP *)IopAllocateIrpExReturn();
  v24 = v23;
  Irp[0] = v23;
  if ( !v23 )
  {
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    IopAllocateIrpCleanup(v12, 0LL);
    return -1073741670;
  }
  v23->Tail.Overlay.OriginalFileObject = v12;
  v23->Tail.Overlay.Thread = v35;
  v23->RequestorMode = v9;
  if ( v21 )
  {
    v23->UserEvent = 0LL;
    v23->UserIosb = IoStatusBlock;
  }
  else
  {
    v23->UserEvent = v22;
    v23->UserIosb = (PIO_STATUS_BLOCK)v36;
    v23->Flags = 4;
  }
  v23->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v23->Tail.Overlay.CurrentStackLocation;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 529;
  CurrentStackLocation[-1].FileObject = v12;
  PoolWithQuota_2 = (CHAR *)IopVerifierExAllocatePoolWithQuota_2();
  *(_QWORD *)PoolWithQuota_2 = v33;
  v24->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_2;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)PoolWithQuota_2;
  CurrentStackLocation[-1].Parameters.Create.Options = Key;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
  LOBYTE(CurrentStackLocation) = v29[0];
  result = IopSynchronousServiceTail(v16, v24, (__int64)v12, 0, v9, v29[0], 2u);
  if ( !(_BYTE)CurrentStackLocation )
    return IopSynchronousApiServiceTail((unsigned int)result, v22, v24, v9, v36, IoStatusBlock);
  return result;
}

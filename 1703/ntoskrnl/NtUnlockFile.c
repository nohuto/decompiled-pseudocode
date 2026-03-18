/*
 * XREFs of NtUnlockFile @ 0x14043BA90
 * Callers:
 *     <none>
 * Callees:
 *     IopAcquireFastLock @ 0x140022E54 (IopAcquireFastLock.c)
 *     IopVerifierExAllocatePool_1 @ 0x14004B4A8 (IopVerifierExAllocatePool_1.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     IoGetAttachedDevice @ 0x1400815B0 (IoGetAttachedDevice.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x14014B3F4 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopSynchronousApiServiceTail @ 0x140440474 (IopSynchronousApiServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x14076804C (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140768104 (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  struct _KTHREAD *CurrentThread; // r15
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v11; // rbx
  __int64 v12; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v14; // r13
  __int64 FastIoDispatch; // rcx
  __int64 (__fastcall *v16)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *); // rsi
  void *v17; // rdi
  char v18; // r15
  __int64 v19; // rdx
  char v20; // r15
  struct _KEVENT *v21; // rsi
  IRP *v22; // rax
  IRP *v23; // rdi
  __int64 v24; // r14
  CHAR *PoolWithQuota_2; // rax
  __int64 v26; // r9
  NTSTATUS v27; // edi
  struct _KEVENT *Pool_1; // rax
  char v29; // [rsp+40h] [rbp-78h]
  char v30; // [rsp+41h] [rbp-77h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  struct _KEVENT *HandleInformation; // [rsp+50h] [rbp-68h] BYREF
  LONGLONG v33; // [rsp+58h] [rbp-60h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-58h] BYREF
  __int128 v35; // [rsp+68h] [rbp-50h] BYREF
  PIRP Irp; // [rsp+78h] [rbp-40h]
  struct _KTHREAD *v37; // [rsp+80h] [rbp-38h]
  _QWORD v38[3]; // [rsp+88h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v38[0] = 0LL;
  v38[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v37 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v30 = PreviousMode;
  result = ObReferenceObjectByHandle(
             FileHandle,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             PreviousMode,
             &Object,
             (POBJECT_HANDLE_INFORMATION)&HandleInformation);
  v11 = (struct _FILE_OBJECT *)Object;
  Irp = (PIRP)Object;
  if ( result < 0 )
    return result;
  if ( PreviousMode )
  {
    if ( (BYTE4(HandleInformation) & 3) == 0 )
    {
      ObfDereferenceObject(Object);
      return -1073741790;
    }
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v12 = (__int64)IoStatusBlock;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    if ( ((unsigned __int8)ByteOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = ByteOffset->QuadPart;
    if ( ((unsigned __int8)Length & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v33 = Length->QuadPart;
    v11 = (struct _FILE_OBJECT *)Object;
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v33 = Length->QuadPart;
  }
  if ( (v11->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v11->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v11);
  v14 = AttachedDevice;
  FastIoDispatch = (__int64)AttachedDevice->DriverObject->FastIoDispatch;
  if ( FastIoDispatch )
  {
    v16 = *(__int64 (__fastcall **)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *))(FastIoDispatch + 56);
    if ( v16 )
    {
      v35 = 0uLL;
      if ( (MmVerifierData & 0x10) != 0 )
        v17 = (void *)VfFastIoSnapState();
      else
        v17 = 0LL;
      v18 = v16(v11, &QuadPart, &v33, CurrentThread->ApcState.Process, Key, &v35, v14);
      if ( v17 )
        VfFastIoCheckState(v17);
      if ( v18 )
      {
        *(_OWORD *)&IoStatusBlock->Status = v35;
        ObfDereferenceObject(v11);
        return v35;
      }
    }
  }
  if ( (v11->Flags & 2) == 0 )
  {
    Pool_1 = (struct _KEVENT *)IopVerifierExAllocatePool_1(FastIoDispatch, 0x18uLL);
    v21 = Pool_1;
    HandleInformation = Pool_1;
    if ( Pool_1 )
    {
      v20 = 0;
      KeInitializeEvent(Pool_1, SynchronizationEvent, 0);
      goto LABEL_25;
    }
    v27 = -1073741670;
LABEL_40:
    ObfDereferenceObject(v11);
    return v27;
  }
  v20 = 1;
  if ( !IopAcquireFastLock((volatile __int32 *)&v11->Type) )
  {
    v27 = IopAcquireFileObjectLock(v11);
    if ( v29 )
      goto LABEL_40;
  }
  v21 = 0LL;
  HandleInformation = 0LL;
LABEL_25:
  if ( (v11->Flags & 0x4000000) == 0 )
    KeResetEvent(&v11->Event);
  LOBYTE(v19) = v14->StackSize;
  v22 = (IRP *)IopAllocateIrpExReturn((__int64)v14, v19, 0LL, retaddr);
  v23 = v22;
  Irp = v22;
  if ( v22 )
  {
    v22->Tail.Overlay.OriginalFileObject = v11;
    v22->Tail.Overlay.Thread = v37;
    v22->RequestorMode = PreviousMode;
    if ( v20 )
    {
      v22->UserEvent = 0LL;
      v22->UserIosb = IoStatusBlock;
    }
    else
    {
      v22->UserEvent = v21;
      v22->UserIosb = (PIO_STATUS_BLOCK)v38;
      v22->Flags = 4;
    }
    v22->Overlay.AllocationSize.QuadPart = 0LL;
    v24 = (__int64)&v22->Tail.Overlay.CurrentStackLocation[-1];
    *(_WORD *)v24 = 529;
    *(_QWORD *)(v24 + 48) = v11;
    PoolWithQuota_2 = (CHAR *)IopVerifierExAllocatePoolWithQuota_2();
    *(_QWORD *)PoolWithQuota_2 = v33;
    v23->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_2;
    *(_QWORD *)(v24 + 8) = PoolWithQuota_2;
    *(_DWORD *)(v24 + 16) = Key;
    *(_QWORD *)(v24 + 24) = QuadPart;
    result = IopSynchronousServiceTail(v14, v23, v30, v20, 2);
    if ( !v20 )
    {
      LOBYTE(v26) = v30;
      return IopSynchronousApiServiceTail((unsigned int)result, v21, v23, v26, v38, IoStatusBlock);
    }
  }
  else
  {
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    IopAllocateIrpCleanup(v11, 0LL);
    return -1073741670;
  }
  return result;
}

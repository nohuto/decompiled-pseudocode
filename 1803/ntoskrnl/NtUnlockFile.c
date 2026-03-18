/*
 * XREFs of NtUnlockFile @ 0x140557DC0
 * Callers:
 *     <none>
 * Callees:
 *     IopAcquireFastLock @ 0x140002094 (IopAcquireFastLock.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140002260 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400694C0 (IopVerifierExAllocatePool_0.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     IoGetAttachedDevice @ 0x140107050 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1405610F8 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x140816D04 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140816DDC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  unsigned __int8 v8; // r13
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v10; // rdi
  __int64 v11; // rcx
  struct _FILE_OBJECT *v12; // r12
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v14; // rsi
  __int64 FastIoDispatch; // rcx
  __int64 (__fastcall *v16)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *); // rbx
  void *v17; // r12
  char v18; // r13
  IRP *v19; // rax
  PIO_STATUS_BLOCK v20; // rcx
  struct _KEVENT *v21; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  CHAR *PoolWithQuota; // rax
  IRP *v24; // rdi
  struct _KEVENT *Pool_0; // rax
  unsigned __int8 v26; // [rsp+40h] [rbp-78h]
  char v27; // [rsp+40h] [rbp-78h]
  char v28[7]; // [rsp+41h] [rbp-77h] BYREF
  PVOID P; // [rsp+48h] [rbp-70h] BYREF
  PIRP Irp; // [rsp+50h] [rbp-68h]
  LONGLONG v31; // [rsp+58h] [rbp-60h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-58h] BYREF
  __int128 v33; // [rsp+68h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  PVOID v35; // [rsp+80h] [rbp-38h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-30h] BYREF
  _QWORD v37[2]; // [rsp+90h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v37[0] = 0LL;
  v37[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = CurrentThread->gap0[10];
  v26 = v8;
  result = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, v8, &P, &HandleInformation);
  v10 = (struct _FILE_OBJECT *)P;
  Irp = (PIRP)P;
  v35 = P;
  if ( result < 0 )
    return result;
  if ( v8 )
  {
    if ( (HandleInformation.GrantedAccess & 3) == 0 )
    {
      ObfDereferenceObject(P);
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
    v31 = Length->QuadPart;
    v12 = (struct _FILE_OBJECT *)v35;
    Irp = (PIRP)v35;
    v10 = (struct _FILE_OBJECT *)P;
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v31 = Length->QuadPart;
    v12 = (struct _FILE_OBJECT *)Irp;
  }
  if ( (v10->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v10->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v10);
  v14 = AttachedDevice;
  FastIoDispatch = (__int64)AttachedDevice->DriverObject->FastIoDispatch;
  if ( FastIoDispatch )
  {
    v16 = *(__int64 (__fastcall **)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *))(FastIoDispatch + 56);
    if ( v16 )
    {
      v33 = 0uLL;
      if ( (MmVerifierData & 0x10) != 0 )
        v17 = (void *)VfFastIoSnapState();
      else
        v17 = 0LL;
      v18 = v16(v10, &QuadPart, &v31, CurrentThread->ApcState.Process, Key, &v33, v14);
      if ( v17 )
        VfFastIoCheckState(v17, (ULONG_PTR)v16);
      if ( v18 )
      {
        *(_OWORD *)&IoStatusBlock->Status = v33;
        ObfDereferenceObject(v10);
        return v33;
      }
      v12 = (struct _FILE_OBJECT *)Irp;
      v8 = v26;
    }
  }
  if ( (v10->Flags & 2) != 0 )
  {
    if ( !IopAcquireFastLock((volatile __int32 *)&v10->Type) )
    {
      LODWORD(P) = IopAcquireFileObjectLock((char *)v10, v8, (v10->Flags & 4) != 0, v28);
      if ( v28[0] )
      {
        ObfDereferenceObject(v10);
        return (int)P;
      }
    }
    v27 = 1;
    P = 0LL;
  }
  else
  {
    Pool_0 = (struct _KEVENT *)IopVerifierExAllocatePool_0(FastIoDispatch, 0x18uLL);
    P = Pool_0;
    if ( !Pool_0 )
    {
      ObfDereferenceObject(v10);
      return -1073741670;
    }
    KeInitializeEvent(Pool_0, SynchronizationEvent, 0);
    v27 = 0;
  }
  if ( (v10->Flags & 0x4000000) == 0 )
    KeResetEvent(&v10->Event);
  v19 = (IRP *)IopAllocateIrpExReturn((__int64)v14, (unsigned __int8)v14->StackSize, 0LL, retaddr);
  Irp = v19;
  if ( !v19 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    IopAllocateIrpCleanup(v10, 0LL);
    return -1073741670;
  }
  v19->Tail.Overlay.OriginalFileObject = v10;
  v19->Tail.Overlay.Thread = CurrentThread;
  v19->RequestorMode = v8;
  if ( v27 )
  {
    v20 = IoStatusBlock;
    v21 = 0LL;
  }
  else
  {
    v19->Flags = 4;
    v20 = (PIO_STATUS_BLOCK)v37;
    v21 = (struct _KEVENT *)P;
  }
  v19->UserEvent = v21;
  v19->UserIosb = v20;
  v19->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v19->Tail.Overlay.CurrentStackLocation;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 529;
  CurrentStackLocation[-1].FileObject = v12;
  PoolWithQuota = (CHAR *)IopVerifierExAllocatePoolWithQuota();
  *(_QWORD *)PoolWithQuota = v31;
  v24 = Irp;
  Irp->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)PoolWithQuota;
  CurrentStackLocation[-1].Parameters.Create.Options = Key;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
  result = IopSynchronousServiceTail(v14, v24, v8, v27, 2);
  if ( !v27 )
    return IopSynchronousApiServiceTail((unsigned int)result, P, v24, v8, v37, IoStatusBlock);
  return result;
}

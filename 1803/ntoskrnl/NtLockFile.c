/*
 * XREFs of NtLockFile @ 0x1404E39A0
 * Callers:
 *     <none>
 * Callees:
 *     IopAcquireFastLock @ 0x140002094 (IopAcquireFastLock.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140002260 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IopSetLockOperationProcess @ 0x140068F80 (IopSetLockOperationProcess.c)
 *     IopReferenceFileObject @ 0x1400697A4 (IopReferenceFileObject.c)
 *     IoSetIoCompletionEx2 @ 0x1400863C0 (IoSetIoCompletionEx2.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x140816D04 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140816DDC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtLockFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock)
{
  struct _KTHREAD *CurrentThread; // r12
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS result; // eax
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  _BYTE *v17; // rax
  __int16 v18; // cx
  struct _IO_STATUS_BLOCK *Status; // rcx
  struct _FILE_OBJECT *v20; // rbx
  struct _KEVENT *v21; // r14
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v23; // r8
  PFAST_IO_DISPATCH FastIoDispatch; // rdx
  __int64 (__fastcall *FastIoLock)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT); // rdi
  void *v26; // r15
  char v27; // r12
  __int64 *CompletionContext; // rcx
  NTSTATUS v29; // eax
  ULONG Flags; // eax
  char v31; // r12
  __int64 Irp; // rax
  IRP *v33; // r15
  __int64 v34; // rdi
  char v35; // al
  CHAR *PoolWithQuota; // rax
  int v37; // eax
  int v38; // edx
  NTSTATUS v39; // edi
  int HandleInformation; // [rsp+28h] [rbp-A0h]
  _BYTE v41[8]; // [rsp+50h] [rbp-78h] BYREF
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  __int128 v43; // [rsp+60h] [rbp-68h] BYREF
  PRKEVENT Eventa; // [rsp+70h] [rbp-58h]
  LONGLONG QuadPart; // [rsp+78h] [rbp-50h] BYREF
  LONGLONG v46; // [rsp+80h] [rbp-48h] BYREF
  PVOID v47; // [rsp+88h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v48; // [rsp+90h] [rbp-38h] BYREF
  struct _KTHREAD *v49; // [rsp+98h] [rbp-30h]
  __int64 retaddr; // [rsp+C8h] [rbp+0h]

  Eventa = 0LL;
  CurrentThread = KeGetCurrentThread();
  v49 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v48);
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (v48.GrantedAccess & 3) == 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
      v15 = (__int64)IoStatusBlock;
      if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v15 = *(_DWORD *)v15;
      v16 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v16 )
      {
        v18 = *(_WORD *)(v16 + 8);
        if ( (v18 == 332 || v18 == 452) && (*((_DWORD *)Object + 20) & 2) == 0 )
        {
          ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
          Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
          IoStatusBlock = Status;
          Status->Status = Status->Status;
        }
      }
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      if ( ((unsigned __int8)Length & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v46 = Length->QuadPart;
      v17 = Object;
      if ( *((_QWORD *)Object + 22) && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741811;
      }
    }
    else
    {
      QuadPart = ByteOffset->QuadPart;
      v46 = Length->QuadPart;
      v17 = Object;
    }
    v17[72] = 1;
    v20 = (struct _FILE_OBJECT *)Object;
    result = IopSetLockOperationProcess((__int64)Object, (__int64)KeGetCurrentThread()->ApcState.Process, 0, v14);
    if ( result >= 0 )
    {
      if ( Event )
      {
        v29 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v47, 0LL);
        v21 = (struct _KEVENT *)v47;
        Eventa = (PRKEVENT)v47;
        if ( v29 >= 0 )
          KeResetEvent((PRKEVENT)v47);
      }
      else
      {
        v21 = Eventa;
      }
      RelatedDeviceObject = IoGetRelatedDeviceObject(v20);
      FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoLock = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoLock;
        if ( FastIoLock )
        {
          v43 = 0uLL;
          if ( (MmVerifierData & 0x10) != 0 )
            v26 = (void *)VfFastIoSnapState();
          else
            v26 = 0LL;
          LOBYTE(HandleInformation) = FailImmediately;
          v27 = FastIoLock(
                  v20,
                  &QuadPart,
                  &v46,
                  CurrentThread->ApcState.Process,
                  Key,
                  HandleInformation,
                  ExclusiveLock,
                  &v43,
                  RelatedDeviceObject);
          if ( v26 )
            VfFastIoCheckState(v26, (ULONG_PTR)FastIoLock);
          if ( v27 )
          {
            if ( ((unsigned __int8)ApcRoutine & 1) != 0 )
            {
              HIDWORD(IoStatusBlock->Pointer) = DWORD2(v43);
              IoStatusBlock->Status = v43;
            }
            else
            {
              *(_OWORD *)&IoStatusBlock->Status = v43;
            }
            if ( v21 )
            {
              if ( (v20->Flags & 0x8000000) == 0 )
                KeSetEvent(v21, 0, 0);
              ObfDereferenceObject(v21);
            }
            CompletionContext = (__int64 *)v20->CompletionContext;
            if ( CompletionContext && ApcContext && (v20->Flags & 0x2000000) == 0 )
            {
              v37 = IoSetIoCompletionEx2(
                      *CompletionContext,
                      CompletionContext[1],
                      (__int64)ApcContext,
                      v43,
                      *((__int64 *)&v43 + 1),
                      1u,
                      0LL,
                      0);
              v38 = v43;
              if ( v37 < 0 )
                v38 = -1073741670;
              LODWORD(v43) = v38;
            }
            ObfDereferenceObject(v20);
            return v43;
          }
        }
      }
      Flags = v20->Flags;
      if ( (Flags & 2) != 0 )
      {
        if ( !IopAcquireFastLock((volatile __int32 *)&v20->Type) )
        {
          v39 = IopAcquireFileObjectLock((char *)v20, PreviousMode, (v20->Flags & 4) != 0, v41);
          if ( v41[0] )
          {
            if ( v21 )
              ObfDereferenceObject(v21);
            ObfDereferenceObject(v20);
            return v39;
          }
        }
        v31 = 1;
        Flags = v20->Flags;
      }
      else
      {
        v31 = 0;
      }
      if ( (Flags & 0x4000000) == 0 )
        KeResetEvent(&v20->Event);
      LOBYTE(v23) = v31 == 0;
      Irp = IopAllocateIrpExReturn(
              (__int64)RelatedDeviceObject,
              (unsigned __int8)RelatedDeviceObject->StackSize,
              v23,
              retaddr);
      v33 = (IRP *)Irp;
      v47 = (PVOID)Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v20;
        *(_QWORD *)(Irp + 152) = v49;
        *(_BYTE *)(Irp + 64) = PreviousMode;
        *(_QWORD *)(Irp + 80) = v21;
        *(_QWORD *)(Irp + 72) = IoStatusBlock;
        *(_QWORD *)(Irp + 88) = ApcRoutine;
        *(_QWORD *)(Irp + 96) = ApcContext;
        v34 = *(_QWORD *)(Irp + 184);
        *(_WORD *)(v34 - 72) = 273;
        *(_QWORD *)(v34 - 24) = v20;
        *(_BYTE *)(v34 - 70) = 0;
        v35 = 0;
        if ( FailImmediately )
        {
          *(_BYTE *)(v34 - 70) = 1;
          v35 = 1;
        }
        if ( ExclusiveLock )
          *(_BYTE *)(v34 - 70) = v35 | 2;
        *(_DWORD *)(v34 - 56) = Key;
        *(_QWORD *)(v34 - 48) = QuadPart;
        PoolWithQuota = (CHAR *)IopVerifierExAllocatePoolWithQuota();
        *(_QWORD *)PoolWithQuota = v46;
        v33->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota;
        *(_QWORD *)(v34 - 64) = PoolWithQuota;
        return IopSynchronousServiceTail(RelatedDeviceObject, v33, PreviousMode, v31, 2);
      }
      else
      {
        IopAllocateIrpCleanup(v20, v21);
        return -1073741670;
      }
    }
  }
  return result;
}

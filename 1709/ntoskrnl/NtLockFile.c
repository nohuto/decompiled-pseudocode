/*
 * XREFs of NtLockFile @ 0x1404924A0
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopAcquireFastLock_0 @ 0x140024220 (IopAcquireFastLock_0.c)
 *     IopSetLockOperationProcess @ 0x140024D28 (IopSetLockOperationProcess.c)
 *     IopReferenceFileObject @ 0x140024E54 (IopReferenceFileObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     IoSetIoCompletionEx2 @ 0x1400759E0 (IoSetIoCompletionEx2.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x14015B9D4 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1407A9C74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407A9D54 (VfFastIoSnapState.c)
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
  PFAST_IO_DISPATCH FastIoDispatch; // rdx
  __int64 (__fastcall *FastIoLock)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT); // rdi
  void *v25; // r15
  char v26; // r12
  __int64 *CompletionContext; // rcx
  char v28; // r12
  __int64 Irp; // rax
  IRP *v30; // r15
  __int64 v31; // rdi
  CHAR *PoolWithQuota_2; // rax
  NTSTATUS v33; // eax
  int v34; // eax
  int v35; // edx
  NTSTATUS v36; // edi
  int HandleInformation; // [rsp+28h] [rbp-A0h]
  char v38; // [rsp+50h] [rbp-78h]
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  __int128 v40; // [rsp+60h] [rbp-68h] BYREF
  PRKEVENT Eventa; // [rsp+70h] [rbp-58h]
  LONGLONG QuadPart; // [rsp+78h] [rbp-50h] BYREF
  LONGLONG v43; // [rsp+80h] [rbp-48h] BYREF
  PVOID v44; // [rsp+88h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v45; // [rsp+90h] [rbp-38h] BYREF
  struct _KTHREAD *v46; // [rsp+98h] [rbp-30h]

  Eventa = 0LL;
  CurrentThread = KeGetCurrentThread();
  v46 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v45);
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (v45.GrantedAccess & 3) == 0 )
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
      v43 = Length->QuadPart;
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
      v43 = Length->QuadPart;
      v17 = Object;
    }
    v17[72] = 1;
    v20 = (struct _FILE_OBJECT *)Object;
    result = IopSetLockOperationProcess((__int64)Object, (__int64)KeGetCurrentThread()->ApcState.Process, 0, v14);
    if ( result >= 0 )
    {
      if ( Event )
      {
        v33 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v44, 0LL);
        v21 = (struct _KEVENT *)v44;
        Eventa = (PRKEVENT)v44;
        if ( v33 >= 0 )
          KeResetEvent((PRKEVENT)v44);
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
          v40 = 0uLL;
          if ( (MmVerifierData & 0x10) != 0 )
            v25 = (void *)VfFastIoSnapState();
          else
            v25 = 0LL;
          LOBYTE(HandleInformation) = FailImmediately;
          v26 = FastIoLock(
                  v20,
                  &QuadPart,
                  &v43,
                  CurrentThread->ApcState.Process,
                  Key,
                  HandleInformation,
                  ExclusiveLock,
                  &v40,
                  RelatedDeviceObject);
          if ( v25 )
            VfFastIoCheckState(v25, (ULONG_PTR)FastIoLock);
          if ( v26 )
          {
            if ( ((unsigned __int8)ApcRoutine & 1) != 0 )
            {
              HIDWORD(IoStatusBlock->Pointer) = DWORD2(v40);
              IoStatusBlock->Status = v40;
            }
            else
            {
              *(_OWORD *)&IoStatusBlock->Status = v40;
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
              v34 = IoSetIoCompletionEx2(
                      *CompletionContext,
                      CompletionContext[1],
                      (__int64)ApcContext,
                      v40,
                      *((__int64 *)&v40 + 1),
                      1u,
                      0LL,
                      0);
              v35 = v40;
              if ( v34 < 0 )
                v35 = -1073741670;
              LODWORD(v40) = v35;
            }
            ObfDereferenceObject(v20);
            return v40;
          }
        }
      }
      if ( (v20->Flags & 2) != 0 )
      {
        if ( !IopAcquireFastLock_0((volatile __int32 *)&v20->Type) )
        {
          v36 = IopAcquireFileObjectLock(v20);
          if ( v38 )
          {
            if ( v21 )
              ObfDereferenceObject(v21);
            ObfDereferenceObject(v20);
            return v36;
          }
        }
        v28 = 1;
      }
      else
      {
        v28 = 0;
      }
      if ( (v20->Flags & 0x4000000) == 0 )
        KeResetEvent(&v20->Event);
      Irp = IopAllocateIrpExReturn();
      v30 = (IRP *)Irp;
      v44 = (PVOID)Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v20;
        *(_QWORD *)(Irp + 152) = v46;
        *(_BYTE *)(Irp + 64) = PreviousMode;
        *(_QWORD *)(Irp + 80) = v21;
        *(_QWORD *)(Irp + 72) = IoStatusBlock;
        *(_QWORD *)(Irp + 88) = ApcRoutine;
        *(_QWORD *)(Irp + 96) = ApcContext;
        v31 = *(_QWORD *)(Irp + 184);
        *(_WORD *)(v31 - 72) = 273;
        *(_QWORD *)(v31 - 24) = v20;
        *(_BYTE *)(v31 - 70) = 0;
        if ( FailImmediately )
          *(_BYTE *)(v31 - 70) = 1;
        if ( ExclusiveLock )
          *(_BYTE *)(v31 - 70) |= 2u;
        *(_DWORD *)(v31 - 56) = Key;
        *(_QWORD *)(v31 - 48) = QuadPart;
        PoolWithQuota_2 = (CHAR *)IopVerifierExAllocatePoolWithQuota_2();
        *(_QWORD *)PoolWithQuota_2 = v43;
        v30->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_2;
        *(_QWORD *)(v31 - 64) = PoolWithQuota_2;
        return IopSynchronousServiceTail(RelatedDeviceObject, v30, PreviousMode, v28, 2);
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

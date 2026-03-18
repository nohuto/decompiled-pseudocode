/*
 * XREFs of NtLockFile @ 0x14048B220
 * Callers:
 *     <none>
 * Callees:
 *     IopAcquireFastLock @ 0x140022E54 (IopAcquireFastLock.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     IopSetLockOperationProcess @ 0x14004F2B0 (IopSetLockOperationProcess.c)
 *     IopReferenceFileObject @ 0x14004F3DC (IopReferenceFileObject.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     IoSetIoCompletionEx2 @ 0x1400E2780 (IoSetIoCompletionEx2.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x14014B3F4 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x14076804C (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140768104 (VfFastIoSnapState.c)
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
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  _BYTE *v16; // rax
  __int16 v17; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  struct _FILE_OBJECT *v19; // rdi
  struct _KEVENT *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // r12
  __int64 (__fastcall *FastIoLock)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT); // r12
  void *v26; // r14
  char v27; // al
  __int64 *CompletionContext; // rcx
  NTSTATUS v29; // eax
  char v30; // r12
  __int64 Irp; // rax
  IRP *v32; // r14
  __int64 v33; // rsi
  CHAR *PoolWithQuota_2; // rax
  int v35; // eax
  int v36; // edx
  NTSTATUS v37; // r14d
  int HandleInformation; // [rsp+28h] [rbp-A0h]
  char v39; // [rsp+50h] [rbp-78h]
  char v40; // [rsp+51h] [rbp-77h]
  char v41; // [rsp+52h] [rbp-76h]
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  __int128 v43; // [rsp+60h] [rbp-68h] BYREF
  PRKEVENT Eventa; // [rsp+70h] [rbp-58h]
  LONGLONG QuadPart; // [rsp+78h] [rbp-50h] BYREF
  LONGLONG v46; // [rsp+80h] [rbp-48h] BYREF
  PVOID v47; // [rsp+88h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-38h]
  struct _OBJECT_HANDLE_INFORMATION v49; // [rsp+98h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+C8h] [rbp+0h]

  Eventa = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v39 = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v49);
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (v49.GrantedAccess & 3) == 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
      v14 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
        v14 = (__int64)IoStatusBlock;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      v15 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v15 )
      {
        v17 = *(_WORD *)(v15 + 8);
        if ( (v17 == 332 || v17 == 452) && (*((_DWORD *)Object + 20) & 2) == 0 )
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
      v16 = Object;
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
      v16 = Object;
    }
    v16[72] = 1;
    v19 = (struct _FILE_OBJECT *)Object;
    result = IopSetLockOperationProcess((__int64)Object, (__int64)KeGetCurrentThread()->ApcState.Process, 0, v13);
    if ( result >= 0 )
    {
      if ( Event )
      {
        v29 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v47, 0LL);
        v20 = (struct _KEVENT *)v47;
        Eventa = (PRKEVENT)v47;
        if ( v29 >= 0 )
          KeResetEvent((PRKEVENT)v47);
      }
      else
      {
        v20 = Eventa;
      }
      RelatedDeviceObject = IoGetRelatedDeviceObject(v19);
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
                  v19,
                  &QuadPart,
                  &v46,
                  CurrentThread->ApcState.Process,
                  Key,
                  HandleInformation,
                  ExclusiveLock,
                  &v43,
                  RelatedDeviceObject);
          v40 = v27;
          if ( v26 )
          {
            VfFastIoCheckState(v26);
            v27 = v40;
          }
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
            if ( v20 )
            {
              if ( (v19->Flags & 0x8000000) == 0 )
                KeSetEvent(v20, 0, 0);
              ObfDereferenceObject(v20);
            }
            CompletionContext = (__int64 *)v19->CompletionContext;
            if ( CompletionContext && ApcContext && (v19->Flags & 0x2000000) == 0 )
            {
              v35 = IoSetIoCompletionEx2(
                      *CompletionContext,
                      CompletionContext[1],
                      (__int64)ApcContext,
                      v43,
                      *((__int64 *)&v43 + 1),
                      1u,
                      0LL,
                      0);
              v36 = v43;
              if ( v35 < 0 )
                v36 = -1073741670;
              LODWORD(v43) = v36;
            }
            ObfDereferenceObject(v19);
            return v43;
          }
        }
      }
      if ( (v19->Flags & 2) != 0 )
      {
        if ( !IopAcquireFastLock((volatile __int32 *)&v19->Type) )
        {
          v37 = IopAcquireFileObjectLock(v19);
          if ( v41 )
          {
            if ( v20 )
              ObfDereferenceObject(v20);
            ObfDereferenceObject(v19);
            return v37;
          }
        }
        v30 = 1;
      }
      else
      {
        v30 = 0;
      }
      if ( (v19->Flags & 0x4000000) == 0 )
        KeResetEvent(&v19->Event);
      LOBYTE(v22) = v30 == 0;
      LOBYTE(v21) = RelatedDeviceObject->StackSize;
      Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v21, v22, retaddr);
      v32 = (IRP *)Irp;
      v47 = (PVOID)Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v19;
        *(_QWORD *)(Irp + 152) = CurrentThread;
        *(_BYTE *)(Irp + 64) = v39;
        *(_QWORD *)(Irp + 80) = v20;
        *(_QWORD *)(Irp + 72) = IoStatusBlock;
        *(_QWORD *)(Irp + 88) = ApcRoutine;
        *(_QWORD *)(Irp + 96) = ApcContext;
        v33 = *(_QWORD *)(Irp + 184);
        *(_WORD *)(v33 - 72) = 273;
        *(_QWORD *)(v33 - 24) = v19;
        *(_BYTE *)(v33 - 70) = 0;
        *(_BYTE *)(v33 - 70) = FailImmediately != 0;
        if ( ExclusiveLock )
          *(_BYTE *)(v33 - 70) |= 2u;
        *(_DWORD *)(v33 - 56) = Key;
        *(_QWORD *)(v33 - 48) = QuadPart;
        PoolWithQuota_2 = (CHAR *)IopVerifierExAllocatePoolWithQuota_2();
        *(_QWORD *)PoolWithQuota_2 = v46;
        v32->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_2;
        *(_QWORD *)(v33 - 64) = PoolWithQuota_2;
        return IopSynchronousServiceTail(RelatedDeviceObject, v32, v39, v30, 2);
      }
      else
      {
        IopAllocateIrpCleanup(v19, v20);
        return -1073741670;
      }
    }
  }
  return result;
}

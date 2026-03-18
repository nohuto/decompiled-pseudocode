/*
 * XREFs of FsRtlPrivateLock @ 0x140068C80
 * Callers:
 *     FsRtlProcessFileLock @ 0x140001EC0 (FsRtlProcessFileLock.c)
 * Callees:
 *     FsRtlCompleteLockIrpReal @ 0x140001FE8 (FsRtlCompleteLockIrpReal.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlPrivateInsertLock @ 0x140069804 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1400699C4 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     KeReleaseSpinLock @ 0x1400A39B0 (KeReleaseSpinLock.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1400BA854 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1400CE7E0 (FsRtlPrivateInitializeFileLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1402250D0 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlPrivateRemoveLock @ 0x1402251F0 (FsRtlPrivateRemoveLock.c)
 */

BOOLEAN __stdcall FsRtlPrivateLock(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        PLARGE_INTEGER Length,
        PEPROCESS ProcessId,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock,
        PIO_STATUS_BLOCK Iosb,
        PIRP Irp,
        PVOID Context,
        BOOLEAN AlreadySynchronized)
{
  PFILE_OBJECT v14; // r12
  KSPIN_LOCK *v16; // rsi
  char *LockInformation; // r15
  LONGLONG QuadPart; // r8
  char *v19; // rcx
  char v20; // al
  PIO_STATUS_BLOCK v21; // rbx
  BOOLEAN v22; // r14
  _QWORD *v23; // rax
  __int64 v25; // r8
  NTSTATUS v26; // edi
  char v27; // [rsp+68h] [rbp-78h]
  KIRQL NewIrql; // [rsp+69h] [rbp-77h]
  NTSTATUS v29; // [rsp+6Ch] [rbp-74h] BYREF
  char *v30; // [rsp+70h] [rbp-70h]
  KSPIN_LOCK *v31; // [rsp+78h] [rbp-68h]
  _QWORD v32[2]; // [rsp+80h] [rbp-60h] BYREF
  BOOLEAN v33; // [rsp+90h] [rbp-50h]
  ULONG v34; // [rsp+94h] [rbp-4Ch]
  PFILE_OBJECT v35; // [rsp+98h] [rbp-48h]
  PEPROCESS v36; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v37; // [rsp+A8h] [rbp-38h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+B0h] [rbp-30h]

  v14 = FileObject;
  v27 = 0;
  v30 = 0LL;
  v16 = 0LL;
  v31 = 0LL;
  NewIrql = -1;
  LockInformation = (char *)FileLock->LockInformation;
  v30 = LockInformation;
  if ( !LockInformation )
  {
    LOBYTE(FileObject) = Irp == 0LL;
    if ( !(unsigned __int8)FsRtlPrivateInitializeFileLock(FileLock, FileObject) )
      goto LABEL_14;
    FileLock->FastIoIsQuestionable = 1;
    LockInformation = (char *)FileLock->LockInformation;
    v30 = LockInformation;
  }
  v32[0] = FileOffset->QuadPart;
  QuadPart = Length->QuadPart;
  v32[1] = QuadPart;
  v37 = QuadPart + v32[0] - 1LL;
  v34 = Key;
  v35 = v14;
  v36 = ProcessId;
  v33 = ExclusiveLock;
  v16 = (KSPIN_LOCK *)(LockInformation + 24);
  v31 = (KSPIN_LOCK *)(LockInformation + 24);
  if ( v37 < v32[0] && QuadPart )
  {
    v21 = Iosb;
    Iosb->Status = -1073741407;
    goto LABEL_10;
  }
  v27 = 1;
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)LockInformation + 3);
  v19 = LockInformation + 24;
  if ( ExclusiveLock )
    v20 = FsRtlPrivateCheckForExclusiveLockAccess(v19, v32);
  else
    v20 = FsRtlPrivateCheckForSharedLockAccess(v19, v32);
  if ( v20 )
  {
    if ( (unsigned __int8)FsRtlPrivateInsertLock(LockInformation, v14, v32) )
    {
      v21 = Iosb;
      Iosb->Status = 0;
LABEL_10:
      v22 = 1;
      goto LABEL_29;
    }
    if ( Irp )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3, NewIrql);
      RtlRaiseStatus(-1073741670);
    }
  }
  else
  {
    if ( FailImmediately )
    {
      v21 = Iosb;
      Iosb->Status = -1073741739;
      goto LABEL_10;
    }
    if ( Irp )
    {
      v23 = ExAllocateFromNPagedLookasideList(&FsRtlWaitingLockLookasideList);
      if ( !v23 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3, NewIrql);
        RtlRaiseStatus(-1073741670);
      }
      v23[3] = Irp;
      v23[2] = Context;
      v23[1] = *((_QWORD *)LockInformation + 1);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation->Control |= 1u;
      *v23 = 0LL;
      if ( *((_QWORD *)LockInformation + 6) )
        **((_QWORD **)LockInformation + 7) = v23;
      else
        *((_QWORD *)LockInformation + 6) = v23;
      *((_QWORD *)LockInformation + 7) = v23;
      Irp->IoStatus.Information = (ULONG_PTR)LockInformation;
      _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)FsRtlPrivateCancelFileLockIrp);
      if ( Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
      {
        Irp->CancelIrql = NewIrql;
        FsRtlPrivateCancelFileLockIrp(0LL, Irp);
        v27 = 0;
      }
      v21 = Iosb;
      Iosb->Status = 259;
      LockInformation = v30;
      v16 = v31;
      goto LABEL_10;
    }
  }
LABEL_14:
  v22 = 0;
  v21 = Iosb;
LABEL_29:
  if ( v27 )
  {
    KxReleaseSpinLock(v16);
    __writecr8(NewIrql);
  }
  if ( Irp && v21->Status != 259 )
  {
    ObfReferenceObjectWithTag(v14, 0x746C6644u);
    FsRtlCompleteLockIrpReal(
      *((__int64 (__fastcall **)(__int64, IRP *))LockInformation + 1),
      (__int64)Context,
      Irp,
      v21->Status,
      &v29,
      (__int64)v14);
    v26 = v29;
    if ( v29 < 0 && v21->Status >= 0 )
    {
      LOBYTE(v25) = 1;
      FsRtlPrivateRemoveLock(LockInformation, v32, v25);
    }
    ObfDereferenceObjectWithTag(v14, 0x746C6644u);
    v21->Status = v26;
  }
  return v22;
}

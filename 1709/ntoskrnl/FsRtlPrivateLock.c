/*
 * XREFs of FsRtlPrivateLock @ 0x140105960
 * Callers:
 *     FsRtlProcessFileLock @ 0x1401576D0 (FsRtlProcessFileLock.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14001509C (ExAllocateFromNPagedLookasideList.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KeReleaseSpinLock @ 0x1400E2730 (KeReleaseSpinLock.c)
 *     FsRtlPrivateInsertLock @ 0x140105C80 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140105D68 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x140106B44 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140106D40 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlCompleteLockIrpReal @ 0x1401577FC (FsRtlCompleteLockIrpReal.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401E77B0 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlPrivateRemoveLock @ 0x1401E78D0 (FsRtlPrivateRemoveLock.c)
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
  KSPIN_LOCK *v15; // rsi
  KIRQL CurrentIrql; // r12
  KSPIN_LOCK *LockInformation; // r15
  LONGLONG QuadPart; // rcx
  PFILE_OBJECT v19; // r13
  char *v20; // rcx
  char v21; // al
  PIO_STATUS_BLOCK v22; // rbx
  BOOLEAN v23; // r14
  _QWORD *v24; // rax
  __int64 v26; // r8
  NTSTATUS v27; // edi
  char v28; // [rsp+68h] [rbp-78h]
  int v29; // [rsp+6Ch] [rbp-74h] BYREF
  KSPIN_LOCK *v30; // [rsp+70h] [rbp-70h]
  KSPIN_LOCK *v31; // [rsp+78h] [rbp-68h]
  _QWORD v32[2]; // [rsp+80h] [rbp-60h] BYREF
  BOOLEAN v33; // [rsp+90h] [rbp-50h]
  ULONG v34; // [rsp+94h] [rbp-4Ch]
  PFILE_OBJECT v35; // [rsp+98h] [rbp-48h]
  PEPROCESS v36; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v37; // [rsp+A8h] [rbp-38h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+B0h] [rbp-30h]
  PFILE_OBJECT Object; // [rsp+F0h] [rbp+10h]

  Object = FileObject;
  v28 = 0;
  v30 = 0LL;
  v15 = 0LL;
  v31 = 0LL;
  CurrentIrql = -1;
  LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
  v30 = LockInformation;
  if ( !LockInformation )
  {
    LOBYTE(FileObject) = Irp == 0LL;
    if ( !(unsigned __int8)FsRtlPrivateInitializeFileLock(FileLock, FileObject) )
    {
      v23 = 0;
      v22 = Iosb;
      v19 = Object;
      goto LABEL_30;
    }
    FileLock->FastIoIsQuestionable = 1;
    LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
    v30 = LockInformation;
  }
  v32[0] = FileOffset->QuadPart;
  QuadPart = Length->QuadPart;
  v32[1] = QuadPart;
  v37 = QuadPart + v32[0] - 1LL;
  v34 = Key;
  v19 = Object;
  v35 = Object;
  v36 = ProcessId;
  v33 = ExclusiveLock;
  v15 = LockInformation + 3;
  v31 = LockInformation + 3;
  if ( v37 < v32[0] && QuadPart )
  {
    v22 = Iosb;
    Iosb->Status = -1073741407;
    goto LABEL_10;
  }
  v28 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock(LockInformation + 3);
  v20 = (char *)(LockInformation + 3);
  if ( ExclusiveLock )
    v21 = FsRtlPrivateCheckForExclusiveLockAccess(v20, v32);
  else
    v21 = FsRtlPrivateCheckForSharedLockAccess(v20, v32);
  if ( v21 )
  {
    if ( (unsigned __int8)FsRtlPrivateInsertLock(LockInformation, Object, v32) )
    {
      v22 = Iosb;
      Iosb->Status = 0;
LABEL_10:
      v23 = 1;
      goto LABEL_30;
    }
    if ( Irp )
    {
      KeReleaseSpinLock(LockInformation + 3, CurrentIrql);
      RtlRaiseStatus(-1073741670);
    }
  }
  else
  {
    if ( FailImmediately )
    {
      v22 = Iosb;
      Iosb->Status = -1073741739;
      goto LABEL_10;
    }
    if ( Irp )
    {
      v24 = ExAllocateFromNPagedLookasideList(&FsRtlWaitingLockLookasideList);
      if ( !v24 )
      {
        KeReleaseSpinLock(LockInformation + 3, CurrentIrql);
        RtlRaiseStatus(-1073741670);
      }
      v24[3] = Irp;
      v24[2] = Context;
      v24[1] = LockInformation[1];
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation->Control |= 1u;
      *v24 = 0LL;
      if ( LockInformation[6] )
        *(_QWORD *)LockInformation[7] = v24;
      else
        LockInformation[6] = (KSPIN_LOCK)v24;
      LockInformation[7] = (KSPIN_LOCK)v24;
      Irp->IoStatus.Information = (ULONG_PTR)LockInformation;
      _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)FsRtlPrivateCancelFileLockIrp);
      if ( Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
      {
        Irp->CancelIrql = CurrentIrql;
        FsRtlPrivateCancelFileLockIrp(0LL, Irp);
        v28 = 0;
      }
      v22 = Iosb;
      Iosb->Status = 259;
      LockInformation = v30;
      v15 = v31;
      goto LABEL_10;
    }
  }
  v23 = 0;
  v22 = Iosb;
LABEL_30:
  if ( v28 )
  {
    KxReleaseSpinLock(v15);
    __writecr8(CurrentIrql);
  }
  if ( Irp && v22->Status != 259 )
  {
    ObfReferenceObjectWithTag(v19, 0x746C6644u);
    FsRtlCompleteLockIrpReal(LockInformation[1], Context, Irp, (unsigned int)v22->Status, &v29, v19);
    v27 = v29;
    if ( v29 < 0 && v22->Status >= 0 )
    {
      LOBYTE(v26) = 1;
      FsRtlPrivateRemoveLock(LockInformation, v32, v26);
    }
    ObfDereferenceObjectWithTag(v19, 0x746C6644u);
    v22->Status = v27;
  }
  return v23;
}

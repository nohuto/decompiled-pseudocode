/*
 * XREFs of FsRtlProcessFileLock @ 0x14014A0C0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlPrivateFastUnlockAll @ 0x14000C934 (FsRtlPrivateFastUnlockAll.c)
 *     IoGetRequestorProcess @ 0x14004D4E0 (IoGetRequestorProcess.c)
 *     FsRtlFastUnlockSingle @ 0x14004F070 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateLock @ 0x14004F440 (FsRtlPrivateLock.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     FsRtlCompleteLockIrpReal @ 0x14014A1E8 (FsRtlCompleteLockIrpReal.c)
 */

NTSTATUS __stdcall FsRtlProcessFileLock(PFILE_LOCK FileLock, PIRP Irp, PVOID Context)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  BOOLEAN FailImmediately; // di
  BOOLEAN ExclusiveLock; // bl
  struct _KPROCESS *ProcessId; // rax
  struct _KPROCESS *RequestorProcess; // rax
  unsigned int v12; // eax
  PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine; // rcx
  struct _KPROCESS *v14; // rax
  struct _KPROCESS *v15; // rax
  struct _IO_STATUS_BLOCK Iosb; // [rsp+60h] [rbp-10h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+A8h] [rbp+38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Iosb.Information = 0LL;
  if ( CurrentStackLocation->MinorFunction == 1 )
  {
    FailImmediately = CurrentStackLocation->Flags & 1;
    ExclusiveLock = (CurrentStackLocation->Flags & 2) != 0;
    FileOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
    ProcessId = IoGetRequestorProcess(Irp);
    FsRtlPrivateLock(
      FileLock,
      CurrentStackLocation->FileObject,
      &FileOffset,
      CurrentStackLocation->Parameters.LockControl.Length,
      ProcessId,
      CurrentStackLocation->Parameters.Create.Options,
      FailImmediately,
      ExclusiveLock,
      &Iosb,
      Irp,
      Context,
      0);
  }
  else
  {
    switch ( CurrentStackLocation->MinorFunction )
    {
      case 2u:
        FileOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
        RequestorProcess = IoGetRequestorProcess(Irp);
        v12 = FsRtlFastUnlockSingle(
                FileLock,
                CurrentStackLocation->FileObject,
                &FileOffset,
                CurrentStackLocation->Parameters.LockControl.Length,
                RequestorProcess,
                CurrentStackLocation->Parameters.Create.Options,
                Context,
                0);
        break;
      case 3u:
        v15 = IoGetRequestorProcess(Irp);
        v12 = FsRtlPrivateFastUnlockAll(
                (__int64)FileLock,
                (_RTL_SPLAY_LINKS *)CurrentStackLocation->FileObject,
                v15,
                0,
                0,
                (__int64)Context);
        break;
      case 4u:
        v14 = IoGetRequestorProcess(Irp);
        v12 = FsRtlPrivateFastUnlockAll(
                (__int64)FileLock,
                (_RTL_SPLAY_LINKS *)CurrentStackLocation->FileObject,
                v14,
                CurrentStackLocation->Parameters.Create.Options,
                1,
                (__int64)Context);
        break;
      default:
        Irp->IoStatus.Status = -1073741808;
        IofCompleteRequest(Irp, 1);
        Iosb.Status = -1073741808;
        return Iosb.Status;
    }
    CompleteLockIrpRoutine = FileLock->CompleteLockIrpRoutine;
    Iosb.Status = v12;
    FsRtlCompleteLockIrpReal(CompleteLockIrpRoutine, Context, Irp, v12, &Iosb, 0LL);
  }
  return Iosb.Status;
}

/*
 * XREFs of IoGetRequestorProcess @ 0x14004D4E0
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x14000C934 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14000CC5C (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlCheckLockForReadAccess @ 0x14002ACA0 (FsRtlCheckLockForReadAccess.c)
 *     FsRtlCheckLockForWriteAccess @ 0x14002F160 (FsRtlCheckLockForWriteAccess.c)
 *     IoGetRequestorProcessId @ 0x14003C9A0 (IoGetRequestorProcessId.c)
 *     IoIs32bitProcess @ 0x14004D440 (IoIs32bitProcess.c)
 *     FsRtlProcessFileLock @ 0x14014A0C0 (FsRtlProcessFileLock.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoGetRequestorProcess(PIRP Irp)
{
  PETHREAD Thread; // rdx
  CCHAR ApcEnvironment; // al

  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) != 0 )
    return (PEPROCESS)(Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL);
  if ( !Thread )
    return 0LL;
  ApcEnvironment = Irp->ApcEnvironment;
  if ( !ApcEnvironment )
    return Thread->Process;
  if ( ApcEnvironment == 1 )
    return Thread->ApcState.Process;
  else
    return 0LL;
}

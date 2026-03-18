/*
 * XREFs of IoGetRequestorProcess @ 0x140109620
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x1401053A4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140106C24 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlCheckLockForReadAccess @ 0x140109300 (FsRtlCheckLockForReadAccess.c)
 *     FsRtlCheckLockForWriteAccess @ 0x140109480 (FsRtlCheckLockForWriteAccess.c)
 *     FsRtlProcessFileLock @ 0x1401576D0 (FsRtlProcessFileLock.c)
 *     IoGetRequestorProcessId @ 0x1401F94E0 (IoGetRequestorProcessId.c)
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

/*
 * XREFs of IoGetRequestorProcess @ 0x1400AA380
 * Callers:
 *     FsRtlProcessFileLock @ 0x140001EC0 (FsRtlProcessFileLock.c)
 *     FsRtlCheckLockForWriteAccess @ 0x1400AA050 (FsRtlCheckLockForWriteAccess.c)
 *     FsRtlCheckLockForReadAccess @ 0x1400AA200 (FsRtlCheckLockForReadAccess.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1400B0904 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400B0C34 (FsRtlPrivateCheckWaitingLocks.c)
 *     IoGetRequestorProcessId @ 0x140187250 (IoGetRequestorProcessId.c)
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

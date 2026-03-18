/*
 * XREFs of FsRtlAllocateFileLock @ 0x14003A260
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x14003F4BC (ExAllocateFromPagedLookasideList.c)
 */

PFILE_LOCK __stdcall FsRtlAllocateFileLock(
        PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine,
        PUNLOCK_ROUTINE UnlockRoutine)
{
  PFILE_LOCK result; // rax

  result = (PFILE_LOCK)ExAllocateFromPagedLookasideList(&FsRtlFileLockLookasideList);
  if ( result )
  {
    result->LockInformation = 0LL;
    result->CompleteLockIrpRoutine = CompleteLockIrpRoutine;
    result->UnlockRoutine = UnlockRoutine;
    result->FastIoIsQuestionable = 0;
    result->LockRequestsInProgress = 0;
  }
  return result;
}

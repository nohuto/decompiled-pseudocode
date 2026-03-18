/*
 * XREFs of FsRtlAllocateFileLock @ 0x1400D05D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 */

PFILE_LOCK __stdcall FsRtlAllocateFileLock(
        PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine,
        PUNLOCK_ROUTINE UnlockRoutine)
{
  PFILE_LOCK result; // rax

  result = (PFILE_LOCK)ExAllocateFromNPagedLookasideList(&FsRtlFileLockLookasideList);
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

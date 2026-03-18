/*
 * XREFs of FsRtlFreeFileLock @ 0x14000EBD0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     FsRtlUninitializeFileLock @ 0x14012FC00 (FsRtlUninitializeFileLock.c)
 */

void __stdcall FsRtlFreeFileLock(PFILE_LOCK FileLock)
{
  FsRtlUninitializeFileLock(FileLock);
  ExFreeToNPagedLookasideList(&FsRtlFileLockLookasideList, FileLock);
}

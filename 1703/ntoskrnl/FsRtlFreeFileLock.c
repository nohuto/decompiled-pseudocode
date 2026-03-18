/*
 * XREFs of FsRtlFreeFileLock @ 0x14003B1A0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlUninitializeFileLock @ 0x14003B1D0 (FsRtlUninitializeFileLock.c)
 */

void __stdcall FsRtlFreeFileLock(PFILE_LOCK FileLock)
{
  FsRtlUninitializeFileLock(FileLock);
  ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlFileLockLookasideList, FileLock);
}

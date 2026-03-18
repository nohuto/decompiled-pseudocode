/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x1404C1530
 * Callers:
 *     CcZeroEndOfLastPage @ 0x14005BC54 (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x1400DE8B0 (CcWriteBehindInternal.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x1404C1720 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject);
}

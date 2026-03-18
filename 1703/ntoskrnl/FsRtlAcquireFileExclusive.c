/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x140510150
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140096990 (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x1400AACD0 (CcWriteBehindInternal.c)
 *     CcClearPrivateWriteFile @ 0x1401DDE20 (CcClearPrivateWriteFile.c)
 *     CcSetPrivateWriteFile @ 0x1401DE2BC (CcSetPrivateWriteFile.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject);
}

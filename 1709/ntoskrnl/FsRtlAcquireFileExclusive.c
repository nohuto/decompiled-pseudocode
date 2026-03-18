/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x14049C410
 * Callers:
 *     CcZeroEndOfLastPage @ 0x1400675C8 (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x14008A070 (CcWriteBehindInternal.c)
 *     CcClearPrivateWriteFile @ 0x1401E0E7C (CcClearPrivateWriteFile.c)
 *     CcSetPrivateWriteFile @ 0x1401E1390 (CcSetPrivateWriteFile.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x14049C600 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject);
}

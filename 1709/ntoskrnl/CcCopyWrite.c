/*
 * XREFs of CcCopyWrite @ 0x1401E0870
 * Callers:
 *     FsRtlCopyWrite @ 0x1406AF960 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCopyWriteEx @ 0x14001C190 (CcCopyWriteEx.c)
 */

BOOLEAN __stdcall CcCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        PVOID Buffer)
{
  return CcCopyWriteEx((__int64)FileObject, (__int64 *)FileOffset, Length, Wait, (__int64)Buffer, 0LL);
}

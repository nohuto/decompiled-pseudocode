/*
 * XREFs of CcCopyRead @ 0x14059BCC0
 * Callers:
 *     <none>
 * Callees:
 *     CcCopyReadEx @ 0x14007AB90 (CcCopyReadEx.c)
 */

BOOLEAN __stdcall CcCopyRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus)
{
  return CcCopyReadEx((_SLIST_ENTRY *)FileObject, (__int64 *)FileOffset, Length, Wait, Buffer, IoStatus, 0LL);
}

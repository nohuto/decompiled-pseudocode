/*
 * XREFs of CcFastCopyWrite @ 0x1401E0A20
 * Callers:
 *     <none>
 * Callees:
 *     CcCopyWriteEx @ 0x14001C190 (CcCopyWriteEx.c)
 */

void __stdcall CcFastCopyWrite(PFILE_OBJECT FileObject, ULONG FileOffset, ULONG Length, PVOID Buffer)
{
  __int64 v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v4[0] = FileOffset;
  CcCopyWriteEx((__int64)FileObject, v4, Length, 1, (__int64)Buffer, 0LL);
}

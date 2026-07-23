/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x1800EB450
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x1800EB2F0 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18000FC40 (RtlGetNtProductType.c)
 *     sub_1800886A4 @ 0x1800886A4 (sub_1800886A4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwWriteFile @ 0x1800A5400 (ZwWriteFile.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS __cdecl RtlRestoreBootStatusDefaults(HANDLE FileHandle)
{
  _BYTE *v2; // rax
  char v3; // cl
  __int64 v4; // rdx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-B0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD Buffer[36]; // [rsp+70h] [rbp-90h] BYREF

  memset(Buffer, 0, 0x88uLL);
  Buffer[0] = 136;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)&Buffer[1]);
  ByteOffset.QuadPart = 0LL;
  v2 = Buffer;
  v3 = 0;
  *(_WORD *)((char *)&Buffer[2] + 1) = 286;
  BYTE1(Buffer[12]) = 1;
  v4 = 136LL;
  do
  {
    v3 -= *v2++;
    --v4;
  }
  while ( v4 );
  BYTE2(Buffer[12]) = v3;
  sub_1800886A4(0, (__int64)Buffer, 0LL, 136LL);
  return ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x88u, &ByteOffset, 0LL);
}

/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x1800E6DA0
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x1800E6A70 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18005A930 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x18009ABC0 (ZwWriteFile.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800E71DC @ 0x1800E71DC (sub_1800E71DC.c)
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
  sub_1800E71DC(0LL, Buffer, 0LL, 136LL);
  return ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x88u, &ByteOffset, 0LL);
}

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

__int64 RtlRestoreBootStatusDefaults()
{
  _BYTE *v0; // rax
  char v1; // cl
  __int64 v2; // rdx
  _DWORD v4[36]; // [rsp+70h] [rbp-90h] BYREF

  memset(v4, 0, 0x88uLL);
  v4[0] = 136;
  RtlGetNtProductType(&v4[1]);
  v0 = v4;
  v1 = 0;
  *(_WORD *)((char *)&v4[2] + 1) = 286;
  BYTE1(v4[12]) = 1;
  v2 = 136LL;
  do
  {
    v1 -= *v0++;
    --v2;
  }
  while ( v2 );
  BYTE2(v4[12]) = v1;
  sub_1800E71DC(0LL, v4, 0LL, 136LL);
  return ZwWriteFile();
}

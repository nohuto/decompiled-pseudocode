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

__int64 RtlRestoreBootStatusDefaults()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  _BYTE *v3; // rax
  char v4; // cl
  __int64 v5; // rdx
  _DWORD v7[36]; // [rsp+70h] [rbp-90h] BYREF

  memset(v7, 0, 0x88uLL);
  v7[0] = 136;
  RtlGetNtProductType(&v7[1], v0, v1, v2);
  v3 = v7;
  v4 = 0;
  *(_WORD *)((char *)&v7[2] + 1) = 286;
  BYTE1(v7[12]) = 1;
  v5 = 136LL;
  do
  {
    v4 -= *v3++;
    --v5;
  }
  while ( v5 );
  BYTE2(v7[12]) = v4;
  sub_1800886A4(0, (__int64)v7, 0LL, 136LL);
  return ZwWriteFile();
}

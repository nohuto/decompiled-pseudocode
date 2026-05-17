/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x1800EABE0
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x1800EA8B0 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlGetNtProductType @ 0x180007D50 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtWriteFile @ 0x1800A01C0 (NtWriteFile.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpRecordBootStatusData @ 0x1800EAEBC (RtlpRecordBootStatusData.c)
 */

__int64 RtlRestoreBootStatusDefaults()
{
  __int64 v0; // rdx
  _BYTE *v1; // rax
  char v2; // cl
  __int64 v3; // rdx
  _DWORD v5[36]; // [rsp+70h] [rbp-90h] BYREF

  memset(v5, 0, 0x88uLL);
  v5[0] = 136;
  RtlGetNtProductType(&v5[1], v0);
  v1 = v5;
  v2 = 0;
  *(_WORD *)((char *)&v5[2] + 1) = 286;
  BYTE1(v5[12]) = 1;
  v3 = 136LL;
  do
  {
    v2 -= *v1++;
    --v3;
  }
  while ( v3 );
  BYTE2(v5[12]) = v2;
  RtlpRecordBootStatusData(0LL, v5, 0LL, 136LL);
  return NtWriteFile();
}

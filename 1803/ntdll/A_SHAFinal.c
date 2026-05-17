/*
 * XREFs of A_SHAFinal @ 0x180044710
 * Callers:
 *     RtlCreateServiceSid @ 0x1800445F0 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180049350 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     sub_180044934 @ 0x180044934 (sub_180044934.c)
 *     A_SHAUpdate @ 0x180045560 (A_SHAUpdate.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

void *__fastcall A_SHAFinal(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v5; // edx
  unsigned int v6; // eax
  __int64 v7; // rbx
  int v8; // ecx
  void *result; // rax
  _DWORD v10[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v11[80]; // [rsp+30h] [rbp-78h] BYREF

  v2 = a1[22];
  v5 = 64 - (v2 & 0x3F);
  v6 = v5 + 64;
  if ( v5 > 8 )
    v6 = 64 - (a1[22] & 0x3F);
  v7 = v6;
  memset(v11, 0, v6 - 8);
  v8 = (v2 >> 29) | (8 * a1[21]);
  v11[0] = 0x80;
  v10[0] = v8;
  v10[1] = 8 * v2;
  sub_180044934((char *)&v10[2] + v7, v10, 2LL);
  A_SHAUpdate(a1, v11, (unsigned int)v7);
  sub_180044934(a2, a1 + 16, 5LL);
  result = memset(a1, 0, 0x40uLL);
  a1[21] = 0;
  a1[22] = 0;
  a1[16] = 1732584193;
  a1[17] = -271733879;
  a1[18] = -1732584194;
  a1[19] = 271733878;
  a1[20] = -1009589776;
  return result;
}

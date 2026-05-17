/*
 * XREFs of MD5Final @ 0x180065C60
 * Callers:
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 * Callees:
 *     MD5Update @ 0x180065D30 (MD5Update.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall MD5Final(unsigned int *a1)
{
  unsigned int v1; // edx
  _DWORD *v2; // rbx
  unsigned int v3; // eax
  int v4; // edi
  unsigned int v6; // edx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 result; // rax
  _BYTE v10[80]; // [rsp+20h] [rbp-68h] BYREF

  v1 = *a1;
  v2 = a1 + 22;
  v3 = a1[1];
  v4 = 56;
  a1[22] = *a1;
  v6 = (v1 >> 3) & 0x3F;
  a1[23] = v3;
  if ( v6 >= 0x38 )
    v4 = 120;
  v7 = v4 - v6;
  memset(v10, 0, v7);
  v10[0] = 0x80;
  MD5Update(a1, v10, v7);
  MD5Update(a1, v2, 8LL);
  v8 = 4LL;
  do
  {
    *v2 = *(v2 - 20);
    ++v2;
    --v8;
  }
  while ( v8 );
  result = 0LL;
  memset(a1 + 6, 0, 0x40uLL);
  return result;
}

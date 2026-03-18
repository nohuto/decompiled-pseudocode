/*
 * XREFs of xxxToUnicodeEx @ 0x1C0071560
 * Callers:
 *     NtUserToUnicodeEx @ 0x1C0071380 (NtUserToUnicodeEx.c)
 * Callees:
 *     xxxInternalToUnicode @ 0x1C0071680 (xxxInternalToUnicode.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall xxxToUnicodeEx(unsigned int a1, unsigned int a2, char *a3, __int64 a4, int a5, int a6, __int64 a7)
{
  int i; // r9d
  char v12; // r10
  char v13; // r8
  _BYTE *v14; // rdx
  int v15; // ecx
  char v16; // al
  int v17; // ecx
  _BYTE v19[16]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v20[64]; // [rsp+50h] [rbp-78h] BYREF

  memset(v20, 0, sizeof(v20));
  for ( i = 0; i < 256; ++i )
  {
    v12 = *a3;
    v13 = i & 3;
    v14 = &v20[(unsigned __int64)(unsigned __int8)i >> 2];
    if ( *a3 < 0 )
      v15 = (unsigned __int8)*v14 | (1 << (2 * v13));
    else
      v15 = (unsigned __int8)*v14 & ~(1 << (2 * v13));
    *v14 = v15;
    v16 = 2 * v13 + 1;
    if ( (v12 & 1) != 0 )
      v17 = (unsigned __int8)v15 | (1 << v16);
    else
      v17 = (unsigned __int8)v15 & ~(1 << v16);
    *v14 = v17;
    ++a3;
  }
  return xxxInternalToUnicode(a1, a2, v20, a4, a5, a6, v19, a7);
}

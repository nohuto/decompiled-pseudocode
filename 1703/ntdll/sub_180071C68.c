/*
 * XREFs of sub_180071C68 @ 0x180071C68
 * Callers:
 *     sub_180071B6C @ 0x180071B6C (sub_180071B6C.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18001FC70 (RtlEqualUnicodeString.c)
 *     sub_18003F2C4 @ 0x18003F2C4 (sub_18003F2C4.c)
 *     RtlPrefixUnicodeString @ 0x180071E10 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall sub_180071C68(__int64 a1, unsigned __int16 *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  char v7; // r15
  char v8; // r12
  char v9; // r14
  char v10; // bp
  int v11; // eax
  bool v12; // zf
  _DWORD *v13; // r11
  __int64 v14; // r8
  __int64 v16; // r8
  __m128i v17; // xmm0
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v11 = sub_18003F2C4(a2);
  v12 = *a2 == 4;
  *v13 = v11;
  if ( v12 )
    goto LABEL_30;
  if ( RtlEqualUnicodeString(word_180110698, a2, 1) || RtlEqualUnicodeString(L"\b\n", a2, 1) )
  {
    v10 = 1;
    v7 = 1;
  }
  else
  {
    LOBYTE(v14) = 1;
    if ( !(unsigned __int8)RtlPrefixUnicodeString(L"\b\n", a2, v14) )
      return v4;
    v7 = 1;
  }
  if ( RtlEqualUnicodeString(word_1801106B8, a2, 1) || RtlEqualUnicodeString(word_1801106A8, a2, 1) )
  {
    v10 = 1;
    v8 = 1;
    goto LABEL_29;
  }
  LOBYTE(v16) = 1;
  if ( (unsigned __int8)RtlPrefixUnicodeString(word_1801106A8, a2, v16) )
  {
    v8 = 1;
    goto LABEL_29;
  }
  if ( v10 )
    goto LABEL_30;
  v17 = *(__m128i *)a2;
  v18[0] = *(_QWORD *)a2;
  v18[1] = _mm_srli_si128(v17, 8).m128i_u64[0] + 8;
  LOWORD(v18[0]) -= 8;
  WORD1(v18[0]) -= 8;
  if ( (unsigned int)sub_18003F2C4((unsigned __int16 *)v18) != 2 )
  {
    *a4 |= 0x200u;
LABEL_29:
    v9 = 0;
    if ( !v10 )
      goto LABEL_20;
LABEL_30:
    *a4 |= 0x400u;
    if ( !v7 )
      goto LABEL_21;
    goto LABEL_20;
  }
  v9 = 1;
LABEL_20:
  *a4 |= 0x10u;
LABEL_21:
  if ( v8 )
    *a4 |= 0x40u;
  if ( v9 )
    *a4 |= 0x20u;
  return v4;
}

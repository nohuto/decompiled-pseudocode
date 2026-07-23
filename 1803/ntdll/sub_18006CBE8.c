/*
 * XREFs of sub_18006CBE8 @ 0x18006CBE8
 * Callers:
 *     sub_18006CAEC @ 0x18006CAEC (sub_18006CAEC.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800388A0 (RtlEqualUnicodeString.c)
 *     sub_18003E414 @ 0x18003E414 (sub_18003E414.c)
 *     RtlPrefixUnicodeString @ 0x18006CD90 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall sub_18006CBE8(__int64 a1, _UNICODE_STRING *a2, _DWORD *a3, int *a4)
{
  unsigned int v4; // ebx
  char v7; // di
  char v8; // r15
  char v9; // r14
  int v10; // eax
  bool v11; // zf
  _DWORD *v12; // r11
  __m128i v14; // xmm0
  char v15; // cl
  int v16; // eax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v10 = sub_18003E414(&a2->Length);
  v11 = a2->Length == 4;
  *v12 = v10;
  if ( v11 )
    goto LABEL_29;
  v7 = 1;
  if ( RtlEqualUnicodeString((PUNICODE_STRING)&stru_180110700, a2, 1u)
    || RtlEqualUnicodeString((PUNICODE_STRING)&stru_1801106F0, a2, 1u) )
  {
    v9 = 1;
  }
  else if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&stru_1801106F0, a2, 1u) )
  {
    return v4;
  }
  if ( RtlEqualUnicodeString((PUNICODE_STRING)&stru_180110720, a2, 1u)
    || RtlEqualUnicodeString((PUNICODE_STRING)&stru_180110710, a2, 1u) )
  {
    v9 = 1;
    goto LABEL_24;
  }
  if ( RtlPrefixUnicodeString((PUNICODE_STRING)&stru_180110710, a2, 1u) )
  {
LABEL_24:
    v8 = 1;
    goto LABEL_28;
  }
  if ( v9 )
    goto LABEL_29;
  v14 = *(__m128i *)a2;
  v17[0] = *(_QWORD *)&a2->Length;
  v17[1] = _mm_srli_si128(v14, 8).m128i_u64[0] + 8;
  LOWORD(v17[0]) -= 8;
  WORD1(v17[0]) -= 8;
  if ( (unsigned int)sub_18003E414((unsigned __int16 *)v17) != 2 )
  {
    *a4 |= 0x200u;
LABEL_28:
    v15 = 0;
    if ( !v9 )
      goto LABEL_19;
LABEL_29:
    *a4 |= 0x400u;
    v15 = 0;
    v16 = *a4;
    if ( !v7 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v15 = 1;
LABEL_19:
  *a4 |= 0x10u;
  v16 = *a4;
LABEL_20:
  if ( v8 )
  {
    v16 |= 0x40u;
    *a4 = v16;
  }
  if ( v15 )
    *a4 = v16 | 0x20;
  return v4;
}

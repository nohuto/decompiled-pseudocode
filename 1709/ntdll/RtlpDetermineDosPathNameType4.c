/*
 * XREFs of RtlpDetermineDosPathNameType4 @ 0x18006D278
 * Callers:
 *     RtlpGetLengthWithoutLastPathElement @ 0x18006D17C (RtlpGetLengthWithoutLastPathElement.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18002E610 (RtlEqualUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180033F0C (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlPrefixUnicodeString @ 0x18006D410 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall RtlpDetermineDosPathNameType4(__int64 a1, _UNICODE_STRING *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  char v7; // si
  char v8; // r15
  char v9; // r14
  int v10; // eax
  bool v11; // zf
  _DWORD *v12; // r11
  __m128i v14; // xmm0
  char v15; // al
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

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
  v10 = RtlDetermineDosPathNameType_Ustr(&a2->Length);
  v11 = a2->Length == 4;
  *v12 = v10;
  if ( v11 )
    goto LABEL_29;
  v7 = 1;
  if ( RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtRoot, a2, 1u)
    || RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtRootSlash, a2, 1u) )
  {
    v9 = 1;
  }
  else if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpWin32NtRootSlash, a2, 1u) )
  {
    return v4;
  }
  if ( RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRoot, a2, 1u)
    || RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRootSlash, a2, 1u) )
  {
    v9 = 1;
    goto LABEL_24;
  }
  if ( RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRootSlash, a2, 1u) )
  {
LABEL_24:
    v8 = 1;
    goto LABEL_28;
  }
  if ( v9 )
    goto LABEL_29;
  v14 = *(__m128i *)a2;
  v16[0] = *(_QWORD *)&a2->Length;
  v16[1] = _mm_srli_si128(v14, 8).m128i_u64[0] + 8;
  LOWORD(v16[0]) -= 8;
  WORD1(v16[0]) -= 8;
  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr((unsigned __int16 *)v16) != 2 )
  {
    *a4 |= 0x200u;
LABEL_28:
    v15 = 0;
    if ( !v9 )
      goto LABEL_19;
LABEL_29:
    *a4 |= 0x400u;
    v15 = 0;
    if ( !v7 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v15 = 1;
LABEL_19:
  *a4 |= 0x10u;
LABEL_20:
  if ( v8 )
    *a4 |= 0x40u;
  if ( v15 )
    *a4 |= 0x20u;
  return v4;
}

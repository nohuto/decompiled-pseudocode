/*
 * XREFs of RtlpDetermineDosPathNameType4 @ 0x18006D278
 * Callers:
 *     RtlpGetLengthWithoutLastPathElement @ 0x18006D17C (RtlpGetLengthWithoutLastPathElement.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18002E610 (RtlEqualUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180033F0C (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlPrefixUnicodeString @ 0x18006D410 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall RtlpDetermineDosPathNameType4(__int64 a1, unsigned __int16 *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  char v7; // si
  char v8; // r15
  char v9; // r14
  int v10; // eax
  bool v11; // zf
  _DWORD *v12; // r11
  __int64 v13; // r8
  __int64 v15; // r8
  __m128i v16; // xmm0
  char v17; // al
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

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
  v10 = RtlDetermineDosPathNameType_Ustr(a2);
  v11 = *a2 == 4;
  *v12 = v10;
  if ( v11 )
    goto LABEL_29;
  v7 = 1;
  if ( RtlEqualUnicodeString(RtlpWin32NtRoot, a2, 1) || RtlEqualUnicodeString(L"\b\n", a2, 1) )
  {
    v9 = 1;
  }
  else
  {
    LOBYTE(v13) = 1;
    if ( !(unsigned __int8)RtlPrefixUnicodeString(L"\b\n", a2, v13) )
      return v4;
  }
  if ( RtlEqualUnicodeString(RtlpWin32NtUncRoot, a2, 1) || RtlEqualUnicodeString(RtlpWin32NtUncRootSlash, a2, 1) )
  {
    v9 = 1;
    goto LABEL_24;
  }
  LOBYTE(v15) = 1;
  if ( (unsigned __int8)RtlPrefixUnicodeString(RtlpWin32NtUncRootSlash, a2, v15) )
  {
LABEL_24:
    v8 = 1;
    goto LABEL_28;
  }
  if ( v9 )
    goto LABEL_29;
  v16 = *(__m128i *)a2;
  v18[0] = *(_QWORD *)a2;
  v18[1] = _mm_srli_si128(v16, 8).m128i_u64[0] + 8;
  LOWORD(v18[0]) -= 8;
  WORD1(v18[0]) -= 8;
  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr((unsigned __int16 *)v18) != 2 )
  {
    *a4 |= 0x200u;
LABEL_28:
    v17 = 0;
    if ( !v9 )
      goto LABEL_19;
LABEL_29:
    *a4 |= 0x400u;
    v17 = 0;
    if ( !v7 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v17 = 1;
LABEL_19:
  *a4 |= 0x10u;
LABEL_20:
  if ( v8 )
    *a4 |= 0x40u;
  if ( v17 )
    *a4 |= 0x20u;
  return v4;
}

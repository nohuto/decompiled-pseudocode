/*
 * XREFs of sub_1800413EC @ 0x1800413EC
 * Callers:
 *     sub_180040514 @ 0x180040514 (sub_180040514.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800388A0 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall sub_1800413EC(unsigned __int16 *a1, __int64 a2)
{
  BOOLEAN result; // al
  _WORD *i; // r9
  unsigned __int64 v4; // rax
  USHORT v5; // r9
  __int16 v6; // ax
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  result = 0;
  if ( LinkTarget.Length )
  {
    for ( i = (_WORD *)(*a1 + *((_QWORD *)a1 + 1) - 2LL); ; --i )
    {
      *(_QWORD *)(a2 + 8) = i;
      v4 = *((_QWORD *)a1 + 1);
      if ( (unsigned __int64)i <= v4 )
        break;
      if ( *i == 92 || *i == 47 )
      {
        *(_QWORD *)(a2 + 8) = i + 1;
        LOWORD(i) = (_WORD)i + 2;
        LOWORD(v4) = a1[4];
        break;
      }
    }
    v5 = (_WORD)i - v4;
    v6 = *a1 - v5;
    String1.MaximumLength = v5;
    *(_WORD *)a2 = v6;
    *(_WORD *)(a2 + 2) = a1[1] - v5;
    String1.Buffer = (PWCH)*((_QWORD *)a1 + 1);
    String1.Length = v5 - 2;
    return RtlEqualUnicodeString(&String1, &LinkTarget, 1u);
  }
  return result;
}

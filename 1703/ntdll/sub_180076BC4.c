/*
 * XREFs of sub_180076BC4 @ 0x180076BC4
 * Callers:
 *     sub_18003AC90 @ 0x18003AC90 (sub_18003AC90.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18001FC70 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall sub_180076BC4(unsigned __int16 *a1, __int64 a2)
{
  BOOLEAN result; // al
  unsigned __int64 v4; // r9
  _WORD *v5; // rax
  _WORD *v6; // rax
  __int16 v7; // cx
  __int16 v8; // ax
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  result = 0;
  if ( LinkTarget.Length )
  {
    v4 = *a1 - 2LL + *((_QWORD *)a1 + 1);
    *(_QWORD *)(a2 + 8) = v4;
    if ( v4 > *((_QWORD *)a1 + 1) )
    {
      while ( 1 )
      {
        v5 = *(_WORD **)(a2 + 8);
        if ( *v5 == 92 || *v5 == 47 )
          break;
        v6 = v5 - 1;
        *(_QWORD *)(a2 + 8) = v6;
        if ( (unsigned __int64)v6 <= *((_QWORD *)a1 + 1) )
          goto LABEL_8;
      }
      *(_QWORD *)(a2 + 8) += 2LL;
    }
LABEL_8:
    v7 = *(_WORD *)(a2 + 8) - a1[4];
    v8 = *a1 - v7;
    String1.MaximumLength = *(_WORD *)(a2 + 8) - a1[4];
    *(_WORD *)a2 = v8;
    *(_WORD *)(a2 + 2) = a1[1] - v7;
    String1.Buffer = (PWCH)*((_QWORD *)a1 + 1);
    String1.Length = v7 - 2;
    return RtlEqualUnicodeString(&String1, &LinkTarget, 1u);
  }
  return result;
}

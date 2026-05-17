/*
 * XREFs of sub_1800812A8 @ 0x1800812A8
 * Callers:
 *     sub_180039F38 @ 0x180039F38 (sub_180039F38.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18003B5B0 (RtlCompareUnicodeStrings.c)
 */

char __fastcall sub_1800812A8(__int64 a1)
{
  char v1; // bl
  unsigned __int64 v3; // r9

  if ( *(unsigned __int16 *)(a1 + 72) - (unsigned int)*(unsigned __int16 *)(a1 + 88) <= (unsigned int)(unsigned __int16)xmmword_18015B2A0
                                                                                      + 2 )
    return 0;
  v3 = (unsigned __int64)(unsigned __int16)xmmword_18015B2A0 >> 1;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 80) + 2 * v3) != 92 )
    return 0;
  v1 = 1;
  if ( (unsigned int)RtlCompareUnicodeStrings(
                       *(unsigned __int16 **)(a1 + 80),
                       (unsigned __int64)(unsigned __int16)xmmword_18015B2A0 >> 1,
                       *((__int64 *)&xmmword_18015B2A0 + 1),
                       v3,
                       1) )
    return 0;
  return v1;
}

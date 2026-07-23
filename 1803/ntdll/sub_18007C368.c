/*
 * XREFs of sub_18007C368 @ 0x18007C368
 * Callers:
 *     sub_180023700 @ 0x180023700 (sub_180023700.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 */

char __fastcall sub_18007C368(__int64 a1)
{
  char v1; // bl
  SIZE_T v3; // rdx

  if ( *(unsigned __int16 *)(a1 + 72) - (unsigned int)*(unsigned __int16 *)(a1 + 88) <= (unsigned int)(unsigned __int16)xmmword_18015C2D0
                                                                                      + 2 )
    return 0;
  v3 = (unsigned __int64)(unsigned __int16)xmmword_18015C2D0 >> 1;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 80) + 2 * v3) != 92 )
    return 0;
  v1 = 1;
  if ( RtlCompareUnicodeStrings(*(PCWCH *)(a1 + 80), v3, *((PCWCH *)&xmmword_18015C2D0 + 1), v3, 1u) )
    return 0;
  return v1;
}

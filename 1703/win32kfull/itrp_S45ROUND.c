/*
 * XREFs of itrp_S45ROUND @ 0x1C02D8090
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SetRoundValues @ 0x1C02DA6B8 (itrp_SetRoundValues.c)
 */

__int64 __fastcall itrp_S45ROUND(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (v2 = qword_1C032C9E8, (qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) )
  {
    qword_1C032C9E8 -= 4LL;
    itrp_SetRoundValues(*(unsigned int *)(v2 - 4), 0LL);
    v3 = qword_1C032CA00;
    *(_WORD *)(qword_1C032CA00 + 132) = 7;
    if ( word_1C032CA74 && ((*(_BYTE *)(qword_1C032CA00 + 120) & 4) != 0 || *(_BYTE *)(qword_1C032CA00 + 333)) )
      v4 = 8LL;
    else
      v4 = 0LL;
    *(_DWORD *)(v3 + 128) = dword_1C02F4C1C[v4];
    result = a1;
    word_1C032CA4C = 0;
  }
  else
  {
    result = qword_1C032CA58;
    dword_1C032CA50 = 4368;
  }
  return result;
}

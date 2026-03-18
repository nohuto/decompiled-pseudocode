/*
 * XREFs of itrp_SROUND @ 0x1C02DA0A0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SetRoundValues @ 0x1C02DA6B8 (itrp_SetRoundValues.c)
 */

__int64 __fastcall itrp_SROUND(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 result; // rax

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2 )
  {
    qword_1C032C9E8 -= 4LL;
    itrp_SetRoundValues(*(unsigned int *)qword_1C032C9E8, 1LL);
    v2 = qword_1C032CA00;
    *(_WORD *)(qword_1C032CA00 + 132) = 6;
    if ( word_1C032CA74 && ((*(_BYTE *)(qword_1C032CA00 + 120) & 4) != 0 || *(_BYTE *)(qword_1C032CA00 + 333)) )
      v3 = 8LL;
    else
      v3 = 0LL;
    *(_DWORD *)(v2 + 128) = dword_1C02F4C18[v3];
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

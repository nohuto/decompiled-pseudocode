/*
 * XREFs of itrp_S45ROUND @ 0x1C02D1D90
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SetRoundValues @ 0x1C02D4378 (itrp_SetRoundValues.c)
 */

__int64 __fastcall itrp_S45ROUND(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (v2 = qword_1C0327C78, (qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) )
  {
    qword_1C0327C78 -= 4LL;
    itrp_SetRoundValues(*(unsigned int *)(v2 - 4), 0LL);
    v3 = qword_1C0327C90;
    *(_WORD *)(qword_1C0327C90 + 132) = 7;
    *(_DWORD *)(v3 + 128) = 8;
    result = a1;
    word_1C0327CDC = 0;
  }
  else
  {
    result = qword_1C0327CE8;
    dword_1C0327CE0 = 4368;
  }
  return result;
}

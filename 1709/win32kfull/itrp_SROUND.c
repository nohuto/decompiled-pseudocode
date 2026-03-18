/*
 * XREFs of itrp_SROUND @ 0x1C02D3D70
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SetRoundValues @ 0x1C02D4378 (itrp_SetRoundValues.c)
 */

__int64 __fastcall itrp_SROUND(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2 )
  {
    qword_1C0327C78 -= 4LL;
    itrp_SetRoundValues(*(unsigned int *)qword_1C0327C78, 1LL);
    v2 = qword_1C0327C90;
    *(_WORD *)(qword_1C0327C90 + 132) = 6;
    *(_DWORD *)(v2 + 128) = 7;
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

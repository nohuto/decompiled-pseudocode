/*
 * XREFs of itrp_NROUND @ 0x1C02D6FD0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_RoundOff @ 0x1C02D7FF4 (itrp_RoundOff.c)
 */

__int64 __fastcall itrp_NROUND(__int64 a1, int a2)
{
  int v3; // eax
  _DWORD *v4; // r10
  __int64 result; // rax

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2 )
  {
    qword_1C032C9E8 -= 4LL;
    v3 = itrp_RoundOff(*(unsigned int *)qword_1C032C9E8, *(unsigned int *)(qword_1C032CA00 + 4LL * (a2 - 108) + 32));
    *v4 = v3;
    result = a1;
    qword_1C032C9E8 += 4LL;
  }
  else
  {
    result = qword_1C032CA58;
    dword_1C032CA50 = 4368;
  }
  return result;
}

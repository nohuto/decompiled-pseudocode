/*
 * XREFs of itrp_ROUND @ 0x1C02D7B80
 * Callers:
 *     <none>
 * Callees:
 *     InvokeRoundValue @ 0x1C02CF758 (InvokeRoundValue.c)
 */

__int64 __fastcall itrp_ROUND(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2 )
  {
    qword_1C032C9E8 -= 4LL;
    *(_DWORD *)qword_1C032C9E8 = InvokeRoundValue(
                                   *(_DWORD *)(qword_1C032CA00 + 128),
                                   *(_DWORD *)qword_1C032C9E8,
                                   *(_DWORD *)(qword_1C032CA00 + 4LL * (a2 - 104) + 32));
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

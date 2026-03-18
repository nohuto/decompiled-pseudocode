/*
 * XREFs of itrp_SRP2 @ 0x1C02DA290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SRP2(__int64 a1)
{
  __int64 result; // rax

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2 )
  {
    qword_1C032C9E8 -= 4LL;
    dword_1C032CA18 = *(_DWORD *)qword_1C032C9E8;
    return a1;
  }
  else
  {
    result = qword_1C032CA58;
    dword_1C032CA50 = 4368;
  }
  return result;
}

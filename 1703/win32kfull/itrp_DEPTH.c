/*
 * XREFs of itrp_DEPTH @ 0x1C02D0B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DEPTH(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C032CA00 + 424);
  if ( (qword_1C032CA00 ^ v1 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (v1 - qword_1C032C9E8) >> 2 )
  {
    *(_DWORD *)qword_1C032C9E8 = (qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2;
    result = a1;
    qword_1C032C9E8 += 4LL;
  }
  else
  {
    result = qword_1C032CA58;
    dword_1C032CA50 = 4369;
  }
  return result;
}

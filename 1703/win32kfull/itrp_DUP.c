/*
 * XREFs of itrp_DUP @ 0x1C02D0CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DUP(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C032CA00 + 424);
  if ( (qword_1C032CA00 ^ v1 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2 )
  {
    if ( (v1 - qword_1C032C9E8) >> 2 )
    {
      *(_DWORD *)qword_1C032C9E8 = *(_DWORD *)(qword_1C032C9E8 - 4);
      result = a1;
      qword_1C032C9E8 += 4LL;
      return result;
    }
    dword_1C032CA50 = 4369;
  }
  else
  {
    dword_1C032CA50 = 4368;
  }
  return qword_1C032CA58;
}

/*
 * XREFs of itrp_PUSHB1 @ 0x1C02D7350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_PUSHB1(unsigned __int8 *a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C032CA00 + 424);
  if ( (qword_1C032CA00 ^ v1 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (v1 - qword_1C032C9E8) >> 2 )
  {
    result = qword_1C032CA58;
    if ( (unsigned __int64)a1 < qword_1C032CA60 || (unsigned __int64)(a1 + 1) > qword_1C032CA58 || a1 + 1 < a1 )
    {
      dword_1C032CA50 = 4381;
    }
    else
    {
      *(_DWORD *)qword_1C032C9E8 = *a1;
      result = (__int64)(a1 + 1);
      qword_1C032C9E8 += 4LL;
    }
  }
  else
  {
    result = qword_1C032CA58;
    dword_1C032CA50 = 4369;
  }
  return result;
}

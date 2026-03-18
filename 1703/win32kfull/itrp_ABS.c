/*
 * XREFs of itrp_ABS @ 0x1C02CFC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_ABS(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2 )
  {
    v1 = *(_DWORD *)(qword_1C032C9E8 - 4);
    if ( v1 < 0 )
      *(_DWORD *)(qword_1C032C9E8 - 4) = -v1;
    return a1;
  }
  else
  {
    result = qword_1C032CA58;
    dword_1C032CA50 = 4368;
  }
  return result;
}

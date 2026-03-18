/*
 * XREFs of itrp_RCVT @ 0x1C02D78B0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGetCVTEntry @ 0x1C02CF540 (InvokeGetCVTEntry.c)
 */

__int64 __fastcall itrp_RCVT(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 result; // rax

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2 )
  {
    qword_1C032C9E8 -= 4LL;
    v2 = *(unsigned __int16 *)(qword_1C032CA00 + 360);
    v3 = *(_DWORD *)qword_1C032C9E8;
    if ( (*(_DWORD *)qword_1C032C9E8 < (int)v2 || v3 <= 255)
      && v3 >= 0
      && (qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ v2 ^ *(_QWORD *)(qword_1C032CA00 + 16)) == *(_QWORD *)(qword_1C032CA00 + 368) )
    {
      *(_DWORD *)qword_1C032C9E8 = InvokeGetCVTEntry(dword_1C032CA3C, v3);
      result = a1;
      qword_1C032C9E8 += 4LL;
      return result;
    }
    dword_1C032CA50 = 4379;
  }
  else
  {
    dword_1C032CA50 = 4368;
  }
  return qword_1C032CA58;
}

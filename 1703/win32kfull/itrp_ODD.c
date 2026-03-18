/*
 * XREFs of itrp_ODD @ 0x1C02D71A0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_RoundToGrid @ 0x1C02D8050 (itrp_RoundToGrid.c)
 */

__int64 itrp_ODD()
{
  int v0; // eax
  __int64 v1; // r9
  __int64 v2; // r11
  __int64 result; // rax

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2 )
  {
    v0 = itrp_RoundToGrid(*(unsigned int *)(qword_1C032C9E8 - 4), 0LL);
    *(_DWORD *)(v1 - 4) = (v0 >> 6) & 1;
    return v2;
  }
  else
  {
    result = qword_1C032CA58;
    dword_1C032CA50 = 4368;
  }
  return result;
}

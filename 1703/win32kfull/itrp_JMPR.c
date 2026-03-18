/*
 * XREFs of itrp_JMPR @ 0x1C02D4610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_JMPR(__int64 a1)
{
  unsigned __int64 v1; // rcx

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || !((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  qword_1C032C9E8 -= 4LL;
  v1 = *(_DWORD *)qword_1C032C9E8 - 1 + a1;
  if ( !--dword_1C032CA68 )
  {
    dword_1C032CA50 = 4359;
    return qword_1C032CA58;
  }
  if ( v1 < qword_1C032CA60 )
  {
    dword_1C032CA50 = 4363;
    return qword_1C032CA58;
  }
  if ( v1 > qword_1C032CA58 )
    return qword_1C032CA58;
  return v1;
}

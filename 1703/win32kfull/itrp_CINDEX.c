/*
 * XREFs of itrp_CINDEX @ 0x1C02D0820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_CINDEX(__int64 a1)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx
  _DWORD *v5; // rcx

  v2 = *(_QWORD *)qword_1C032CA00;
  v3 = *(_QWORD *)(qword_1C032CA00 + 424);
  if ( (qword_1C032CA00 ^ v3 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (__int64)(qword_1C032C9E8 - v2) >> 2
    && (v4 = *(int *)(qword_1C032C9E8 - 4), v4 <= (__int64)(qword_1C032C9E8 - 4 - v2) >> 2) )
  {
    v5 = (_DWORD *)(qword_1C032C9E8 - 4 - 4 * v4);
    if ( (unsigned __int64)v5 >= v2 && (unsigned __int64)v5 < v3 )
    {
      *(_DWORD *)(qword_1C032C9E8 - 4) = *v5;
      return a1;
    }
    dword_1C032CA50 = 4371;
  }
  else
  {
    dword_1C032CA50 = 4368;
  }
  return qword_1C032CA58;
}

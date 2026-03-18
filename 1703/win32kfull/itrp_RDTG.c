/*
 * XREFs of itrp_RDTG @ 0x1C02D7990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RDTG(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rax
  __int64 result; // rax

  v1 = qword_1C032CA00;
  *(_WORD *)(qword_1C032CA00 + 132) = 1;
  if ( word_1C032CA74 && ((*(_BYTE *)(qword_1C032CA00 + 120) & 4) != 0 || *(_BYTE *)(qword_1C032CA00 + 333)) )
    v2 = 8LL;
  else
    v2 = 0LL;
  *(_DWORD *)(v1 + 128) = dword_1C02F4C04[v2];
  result = a1;
  word_1C032CA4C = 0;
  return result;
}

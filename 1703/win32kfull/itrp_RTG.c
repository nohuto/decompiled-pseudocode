/*
 * XREFs of itrp_RTG @ 0x1C02D7E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RTG(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rdx

  v1 = qword_1C032CA00;
  v2 = 0LL;
  *(_WORD *)(qword_1C032CA00 + 132) = 3;
  if ( word_1C032CA74 && ((*(_BYTE *)(qword_1C032CA00 + 120) & 4) != 0 || *(_BYTE *)(qword_1C032CA00 + 333)) )
    v2 = 8LL;
  *(_DWORD *)(v1 + 128) = dword_1C02F4C0C[v2];
  return a1;
}

/*
 * XREFs of ndisCheckForHangSupported @ 0x1C0024814
 * Callers:
 *     ndisSetWakeUpTimer @ 0x1C002476C (ndisSetWakeUpTimer.c)
 *     ndisQueryStatisticsOids @ 0x1C00B00DC (ndisQueryStatisticsOids.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisCheckForHangSupported(__int64 a1)
{
  _QWORD *v1; // rax
  bool v2; // zf

  v1 = *(_QWORD **)(a1 + 3784);
  if ( *(_BYTE *)(a1 + 32) < 6u )
  {
    if ( !v1[24] )
      return 0;
    v2 = v1[15] == 0LL;
  }
  else
  {
    if ( !v1[26] )
      return 0;
    v2 = v1[27] == 0LL;
  }
  return !v2;
}

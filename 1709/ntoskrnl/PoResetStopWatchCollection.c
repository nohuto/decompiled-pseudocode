/*
 * XREFs of PoResetStopWatchCollection @ 0x14024C418
 * Callers:
 *     PopPublishAndResetPowerRequestsCollectionStats @ 0x14070C290 (PopPublishAndResetPowerRequestsCollectionStats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoResetStopWatchCollection(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  return result;
}

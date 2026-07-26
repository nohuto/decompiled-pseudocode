/*
 * XREFs of ndisMIsPowerSynchronizedDatapathRequired @ 0x1C00110AC
 * Callers:
 *     ndisSetMiniportHandlers @ 0x1C010390C (ndisSetMiniportHandlers.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisMIsPowerSynchronizedDatapathRequired(_DWORD *a1)
{
  return (a1[30] & 0x80u) == 0 && ((a1[984] & 0x3000) == 0x2000 || ndisNoPauseOnSuspend && (int)a1[468] < 0);
}

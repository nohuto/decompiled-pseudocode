/*
 * XREFs of ?ndisIsValidNblTrackerHistoryBufferSize@@YA_N_KK@Z @ 0x1C011F9D0
 * Callers:
 *     ?ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ @ 0x1C00EFF30 (-ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsValidNblTrackerHistoryBufferSize(unsigned __int64 a1)
{
  return ((ndisNblTrackerHistorySize - 1) & ndisNblTrackerHistorySize) == 0 && ndisNblTrackerHistorySize <= a1;
}

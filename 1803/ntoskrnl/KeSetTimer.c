/*
 * XREFs of KeSetTimer @ 0x14005A670
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetTimer(PKTIMER Timer, LARGE_INTEGER DueTime, PKDPC Dpc)
{
  return KiSetTimerEx((_DWORD)Timer, DueTime.LowPart, 0, 0, (__int64)Dpc);
}

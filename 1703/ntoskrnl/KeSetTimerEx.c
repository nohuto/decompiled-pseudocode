/*
 * XREFs of KeSetTimerEx @ 0x14004CFF0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  return KiSetTimerEx((_DWORD)Timer, DueTime.LowPart, Period, 0, (__int64)Dpc);
}

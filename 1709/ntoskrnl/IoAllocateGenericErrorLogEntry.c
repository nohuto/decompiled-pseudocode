/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x1401F91E8
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x1406B5648 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x1406C1888 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1406E1928 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x1406EA210 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x140130E6C (IopAllocateErrorLogEntry.c)
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}

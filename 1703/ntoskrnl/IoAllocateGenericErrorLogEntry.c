/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x1401F37C8
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x140689948 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x140695B4C (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1406B5708 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x1406BD430 (MiBadMemoryLogger.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}

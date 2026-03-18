/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x1402365A8
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x14071A2F8 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x14072767C (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x14074C6D0 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x140753CB0 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x140163BDC (IopAllocateErrorLogEntry.c)
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}

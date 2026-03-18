/*
 * XREFs of KeRundownQueue @ 0x14013FEF0
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x14013E1A4 (KeRundownQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  return (PLIST_ENTRY)KeRundownQueueEx((__int64)Queue, 1);
}

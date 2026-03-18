/*
 * XREFs of KeRundownQueue @ 0x140131000
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x1400DB4A4 (KeRundownQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  return (PLIST_ENTRY)KeRundownQueueEx((__int64)Queue, 1);
}

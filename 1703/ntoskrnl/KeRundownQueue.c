/*
 * XREFs of KeRundownQueue @ 0x140010D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  char v1; // dl

  v1 = 1;
  return (PLIST_ENTRY)KeRundownQueueEx(Queue, v1);
}

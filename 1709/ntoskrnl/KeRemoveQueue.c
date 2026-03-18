/*
 * XREFs of KeRemoveQueue @ 0x14015CDC0
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueueEx @ 0x14006C920 (KeRemoveQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRemoveQueue(PRKQUEUE Queue, KPROCESSOR_MODE WaitMode, PLARGE_INTEGER Timeout)
{
  PLIST_ENTRY EntryArray; // [rsp+58h] [rbp+20h] BYREF

  KeRemoveQueueEx(Queue, WaitMode, 0, Timeout, &EntryArray, 1u);
  return EntryArray;
}

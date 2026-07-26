/*
 * XREFs of NdisInterlockedInsertTailList @ 0x1C005B1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PLIST_ENTRY __stdcall NdisInterlockedInsertTailList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  return ExInterlockedInsertTailList(ListHead, ListEntry, Lock);
}

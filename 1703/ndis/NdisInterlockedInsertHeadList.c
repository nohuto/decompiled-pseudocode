/*
 * XREFs of NdisInterlockedInsertHeadList @ 0x1C005B1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PLIST_ENTRY __stdcall NdisInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  return ExInterlockedInsertHeadList(ListHead, ListEntry, Lock);
}

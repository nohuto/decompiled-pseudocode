/*
 * XREFs of NdisInterlockedRemoveHeadList @ 0x1C005B1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PLIST_ENTRY __stdcall NdisInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  return ExInterlockedRemoveHeadList(ListHead, Lock);
}

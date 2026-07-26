/*
 * XREFs of NdisInterlockedInsertTailList @ 0x1C005B400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PLIST_ENTRY __fastcall NdisInterlockedInsertTailList(_LIST_ENTRY *a1, _LIST_ENTRY *a2, KSPIN_LOCK *a3)
{
  return ExInterlockedInsertTailList(a1, a2, a3);
}

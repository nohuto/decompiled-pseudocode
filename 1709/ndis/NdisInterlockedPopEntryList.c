/*
 * XREFs of NdisInterlockedPopEntryList @ 0x1C005AA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PSINGLE_LIST_ENTRY __fastcall NdisInterlockedPopEntryList(_SINGLE_LIST_ENTRY *a1, KSPIN_LOCK *a2)
{
  return ExInterlockedPopEntryList(a1, a2);
}

/*
 * XREFs of EditionFindThreadPointerData @ 0x1C0007AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
struct tagTHREADPOINTERDATA *__fastcall EditionFindThreadPointerData(struct _LIST_ENTRY *a1, unsigned __int16 a2)
{
  return FindThreadPointerData(a1, a2);
}

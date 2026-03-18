/*
 * XREFs of EditionFindThreadPointerData @ 0x1C000CFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000D004 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

struct tagTHREADPOINTERDATA *__fastcall EditionFindThreadPointerData(struct _LIST_ENTRY *a1, unsigned __int16 a2)
{
  return FindThreadPointerData(a1, a2);
}

/*
 * XREFs of EditionUnlinkAndFreeThreadPointerData @ 0x1C01CA020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall EditionUnlinkAndFreeThreadPointerData(
        struct tagTHREADINPUTPOINTERLIST *a1,
        struct tagTHREADPOINTERDATA *a2)
{
  UnlinkAndFreeThreadPointerData(a1, a2);
}

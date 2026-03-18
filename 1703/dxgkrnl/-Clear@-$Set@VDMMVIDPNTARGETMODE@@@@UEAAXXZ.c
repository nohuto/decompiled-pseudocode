/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNTARGETMODE@@@@UEAAXXZ @ 0x1C0045110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Set<DMMVIDPNTARGETMODE>::Clear(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::Clear(a1 + 8, a2, a3, a4);
}

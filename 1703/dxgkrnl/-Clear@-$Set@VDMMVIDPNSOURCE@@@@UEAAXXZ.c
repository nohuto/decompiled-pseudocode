/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNSOURCE@@@@UEAAXXZ @ 0x1C0045810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Set<DMMVIDPNSOURCE>::Clear(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DoublyLinkedList<DMMVIDPNSOURCE>::Clear(a1 + 8, a2, a3, a4);
}

/*
 * XREFs of ?Clear@?$Queue@VDMMVIDPN@@@@UEAAXXZ @ 0x1C0035480
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAXXZ @ 0x1C0035408 (-Clear@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAXXZ.c)
 */

void __fastcall Queue<DMMVIDPN>::Clear(__int64 a1)
{
  DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::Clear(a1 + 8);
}

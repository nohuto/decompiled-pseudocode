/*
 * XREFs of ?Clear@?$Set@VDXGTARGETENTRY@@@@UEAAXXZ @ 0x1C002D290
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDXGTARGETENTRY@@U?$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@QEAAXXZ @ 0x1C002D1FC (-Clear@-$DoublyLinkedList@VDXGTARGETENTRY@@U-$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@.c)
 */

void __fastcall Set<DXGTARGETENTRY>::Clear(__int64 a1)
{
  DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::Clear(a1 + 8);
}

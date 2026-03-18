/*
 * XREFs of ??_G?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@UEAAPEAXI@Z @ 0x1C0043DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAXXZ @ 0x1C0024088 (-Clear@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDEOPRE.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::`scalar deleting destructor'(
        _QWORD *P,
        char a2)
{
  *P = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::`vftable';
  DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::Clear((__int64)P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}

/*
 * XREFs of ??_G?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@UEAAPEAXI@Z @ 0x1C0034F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXXZ @ 0x1C0035388 (-Clear@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDEOPRE.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::`vftable';
  DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::Clear();
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

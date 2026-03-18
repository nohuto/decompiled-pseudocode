/*
 * XREFs of ??1?$Set@VDMMVIDPNTARGETMODE@@@@UEAA@XZ @ 0x1C0024EC4
 * Callers:
 *     ??_E?$IndexedSet@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z @ 0x1C0045970 (--_E-$IndexedSet@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z.c)
 *     ??_E?$Set@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z @ 0x1C0045A00 (--_E-$Set@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAXXZ @ 0x1C0024088 (-Clear@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDEOPRE.c)
 */

void __fastcall Set<DMMVIDPNTARGETMODE>::~Set<DMMVIDPNTARGETMODE>(_QWORD *a1)
{
  _QWORD *v1; // rcx

  *a1 = &Set<DMMVIDPNTARGETMODE>::`vftable';
  v1 = a1 + 1;
  *v1 = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::`vftable';
  DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::Clear((__int64)v1);
}

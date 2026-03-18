/*
 * XREFs of ??1?$Set@VDXGTARGETENTRY@@@@UEAA@XZ @ 0x1C002CF8C
 * Callers:
 *     ??_E?$Set@VDXGTARGETENTRY@@@@UEAAPEAXI@Z @ 0x1C002D040 (--_E-$Set@VDXGTARGETENTRY@@@@UEAAPEAXI@Z.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C01D92F4 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDXGTARGETENTRY@@U?$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@QEAAXXZ @ 0x1C002D1FC (-Clear@-$DoublyLinkedList@VDXGTARGETENTRY@@U-$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@.c)
 */

__int64 __fastcall Set<DXGTARGETENTRY>::~Set<DXGTARGETENTRY>(_QWORD *a1)
{
  *a1 = &Set<DXGTARGETENTRY>::`vftable';
  a1[1] = &DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::`vftable';
  return DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::Clear();
}

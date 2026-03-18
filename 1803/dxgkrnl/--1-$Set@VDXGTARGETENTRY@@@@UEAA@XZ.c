/*
 * XREFs of ??1?$Set@VDXGTARGETENTRY@@@@UEAA@XZ @ 0x1C001A078
 * Callers:
 *     ??_E?$Set@VDXGTARGETENTRY@@@@UEAAPEAXI@Z @ 0x1C0038650 (--_E-$Set@VDXGTARGETENTRY@@@@UEAAPEAXI@Z.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C0110F98 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDXGTARGETENTRY@@U?$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@QEAAXXZ @ 0x1C001A0A4 (-Clear@-$DoublyLinkedList@VDXGTARGETENTRY@@U-$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@.c)
 */

__int64 __fastcall Set<DXGTARGETENTRY>::~Set<DXGTARGETENTRY>(_QWORD *a1)
{
  _QWORD *v1; // rcx

  *a1 = &Set<DXGTARGETENTRY>::`vftable';
  v1 = a1 + 1;
  *v1 = &DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::`vftable';
  return DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::Clear(v1);
}

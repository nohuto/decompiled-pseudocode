/*
 * XREFs of ??1?$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ @ 0x1C000A778
 * Callers:
 *     ??1DMMVIDPNSOURCESET@@UEAA@XZ @ 0x1C000A540 (--1DMMVIDPNSOURCESET@@UEAA@XZ.c)
 *     ??_E?$IndexedSet@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z @ 0x1C0036390 (--_E-$IndexedSet@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z.c)
 *     ??_E?$Set@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z @ 0x1C0036410 (--_E-$Set@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAXXZ @ 0x1C00059E4 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@.c)
 */

void __fastcall Set<DMMVIDPNSOURCE>::~Set<DMMVIDPNSOURCE>(_QWORD *a1)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rcx

  *a1 = &Set<DMMVIDPNSOURCE>::`vftable';
  v1 = (void (__fastcall ***)(_QWORD, __int64))(a1 + 1);
  *v1 = (void (__fastcall **)(_QWORD, __int64))&DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::Clear(v1);
}

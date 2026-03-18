/*
 * XREFs of ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C0024E40
 * Callers:
 *     ??_G?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C0045920 (--_G-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z.c)
 *     ??_E?$Set@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C00459C0 (--_E-$Set@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAXXZ @ 0x1C000590C (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE.c)
 */

_QWORD *__fastcall Set<DMMVIDPNSOURCEMODE>::~Set<DMMVIDPNSOURCEMODE>(_QWORD *a1)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rcx

  *a1 = &Set<DMMVIDPNSOURCEMODE>::`vftable';
  v1 = (void (__fastcall ***)(_QWORD, __int64))(a1 + 1);
  *v1 = (void (__fastcall **)(_QWORD, __int64))&DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  return DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::Clear(v1);
}

/*
 * XREFs of ??_G?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z @ 0x1C0045580
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAXXZ @ 0x1C000C9B0 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDPNSOURCE>::`scalar deleting destructor'(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl

  v4 = a2;
  *a1 = &DoublyLinkedList<DMMVIDPNSOURCE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCE>::Clear((__int64)a1, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(a1);
  return a1;
}

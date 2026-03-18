/*
 * XREFs of ??_E?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@@@UEAAPEAXI@Z @ 0x1C0045540
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@@@QEAAXXZ @ 0x1C000C478 (-Clear@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDPNPRESENTPATH>::`vector deleting destructor'(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl

  v4 = a2;
  *a1 = &DoublyLinkedList<DMMVIDPNPRESENTPATH>::`vftable';
  DoublyLinkedList<DMMVIDPNPRESENTPATH>::Clear((__int64)a1, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(a1);
  return a1;
}

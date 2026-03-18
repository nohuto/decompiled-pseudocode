/*
 * XREFs of ??_G?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@@@UEAAPEAXI@Z @ 0x1C0044330
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@@@QEAAXXZ @ 0x1C0044738 (-Clear@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDEOPRESENTTARGET>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &DoublyLinkedList<DMMVIDEOPRESENTTARGET>::`vftable';
  DoublyLinkedList<DMMVIDEOPRESENTTARGET>::Clear();
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

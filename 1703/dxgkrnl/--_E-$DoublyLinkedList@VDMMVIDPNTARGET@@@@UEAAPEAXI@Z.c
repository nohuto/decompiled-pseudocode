/*
 * XREFs of ??_E?$DoublyLinkedList@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z @ 0x1C00455C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAAXXZ @ 0x1C00089A8 (-Clear@-$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

void (__fastcall ***__fastcall DoublyLinkedList<DMMVIDPNTARGET>::`vector deleting destructor'(
        void (__fastcall ***a1)(_QWORD, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4))(_QWORD, __int64)
{
  char v4; // bl

  v4 = a2;
  *a1 = (void (__fastcall **)(_QWORD, __int64))&DoublyLinkedList<DMMVIDPNTARGET>::`vftable';
  DoublyLinkedList<DMMVIDPNTARGET>::Clear(a1, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(a1);
  return a1;
}

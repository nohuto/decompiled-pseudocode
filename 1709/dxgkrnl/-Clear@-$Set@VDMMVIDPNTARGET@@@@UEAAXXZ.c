/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNTARGET@@@@UEAAXXZ @ 0x1C00364B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAXXZ @ 0x1C00059E4 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@.c)
 */

void __fastcall Set<DMMVIDPNTARGET>::Clear(__int64 a1)
{
  DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::Clear((void (__fastcall ***)(_QWORD, __int64))(a1 + 8));
}

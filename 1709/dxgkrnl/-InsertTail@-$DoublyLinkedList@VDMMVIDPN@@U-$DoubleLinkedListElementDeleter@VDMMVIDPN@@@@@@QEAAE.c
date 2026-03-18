/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000E51C
 * Callers:
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000E490 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0035498 (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C000E4CC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@.c)
 */

char __fastcall DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::InsertTail(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  char result; // al

  if ( DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(a1, a2) )
    return 0;
  v4 = *(_QWORD **)(v2 + 24);
  v5 = (_QWORD *)(v3 + 8);
  if ( *v4 != v2 + 16 )
    __fastfail(3u);
  *v5 = v2 + 16;
  *(_QWORD *)(v3 + 16) = v4;
  *v4 = v5;
  *(_QWORD *)(v2 + 24) = v5;
  result = 1;
  ++*(_QWORD *)(v2 + 32);
  return result;
}

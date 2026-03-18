/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C0005078
 * Callers:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C00048F0 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C00A3164 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00050C4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 */

char DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::InsertTail()
{
  __int64 v0; // r10
  __int64 v1; // r11
  _QWORD *v2; // rdx
  _QWORD *v3; // rcx
  char result; // al

  if ( (unsigned __int8)DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference() )
    return 0;
  v2 = *(_QWORD **)(v0 + 24);
  v3 = (_QWORD *)(v1 + 8);
  if ( *v2 != v0 + 16 )
    __fastfail(3u);
  *v3 = v0 + 16;
  *(_QWORD *)(v1 + 16) = v2;
  *v2 = v3;
  *(_QWORD *)(v0 + 24) = v3;
  result = 1;
  ++*(_QWORD *)(v0 + 32);
  return result;
}

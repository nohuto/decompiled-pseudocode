/*
 * XREFs of ?Add@?$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C0009CEC
 * Callers:
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C00D440C (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C0009DF8 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURC.c)
 */

char __fastcall Set<DMMVIDPNSOURCE>::Add(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  if ( v2 != a1 + 24 )
    v3 = v2 - 8;
  if ( v3 )
  {
    do
    {
      if ( v3 == a2 )
        break;
      v5 = *(_QWORD *)(v3 + 8);
      v3 = v5 - 8;
      if ( v5 == a1 + 24 )
        v3 = 0LL;
    }
    while ( v3 );
    if ( v3 )
      return 0;
  }
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::InsertTail(a1 + 8) != 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v8);
  }
  return 1;
}

/*
 * XREFs of ?Add@?$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C000C92C
 * Callers:
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1C00F481C (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C0002B8C (-InsertTail@-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z.c)
 */

char __fastcall Set<DMMVIDPNSOURCE>::Add(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  _QWORD *v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 == a1 + 24 || (v4 = (_QWORD *)(v3 - 8)) == 0LL )
  {
LABEL_7:
    if ( DoublyLinkedList<DMMVIDPNSOURCE>::InsertTail((_QWORD *)(a1 + 8), a2) != 1 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v11);
    }
    return 1;
  }
  else
  {
    while ( v4 != a2 )
    {
      v5 = v4[1];
      v4 = (_QWORD *)(v5 - 8);
      if ( v5 == a1 + 24 )
        v4 = 0LL;
      if ( !v4 )
        goto LABEL_7;
    }
    return 0;
  }
}

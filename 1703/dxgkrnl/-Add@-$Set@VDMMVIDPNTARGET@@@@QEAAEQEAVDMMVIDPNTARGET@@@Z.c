/*
 * XREFs of ?Add@?$Set@VDMMVIDPNTARGET@@@@QEAAEQEAVDMMVIDPNTARGET@@@Z @ 0x1C0021364
 * Callers:
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C016D240 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@Z @ 0x1C0020F80 (-InsertTail@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAEQEAV-$Aut.c)
 */

char __fastcall Set<DMMVIDPNTARGET>::Add(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  _QWORD *v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 == a1 + 24 || (v4 = (_QWORD *)(v3 - 8)) == 0LL )
  {
LABEL_7:
    if ( DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::InsertTail((_QWORD *)(a1 + 8), a2) != 1 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v10);
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

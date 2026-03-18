/*
 * XREFs of ?Add@?$Set@VDMMVIDPNTARGET@@@@QEAAEQEAVDMMVIDPNTARGET@@@Z @ 0x1C001E0F4
 * Callers:
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C01709C8 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@@@QEAAEQEAV?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@Z @ 0x1C001D908 (-InsertTail@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@U-$DoubleLinkedL.c)
 */

char __fastcall Set<DMMVIDPNTARGET>::Add(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  _QWORD *v4; // r8
  __int64 v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 != a1 + 24 )
  {
    v4 = (_QWORD *)(v3 - 8);
    if ( v4 )
    {
      do
      {
        if ( v4 == a2 )
          break;
        v5 = v4[1];
        v4 = (_QWORD *)(v5 - 8);
        if ( v5 == a1 + 24 )
          v4 = 0LL;
      }
      while ( v4 );
      if ( v4 )
        return 0;
    }
  }
  if ( DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>>::InsertTail(
         (_QWORD *)(a1 + 8),
         a2) != 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v8);
  }
  return 1;
}

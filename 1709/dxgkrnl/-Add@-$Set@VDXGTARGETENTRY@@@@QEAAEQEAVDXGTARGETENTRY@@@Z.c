/*
 * XREFs of ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x1C002D0F8
 * Callers:
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C01D9460 (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C01D9D3C (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C002D2A8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C002D310 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 */

char __fastcall Set<DXGTARGETENTRY>::Add(__int64 a1, __int64 a2)
{
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rax

  if ( Set<DXGTARGETENTRY>::FindByValue() )
    return 0;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                          a1 + 8,
                          a2) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v8 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v8);
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 32);
    v7 = (_QWORD *)(a2 + 8);
    if ( *v6 != a1 + 24 )
      __fastfail(3u);
    *v7 = a1 + 24;
    *(_QWORD *)(a2 + 16) = v6;
    *v6 = v7;
    *(_QWORD *)(a1 + 32) = v7;
    ++*(_QWORD *)(a1 + 40);
  }
  return 1;
}

/*
 * XREFs of ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0006EFC
 * Callers:
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BC008 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C0006E70 (-FindByValue@-$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@QEAAEQEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0006FD4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U-$DoubleLinkedListElementDeleter@.c)
 */

char __fastcall Set<DMMVIDPNPRESENTPATH>::Add(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v8; // rax

  if ( Set<DMMVIDPNPRESENTPATH>::FindByValue(a1, a2) )
    return 0;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::ContainsByReference(
                          a1 + 8,
                          a2) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v8 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v8);
  }
  else
  {
    v5 = *(_QWORD **)(a1 + 32);
    v6 = (_QWORD *)(a2 + 8);
    if ( *v5 != a1 + 24 )
      __fastfail(3u);
    *v6 = a1 + 24;
    *(_QWORD *)(a2 + 16) = v5;
    *v5 = v6;
    *(_QWORD *)(a1 + 32) = v6;
    ++*(_QWORD *)(a1 + 40);
  }
  return 1;
}

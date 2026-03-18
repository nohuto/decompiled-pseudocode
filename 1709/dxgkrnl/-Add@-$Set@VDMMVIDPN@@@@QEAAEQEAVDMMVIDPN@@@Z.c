/*
 * XREFs of ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000E490
 * Callers:
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A881C (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8950 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000E448 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C000E51C (-InsertTail@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAE.c)
 */

char __fastcall Set<DMMVIDPN>::Add(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  __int64 v4; // rcx
  __int64 v6; // rax

  if ( Set<DMMVIDPN>::FindByValue(a1, a2) )
    return 0;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::InsertTail(a1 + 8, v3) != 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return 1;
}

/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAXXZ @ 0x1C0035408
 * Callers:
 *     ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C0034A00 (--1-$Queue@VDMMVIDPN@@@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@UEAAPEAXI@Z @ 0x1C0034FC0 (--_G-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Queue@VDMMVIDPN@@@@UEAAXXZ @ 0x1C0035480 (-Clear@-$Queue@VDMMVIDPN@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@@@QEAAPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@XZ @ 0x1C0035F3C (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U-$DoubleLinkedLis.c)
 */

void __fastcall DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::Clear(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = (_QWORD *)(a1 + 16);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::RemoveHead(a1);
    ReferenceCounted::Release((ReferenceCounted *)(v3 + 24));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v4 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v4);
  }
}

/*
 * XREFs of ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C000EBF0
 * Callers:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0006A54 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0006B90 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C000A804 (-InsertTail@-$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@U-$DoubleLinkedListElementDelet.c)
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C000EA0C (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@@@QEAAPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@XZ @ 0x1C0035F3C (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U-$DoubleLinkedLis.c)
 */

char __fastcall Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::Enqueue(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = (_QWORD *)a1[3];
  if ( v2 != a1 + 3 )
  {
    v4 = v2 - 1;
    if ( v4 )
    {
      do
      {
        if ( v4 == a2 )
          break;
        v5 = (_QWORD *)v4[1];
        v4 = v5 - 1;
        if ( v5 == a1 + 3 )
          v4 = 0LL;
      }
      while ( v4 );
      if ( v4 )
        return 0;
    }
  }
  if ( DoublyLinkedList<VIDPN_MGR::DISPMODECHANGEREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::DISPMODECHANGEREQUEST>>::InsertTail(
         a1 + 1,
         a2) != 1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v9);
  }
  v7 = a1[7];
  if ( v7 )
  {
    if ( a1[5] > v7 )
    {
      v10 = DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::RemoveHead(a1 + 1);
      NonReferenceCounted::Release((NonReferenceCounted *)(v10 + 24));
    }
  }
  return 1;
}

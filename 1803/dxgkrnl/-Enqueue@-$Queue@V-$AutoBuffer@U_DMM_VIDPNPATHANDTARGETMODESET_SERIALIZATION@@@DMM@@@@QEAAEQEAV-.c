/*
 * XREFs of ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0044668
 * Callers:
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0044230 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C00442EC (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0217140 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C021F108 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0222170 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0222C1C (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C000AA80 (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@@@QEAAPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@XZ @ 0x1C0044D18 (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U-$DoubleLinkedLis.c)
 *     ?InsertTail@?$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C00465E8 (-InsertTail@-$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@U-$DoubleLinkedListElementDelet.c)
 */

char __fastcall Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r10
  _QWORD *v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax

  v2 = (_QWORD *)a1[3];
  v3 = 0LL;
  if ( v2 != a1 + 3 )
    v3 = v2 - 1;
  if ( v3 )
  {
    do
    {
      if ( v3 == a2 )
        break;
      v5 = (_QWORD *)v3[1];
      v3 = v5 - 1;
      if ( v5 == a1 + 3 )
        v3 = 0LL;
    }
    while ( v3 );
    if ( v3 )
      return 0;
  }
  if ( (unsigned __int8)DoublyLinkedList<VIDPN_MGR::DISPMODECHANGEREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::DISPMODECHANGEREQUEST>>::InsertTail(a1 + 1) != 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = a1[7];
  if ( v9 )
  {
    if ( a1[5] > v9 )
    {
      v10 = DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::RemoveHead(a1 + 1);
      NonReferenceCounted::Release((NonReferenceCounted *)(v10 + 24));
    }
  }
  return 1;
}

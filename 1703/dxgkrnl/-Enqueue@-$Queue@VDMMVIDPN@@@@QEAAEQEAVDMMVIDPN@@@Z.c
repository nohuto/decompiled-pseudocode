/*
 * XREFs of ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0044830
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01D3638 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0002134 (-InsertTail@-$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEAAPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@XZ @ 0x1C0044CC8 (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEA.c)
 */

char __fastcall Queue<DMMVIDPN>::Enqueue(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx

  v2 = (_QWORD *)a1[3];
  if ( v2 == a1 + 3 || (v4 = v2 - 1) == 0LL )
  {
LABEL_7:
    if ( DoublyLinkedList<DMMVIDPN>::InsertTail((__int64)(a1 + 1), a2) != 1 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = a1[7];
    if ( v11 )
    {
      if ( a1[5] > v11 )
      {
        v12 = DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::RemoveHead(a1 + 1);
        ReferenceCounted::Release((ReferenceCounted *)(v12 + 24), v13);
      }
    }
    return 1;
  }
  else
  {
    while ( v4 != (_QWORD *)a2 )
    {
      v5 = (_QWORD *)v4[1];
      v4 = v5 - 1;
      if ( v5 == a1 + 3 )
        v4 = 0LL;
      if ( !v4 )
        goto LABEL_7;
    }
    return 0;
  }
}

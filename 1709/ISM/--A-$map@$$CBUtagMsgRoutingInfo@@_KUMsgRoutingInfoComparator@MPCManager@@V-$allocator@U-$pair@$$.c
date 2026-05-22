/*
 * XREFs of ??A?$map@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@QEAAAEA_KAEBUtagMsgRoutingInfo@@@Z @ 0x18005E28C
 * Callers:
 *     ?ConnectionCreated@MPCManager@@MEAAJPEBUtagMsgRoutingInfo@@@Z @ 0x18005D880 (-ConnectionCreated@MPCManager@@MEAAJPEBUtagMsgRoutingInfo@@@Z.c)
 *     ?ConnectionClosed@MPCManager@@MEAAJPEBUtagMsgRoutingInfo@@@Z @ 0x18005DAA0 (-ConnectionClosed@MPCManager@@MEAAJPEBUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUtagMsgRoutingInfo@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUtagMsgRoutingInfo@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18005E6EC (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBUtagMsgRoutingInfo@@@2@V-$tuple@$$V@2@@-$.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@1@AEAU?$pair@$$CBUtagMsgRoutingInfo@@_K@1@PEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@1@@Z @ 0x18005E744 (--$_Insert_hint@AEAU-$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAU-$_Tree_node@U-$pair@$$CBUtagMsgR.c)
 */

unsigned int *__fastcall std::map<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>>::operator[](
        unsigned int **a1,
        unsigned int *a2)
{
  int v2; // edi
  unsigned int *v3; // rbx
  __int64 *v4; // r8
  unsigned int v5; // r10d
  bool v6; // cf
  unsigned int v7; // eax
  bool v8; // cf
  void *v9; // rax
  unsigned int *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (int)a1;
  v3 = *a1;
  v4 = (__int64 *)*((_QWORD *)*a1 + 1);
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a2;
    do
    {
      v6 = *((_DWORD *)v4 + 8) < v5;
      if ( *((_DWORD *)v4 + 8) == v5 )
        v6 = *((_DWORD *)v4 + 9) < a2[1];
      if ( v6 )
      {
        v4 = (__int64 *)v4[2];
      }
      else
      {
        v3 = (unsigned int *)v4;
        v4 = (__int64 *)*v4;
      }
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  if ( v3 == *a1 )
    goto LABEL_13;
  v7 = v3[8];
  v8 = *a2 < v7;
  if ( *a2 == v7 )
    v8 = a2[1] < v3[9];
  if ( v8 )
  {
LABEL_13:
    v11 = a2;
    v9 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<tagMsgRoutingInfo const &>,std::tuple<>>(
                   a1,
                   a2,
                   &v11);
    std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Insert_hint<std::pair<tagMsgRoutingInfo const,unsigned __int64> &,std::_Tree_node<std::pair<tagMsgRoutingInfo const,unsigned __int64>,void *> *>(
      v2,
      v9);
    v3 = v11;
  }
  return v3 + 18;
}

/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBUtagMsgRoutingInfo@@_K@1@PEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@1@@Z @ 0x18005EC54
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@1@AEAU?$pair@$$CBUtagMsgRoutingInfo@@_K@1@PEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@1@@Z @ 0x18005E744 (--$_Insert_hint@AEAU-$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAU-$_Tree_node@U-$pair@$$CBUtagMsgR.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@1@AEAU?$pair@$$CBUtagMsgRoutingInfo@@_K@1@1@Z @ 0x18005E9D0 (--$_Insert_at@AEAU-$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAU-$_Tree_node@U-$pair@$$CBUtagMsgRou.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Insert_nohint<std::pair<tagMsgRoutingInfo const,unsigned __int64> &,std::_Tree_node<std::pair<tagMsgRoutingInfo const,unsigned __int64>,void *> *>(
        __int64 ***a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        _QWORD *Block)
{
  __int64 **v8; // r8
  __int64 *v9; // rdx
  __int64 *v10; // r9
  char v11; // r10
  unsigned int v12; // ecx
  bool v13; // cf
  __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 *v17; // rax
  __int64 *i; // rax
  bool v19; // cf
  __int64 v20; // [rsp+20h] [rbp-28h]
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v8 = *a1;
    v9 = (*a1)[1];
    v10 = (__int64 *)*a1;
    v11 = 1;
    if ( !*((_BYTE *)v9 + 25) )
    {
      v12 = *a4;
      do
      {
        v10 = v9;
        v13 = v12 < *((_DWORD *)v9 + 8);
        if ( v12 == *((_DWORD *)v9 + 8) )
          v13 = a4[1] < *((_DWORD *)v9 + 9);
        v11 = v13;
        if ( v13 )
          v9 = (__int64 *)*v9;
        else
          v9 = (__int64 *)v9[2];
      }
      while ( !*((_BYTE *)v9 + 25) );
    }
    v14 = v10;
    if ( v11 )
    {
      if ( v10 == *v8 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Insert_at<std::pair<tagMsgRoutingInfo const,unsigned __int64> &,std::_Tree_node<std::pair<tagMsgRoutingInfo const,unsigned __int64>,void *> *>(
                           a1,
                           &v21,
                           1,
                           v10,
                           v20,
                           Block);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v10 + 25) )
      {
        v14 = (__int64 *)v10[2];
      }
      else
      {
        v17 = (__int64 *)*v10;
        if ( *(_BYTE *)(*v10 + 25) )
        {
          for ( i = (__int64 *)v10[1]; !*((_BYTE *)i + 25) && v14 == (__int64 *)*i; i = (__int64 *)i[1] )
            v14 = i;
          if ( !*((_BYTE *)v14 + 25) )
            v14 = i;
        }
        else
        {
          do
          {
            v14 = v17;
            v17 = (__int64 *)v17[2];
          }
          while ( !*((_BYTE *)v17 + 25) );
        }
      }
    }
    v19 = *((_DWORD *)v14 + 8) < *a4;
    if ( *((_DWORD *)v14 + 8) == *a4 )
      v19 = *((_DWORD *)v14 + 9) < a4[1];
    if ( v19 )
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Insert_at<std::pair<tagMsgRoutingInfo const,unsigned __int64> &,std::_Tree_node<std::pair<tagMsgRoutingInfo const,unsigned __int64>,void *> *>(
                         a1,
                         &v21,
                         v11,
                         v10,
                         v20,
                         Block);
      *(_BYTE *)(a2 + 8) = 1;
    }
    else
    {
      operator delete(Block);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      v15,
      Block);
    throw;
  }
  return result;
}

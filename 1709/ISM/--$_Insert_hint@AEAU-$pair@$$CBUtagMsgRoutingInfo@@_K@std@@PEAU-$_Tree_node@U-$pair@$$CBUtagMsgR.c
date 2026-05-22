/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@1@AEAU?$pair@$$CBUtagMsgRoutingInfo@@_K@1@PEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@1@@Z @ 0x18005E744
 * Callers:
 *     ??A?$map@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@QEAAAEA_KAEBUtagMsgRoutingInfo@@@Z @ 0x18005E28C (--A-$map@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V-$allocator@U-$pair@$$.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@1@AEAU?$pair@$$CBUtagMsgRoutingInfo@@_K@1@1@Z @ 0x18005E9D0 (--$_Insert_at@AEAU-$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAU-$_Tree_node@U-$pair@$$CBUtagMsgRou.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBUtagMsgRoutingInfo@@_K@1@PEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@1@@Z @ 0x18005EC54 (--$_Insert_nohint@AEAU-$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAU-$_Tree_node@U-$pair@$$CBUtagMs.c)
 */

// Hidden C++ exception states: #try_helpers=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Insert_hint<std::pair<tagMsgRoutingInfo const,unsigned __int64> &,std::_Tree_node<std::pair<tagMsgRoutingInfo const,unsigned __int64>,void *> *>(
        __int64 ***a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned int *a4,
        void *Block)
{
  int v7; // r10d
  __int64 **v9; // rcx
  unsigned int v10; // eax
  bool v11; // cf
  int v12; // r9d
  __int64 *v13; // r9
  bool v14; // cf
  unsigned int v15; // edi
  bool v16; // cf
  __int64 *v17; // rax
  __int64 *v18; // r9
  __int64 *j; // rax
  __int64 *i; // rdx
  unsigned int v21; // eax
  bool v22; // cf
  int v23; // r9d
  bool v24; // cf
  __int64 *v25; // r9
  __int64 *v26; // rax
  __int64 *k; // rax
  unsigned int v28; // eax
  bool v29; // cf
  int v30; // [rsp+38h] [rbp-20h] BYREF

  v7 = (int)a1;
  if ( !a1[1] )
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Insert_at<std::pair<tagMsgRoutingInfo const,unsigned __int64> &,std::_Tree_node<std::pair<tagMsgRoutingInfo const,unsigned __int64>,void *> *>(
      (_DWORD)a1,
      (_DWORD)a2,
      (_DWORD)a3,
      (unsigned int)*a1);
    return a2;
  }
  v9 = *a1;
  if ( a3 == *v9 )
  {
    v10 = *((_DWORD *)a3 + 8);
    v11 = *a4 < v10;
    if ( *a4 == v10 )
      v11 = a4[1] < *((_DWORD *)a3 + 9);
    if ( v11 )
    {
      v12 = (int)a3;
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Insert_at<std::pair<tagMsgRoutingInfo const,unsigned __int64> &,std::_Tree_node<std::pair<tagMsgRoutingInfo const,unsigned __int64>,void *> *>(
        v7,
        (_DWORD)a2,
        (_DWORD)a3,
        v12);
      return a2;
    }
    goto LABEL_56;
  }
  if ( a3 == (__int64 *)v9 )
  {
    v13 = v9[2];
    v14 = *((_DWORD *)v13 + 8) < *a4;
    if ( *((_DWORD *)v13 + 8) == *a4 )
      v14 = *((_DWORD *)v13 + 9) < a4[1];
    if ( v14 )
    {
      std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Insert_at<std::pair<tagMsgRoutingInfo const,unsigned __int64> &,std::_Tree_node<std::pair<tagMsgRoutingInfo const,unsigned __int64>,void *> *>(
        v7,
        (_DWORD)a2,
        0,
        (_DWORD)v13);
      return a2;
    }
    goto LABEL_56;
  }
  v15 = *((_DWORD *)a3 + 8);
  v16 = *a4 < v15;
  if ( *a4 == v15 )
    v16 = a4[1] < *((_DWORD *)a3 + 9);
  if ( !v16 )
    goto LABEL_36;
  v17 = a3;
  if ( *((_BYTE *)a3 + 25) )
  {
    v18 = (__int64 *)a3[2];
  }
  else
  {
    v18 = (__int64 *)*a3;
    if ( *(_BYTE *)(*a3 + 25) )
    {
      for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25) && v17 == (__int64 *)*i; i = (__int64 *)i[1] )
        v17 = i;
      v18 = v17;
      if ( !*((_BYTE *)v17 + 25) )
        v18 = i;
    }
    else
    {
      for ( j = (__int64 *)v18[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
        v18 = j;
    }
  }
  v21 = *((_DWORD *)v18 + 8);
  v22 = v21 < *a4;
  if ( v21 == *a4 )
    v22 = *((_DWORD *)v18 + 9) < a4[1];
  if ( v22 )
  {
    if ( *(_BYTE *)(v18[2] + 25) )
    {
      std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Insert_at<std::pair<tagMsgRoutingInfo const,unsigned __int64> &,std::_Tree_node<std::pair<tagMsgRoutingInfo const,unsigned __int64>,void *> *>(
        v7,
        (_DWORD)a2,
        0,
        (_DWORD)v18);
    }
    else
    {
      v23 = (int)a3;
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Insert_at<std::pair<tagMsgRoutingInfo const,unsigned __int64> &,std::_Tree_node<std::pair<tagMsgRoutingInfo const,unsigned __int64>,void *> *>(
        v7,
        (_DWORD)a2,
        (_DWORD)a3,
        v23);
    }
    return a2;
  }
  else
  {
LABEL_36:
    v24 = v15 < *a4;
    if ( v15 == *a4 )
      v24 = *((_DWORD *)a3 + 9) < a4[1];
    if ( !v24 )
      goto LABEL_56;
    v25 = a3;
    if ( !*((_BYTE *)a3 + 25) )
    {
      v26 = (__int64 *)a3[2];
      if ( *((_BYTE *)v26 + 25) )
      {
        for ( k = (__int64 *)a3[1]; !*((_BYTE *)k + 25) && v25 == (__int64 *)k[2]; k = (__int64 *)k[1] )
          v25 = k;
        v25 = k;
      }
      else
      {
        do
        {
          v25 = v26;
          v26 = (__int64 *)*v26;
        }
        while ( !*((_BYTE *)v26 + 25) );
      }
    }
    if ( v25 != (__int64 *)v9 )
    {
      v28 = *((_DWORD *)v25 + 8);
      v29 = *a4 < v28;
      if ( *a4 == v28 )
        v29 = a4[1] < *((_DWORD *)v25 + 9);
      if ( !v29 )
      {
LABEL_56:
        *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Insert_nohint<std::pair<tagMsgRoutingInfo const,unsigned __int64> &,std::_Tree_node<std::pair<tagMsgRoutingInfo const,unsigned __int64>,void *> *>(
                           v7,
                           (int)&v30,
                           (int)a3,
                           (int)a4,
                           Block);
        return a2;
      }
    }
    if ( *(_BYTE *)(a3[2] + 25) )
    {
      std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Insert_at<std::pair<tagMsgRoutingInfo const,unsigned __int64> &,std::_Tree_node<std::pair<tagMsgRoutingInfo const,unsigned __int64>,void *> *>(
        v7,
        (_DWORD)a2,
        0,
        (_DWORD)a3);
    }
    else
    {
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Insert_at<std::pair<tagMsgRoutingInfo const,unsigned __int64> &,std::_Tree_node<std::pair<tagMsgRoutingInfo const,unsigned __int64>,void *> *>(
        v7,
        (_DWORD)a2,
        (_DWORD)a3,
        (_DWORD)v25);
    }
    return a2;
  }
}

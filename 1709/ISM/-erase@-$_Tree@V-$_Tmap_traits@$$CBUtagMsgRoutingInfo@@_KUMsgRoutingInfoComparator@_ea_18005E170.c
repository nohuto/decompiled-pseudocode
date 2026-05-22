/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAA_KAEBUtagMsgRoutingInfo@@@Z @ 0x18005E170
 * Callers:
 *     ?ConnectionClosed@MPCManager@@MEAAJPEBUtagMsgRoutingInfo@@@Z @ 0x18005DAA0 (-ConnectionClosed@MPCManager@@MEAAJPEBUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@0@Z @ 0x18005E490 (-erase@-$_Tree@V-$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@_ea_18005E490.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::erase(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 *v2; // r11
  __int64 *v5; // r10
  __int64 *v6; // r8
  __int64 *v7; // r9
  unsigned int v8; // edx
  bool v9; // cf
  bool v10; // cf
  unsigned int v11; // edx
  bool v12; // cf
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // rcx
  __int64 *i; // rcx
  char v18; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)*a1;
  v5 = (__int64 *)*a1;
  v6 = *(__int64 **)(*a1 + 8);
  v7 = v6;
  while ( !*((_BYTE *)v7 + 25) )
  {
    v8 = *((_DWORD *)v7 + 8);
    v9 = v8 < *a2;
    if ( v8 == *a2 )
      v9 = *((_DWORD *)v7 + 9) < a2[1];
    if ( v9 )
    {
      v7 = (__int64 *)v7[2];
    }
    else
    {
      if ( *((_BYTE *)v5 + 25) )
      {
        v10 = *a2 < v8;
        if ( *a2 == v8 )
          v10 = a2[1] < *((_DWORD *)v7 + 9);
        if ( v10 )
          v5 = v7;
      }
      v2 = v7;
      v7 = (__int64 *)*v7;
    }
  }
  if ( !*((_BYTE *)v5 + 25) )
    v6 = (__int64 *)*v5;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v11 = *a2;
    do
    {
      v12 = v11 < *((_DWORD *)v6 + 8);
      if ( v11 == *((_DWORD *)v6 + 8) )
        v12 = a2[1] < *((_DWORD *)v6 + 9);
      if ( v12 )
      {
        v5 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  v13 = v2;
  v14 = 0LL;
  while ( v13 != v5 )
  {
    ++v14;
    if ( !*((_BYTE *)v13 + 25) )
    {
      v15 = (__int64 *)v13[2];
      if ( *((_BYTE *)v15 + 25) )
      {
        for ( i = (__int64 *)v13[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v13 = i;
        v13 = i;
      }
      else
      {
        do
        {
          v13 = v15;
          v15 = (__int64 *)*v15;
        }
        while ( !*((_BYTE *)v15 + 25) );
      }
    }
  }
  std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::erase(
    a1,
    &v18);
  return v14;
}

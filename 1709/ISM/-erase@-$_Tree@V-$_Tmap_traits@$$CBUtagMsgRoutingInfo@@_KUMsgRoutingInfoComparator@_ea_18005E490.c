/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@0@Z @ 0x18005E490
 * Callers:
 *     ??1MPCManager@@UEAA@XZ @ 0x18005D358 (--1MPCManager@@UEAA@XZ.c)
 *     ??1?$map@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@QEAA@XZ @ 0x18005D48C (--1-$map@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V-$allocator@U-$pair@$$.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAA_KAEBUtagMsgRoutingInfo@@@Z @ 0x18005E170 (-erase@-$_Tree@V-$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@_ea_18005E170.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@@Z @ 0x18001E5B8 (-erase@-$_Tree@V-$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@@Z @ 0x18001EA90 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::erase(
        __int64 **a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v5; // rbx
  __int64 *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *i; // rbx
  __int64 *v11; // r8
  __int64 *v12; // rax
  __int64 *j; // rax
  __int64 *v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v8 = *a1;
  if ( a3 == (__int64 *)**a1 && a4 == v8 )
  {
    v9 = (_QWORD *)v8[1];
    for ( i = v9; !*((_BYTE *)i + 25); v9 = i )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Erase(
        (__int64)a1,
        (void *)i[2]);
      i = (_QWORD *)*i;
      operator delete(v9);
    }
    (*a1)[1] = (__int64)*a1;
    **a1 = (__int64)*a1;
    (*a1)[2] = (__int64)*a1;
    a1[1] = 0LL;
    *a2 = (__int64 *)**a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      v11 = v5;
      if ( !*((_BYTE *)v5 + 25) )
      {
        v12 = (__int64 *)v5[2];
        if ( *((_BYTE *)v12 + 25) )
        {
          for ( j = (__int64 *)v5[1]; !*((_BYTE *)j + 25) && v5 == (__int64 *)j[2]; j = (__int64 *)j[1] )
            v5 = j;
          v5 = j;
        }
        else
        {
          do
          {
            v5 = v12;
            v12 = (__int64 *)*v12;
          }
          while ( !*((_BYTE *)v12 + 25) );
        }
      }
      std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::erase(
        a1,
        &v15,
        v11);
    }
    *a2 = v5;
  }
  return a2;
}

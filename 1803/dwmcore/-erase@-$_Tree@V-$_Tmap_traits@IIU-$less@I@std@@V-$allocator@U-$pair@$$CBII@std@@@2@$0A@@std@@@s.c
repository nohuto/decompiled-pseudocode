/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@0@Z @ 0x1800D38A0
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800D1C28 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@2@@Z @ 0x1800D37FC (-_Erase@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@std@@@2@$0A@@std@@@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@PEAU32@@Z @ 0x180147720 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@s.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@@Z @ 0x18014784C (-erase@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@std@@@2_ea_18014784C.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::erase(
        __int64 **a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 *v6; // rdx
  __int64 v7; // rbx
  __int64 *v9; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 i; // rax
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v6 = *a1;
  v7 = a3;
  if ( a3 == **a1 && a4 == v6 )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Erase(
      (__int64)a1,
      (char *)v6[1]);
    (*a1)[1] = (__int64)*a1;
    **a1 = (__int64)*a1;
    (*a1)[2] = (__int64)*a1;
    v9 = *a1;
    a1[1] = 0LL;
    *a2 = *v9;
  }
  else
  {
    while ( (__int64 *)v7 != a4 )
    {
      v11 = v7;
      if ( !*(_BYTE *)(v7 + 25) )
      {
        v12 = *(_QWORD *)(v7 + 16);
        if ( *(_BYTE *)(v12 + 25) )
        {
          for ( i = *(_QWORD *)(v7 + 8); !*(_BYTE *)(i + 25) && v7 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
            v7 = i;
        }
        else
        {
          i = std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>>::_Min(
                v12,
                v6,
                v7);
        }
        v7 = i;
      }
      std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::erase(
        a1,
        &v14,
        v11);
    }
    *a2 = v7;
  }
  return a2;
}

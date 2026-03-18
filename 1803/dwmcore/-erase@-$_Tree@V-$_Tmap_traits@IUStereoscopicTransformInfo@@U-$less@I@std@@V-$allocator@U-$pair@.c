/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@2@0@Z @ 0x1801FD4B8
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1801FD878 (-erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicTransformInfo@@U-$less@I@std@@V-$alloc_ea_1801FD878.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@PEAU32@@Z @ 0x180147720 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@s.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAX@2@@Z @ 0x1801FCFC4 (-_Erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicTransformInfo@@U-$less@I@std@@V-$allocator@U-$pair.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@2@@Z @ 0x1801FD57C (-erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicTransformInfo@@U-$less@I@std@@V-$alloc_ea_1801FD57C.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicTransformInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicTransformInfo>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  __int64 v11; // rcx
  _QWORD *i; // rax
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v6 = *a1;
  v7 = a3;
  if ( a3 == *(_QWORD **)*a1 && a4 == (_QWORD *)v6 )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicTransformInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicTransformInfo>>,0>>::_Erase(
      (__int64)a1,
      *(char **)(v6 + 8));
    *(_QWORD *)(*a1 + 8LL) = *a1;
    *(_QWORD *)*a1 = *a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
    v9 = (_QWORD *)*a1;
    a1[1] = 0LL;
    *a2 = *v9;
  }
  else
  {
    while ( v7 != a4 )
    {
      v10 = v7;
      if ( !*((_BYTE *)v7 + 25) )
      {
        v11 = v7[2];
        if ( *(_BYTE *)(v11 + 25) )
        {
          for ( i = (_QWORD *)v7[1]; !*((_BYTE *)i + 25) && v7 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
            v7 = i;
        }
        else
        {
          i = std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>>::_Min((_QWORD *)v11);
        }
        v7 = i;
      }
      std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicTransformInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicTransformInfo>>,0>>::erase(
        a1,
        &v14,
        v10);
    }
    *a2 = v7;
  }
  return a2;
}

/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1801FD878
 * Callers:
 *     ?UnregisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXI@Z @ 0x1801FCEE8 (-UnregisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXI@Z.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@PEAU32@@Z @ 0x180147720 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@s.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@2@0@Z @ 0x1801FD4B8 (-erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicTransformInfo@@U-$less@I@std@@V-$allocator@U-$pair@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicTransformInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicTransformInfo>>,0>>::erase(
        _QWORD *a1,
        unsigned int *a2)
{
  _QWORD *v2; // r10
  _QWORD *v5; // r9
  __int64 *v6; // rax
  __int64 *v7; // r8
  unsigned int v8; // r11d
  unsigned int v9; // ecx
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 i; // rcx
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*a1;
  v5 = (_QWORD *)*a1;
  v6 = *(__int64 **)(*a1 + 8LL);
  v7 = v6;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( *((_DWORD *)v7 + 7) >= v8 )
      {
        if ( *((_BYTE *)v5 + 25) && v8 < *((_DWORD *)v7 + 7) )
          v5 = v7;
        v2 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( !*((_BYTE *)v5 + 25) )
    v6 = (__int64 *)*v5;
  while ( !*((_BYTE *)v6 + 25) )
  {
    v9 = *((_DWORD *)v6 + 7);
    v10 = v6;
    if ( *a2 >= v9 )
      v6 = (__int64 *)v6[2];
    else
      v6 = (__int64 *)*v6;
    if ( *a2 >= v9 )
      v10 = v5;
    v5 = v10;
  }
  v11 = v2;
  v12 = 0LL;
  while ( v11 != v5 )
  {
    ++v12;
    if ( !*((_BYTE *)v11 + 25) )
    {
      v13 = v11[2];
      if ( *(_BYTE *)(v13 + 25) )
      {
        for ( i = v11[1]; !*(_BYTE *)(i + 25) && v11 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v11 = (_QWORD *)i;
        v11 = (_QWORD *)i;
      }
      else
      {
        v11 = std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>>::_Min((_QWORD *)v13);
      }
    }
  }
  std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicTransformInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicTransformInfo>>,0>>::erase(
    a1,
    &v16,
    v2,
    v5);
  return v12;
}

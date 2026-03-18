/*
 * XREFs of ??$_Insert_at@AEAU?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@1@AEAU?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@1@1@Z @ 0x180012A10
 * Callers:
 *     ??$emplace@AEAPEAVCD3DDeviceLevel1@@UCache@CGradientSource@@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCD3DDeviceLevel1@@$$QEAUCache@CGradientSource@@@Z @ 0x180012AA8 (--$emplace@AEAPEAVCD3DDeviceLevel1@@UCache@CGradientSource@@@-$_Tree@V-$_Tmap_traits@PEBVCD3DDev.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x180190064 (-_Lrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 *     ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x1801BDA68 (-_Destroy_if_node@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x1801EDA9C (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Insert_at<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache> &,std::_Tree_node<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>,void *> *>(
        _QWORD *a1,
        __int64 *a2,
        char a3,
        _QWORD *a4,
        int a5,
        __int64 a6)
{
  unsigned __int64 v6; // rax
  _QWORD *v7; // r11
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 *result; // rax
  __int64 *v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int64 *v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // r9
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = a1[1];
  v7 = a1;
  if ( v6 >= 0x492492492492491LL )
  {
    std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Destroy_if_node(
      0x492492492492491LL,
      a6);
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  }
  v9 = a6;
  a1[1] = v6 + 1;
  *(_QWORD *)(a6 + 8) = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = a6;
    *(_QWORD *)*a1 = a6;
    v10 = *a1;
LABEL_4:
    *(_QWORD *)(v10 + 16) = a6;
    goto LABEL_5;
  }
  if ( a3 )
  {
    *a4 = a6;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = a6;
    goto LABEL_5;
  }
  a4[2] = a6;
  v10 = *a1;
  if ( a4 == *(_QWORD **)(*a1 + 16LL) )
    goto LABEL_4;
LABEL_5:
  v11 = *(_QWORD *)(a6 + 8);
  v12 = a6;
  while ( !*(_BYTE *)(v11 + 24) )
  {
    v15 = *(__int64 **)(v12 + 8);
    v16 = v12;
    v17 = v12;
    v18 = (__int64 *)v15[1];
    v19 = (__int64 *)*v18;
    if ( v15 == (__int64 *)*v18 )
    {
      v19 = (__int64 *)v18[2];
      if ( !*((_BYTE *)v19 + 24) )
        goto LABEL_28;
      v20 = v15[2];
      if ( v12 == v20 )
        std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Lrotate(
          v7,
          v15);
      v21 = (__int64)v15;
      if ( v17 != v20 )
        v21 = v16;
      *(_BYTE *)(*(_QWORD *)(v21 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 8LL) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(v7);
    }
    else
    {
      if ( !*((_BYTE *)v19 + 24) )
      {
LABEL_28:
        *((_BYTE *)v15 + 24) = 1;
        *((_BYTE *)v19 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = 0;
        v12 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL);
        goto LABEL_27;
      }
      v22 = *v15;
      if ( v12 == *v15 )
        std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(v7);
      v23 = (__int64)v15;
      if ( v16 != v22 )
        v23 = v16;
      *(_BYTE *)(*(_QWORD *)(v23 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) + 8LL) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Lrotate(
        v7,
        *(_QWORD *)(*(_QWORD *)(v23 + 8) + 8LL));
    }
LABEL_27:
    v11 = *(_QWORD *)(v12 + 8);
  }
  v13 = *(_QWORD *)(*v7 + 8LL);
  result = a2;
  *a2 = v9;
  *(_BYTE *)(v13 + 24) = 1;
  return result;
}

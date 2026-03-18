/*
 * XREFs of ??$emplace@AEAPEAVCD3DDeviceLevel1@@UCache@CGradientSource@@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCD3DDeviceLevel1@@$$QEAUCache@CGradientSource@@@Z @ 0x180012AA8
 * Callers:
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z @ 0x180012868 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@1@AEAU?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@1@1@Z @ 0x180012A10 (--$_Insert_at@AEAU-$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAU-$_Tree_node@U-.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x1801BDA68 (-_Destroy_if_node@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::emplace<CD3DDeviceLevel1 * &,CGradientSource::Cache>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  char v11; // r8
  _QWORD *v12; // r9
  __int64 *v13; // rax
  _QWORD *v14; // rbx
  __int64 *v15; // rax
  __int64 v17; // rax
  __int64 i; // rax
  int v19; // [rsp+20h] [rbp-28h]
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v8 = std::_Allocate<std::_Default_allocate_traits<1>>(1LL, 56LL);
  *(_QWORD *)v8 = *a1;
  *(_QWORD *)(v8 + 8) = *a1;
  *(_QWORD *)(v8 + 16) = *a1;
  *(_WORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 32) = *a3;
  *(_QWORD *)(v8 + 40) = 0LL;
  if ( (_QWORD *)(v8 + 40) != a4 )
  {
    *(_QWORD *)(v8 + 40) = *a4;
    *a4 = 0LL;
  }
  v9 = a4 + 1;
  *(_QWORD *)(v8 + 48) = 0LL;
  if ( (_QWORD *)(v8 + 48) != a4 + 1 )
  {
    *(_QWORD *)(v8 + 48) = *v9;
    *v9 = 0LL;
  }
  v10 = (_QWORD *)*a1;
  v11 = 1;
  v12 = (_QWORD *)*a1;
  v13 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v13 + 25) )
  {
    v12 = v13;
    if ( *(_QWORD *)(v8 + 32) >= (unsigned __int64)v13[4] )
    {
      v13 = (__int64 *)v13[2];
      v11 = 0;
    }
    else
    {
      v13 = (__int64 *)*v13;
      v11 = 1;
    }
  }
  v14 = v12;
  if ( v11 )
  {
    if ( v12 == (_QWORD *)*v10 )
    {
      v11 = 1;
      goto LABEL_9;
    }
    if ( *((_BYTE *)v12 + 25) )
    {
      v14 = (_QWORD *)v12[2];
    }
    else
    {
      v17 = *v12;
      if ( *(_BYTE *)(*v12 + 25LL) )
      {
        for ( i = v12[1]; !*(_BYTE *)(i + 25) && v14 == *(_QWORD **)i; i = *(_QWORD *)(i + 8) )
          v14 = (_QWORD *)i;
        if ( !*((_BYTE *)v14 + 25) )
          v14 = (_QWORD *)i;
      }
      else
      {
        do
        {
          v14 = (_QWORD *)v17;
          v17 = *(_QWORD *)(v17 + 16);
        }
        while ( !*(_BYTE *)(v17 + 25) );
      }
    }
  }
  if ( v14[4] >= *(_QWORD *)(v8 + 32) )
  {
    std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Destroy_if_node(
      v10,
      v8);
    *(_BYTE *)(a2 + 8) = 0;
    goto LABEL_10;
  }
LABEL_9:
  v15 = std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Insert_at<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache> &,std::_Tree_node<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>,void *> *>(
          a1,
          &v20,
          v11,
          v12,
          v19,
          v8);
  *(_BYTE *)(a2 + 8) = 1;
  v14 = (_QWORD *)*v15;
LABEL_10:
  *(_QWORD *)a2 = v14;
  return a2;
}

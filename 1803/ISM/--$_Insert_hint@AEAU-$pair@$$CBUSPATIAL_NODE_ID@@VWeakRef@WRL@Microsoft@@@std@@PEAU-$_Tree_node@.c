/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1800CFCB8
 * Callers:
 *     ?RegisterNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x1800C41B0 (-RegisterNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UE.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x180008DF4 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE_ID@@VWeak.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@1@1@Z @ 0x18009A250 (--$_Insert_at@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU-$_Tree_node@U-.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1800D0DF8 (--$_Insert_nohint@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU-$_Tree_nod.c)
 *     memcmp_0 @ 0x1800E3211 (memcmp_0.c)
 */

// Hidden C++ exception states: #try_helpers=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_hint<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        const void *a4,
        _QWORD *a5)
{
  _QWORD *v9; // rsi
  __int64 v11; // r8
  _QWORD *v12; // rbx
  __int64 **v13; // rax
  int v14; // eax
  __int64 v15; // rbx
  _QWORD *v16; // rdx
  __int64 i; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // [rsp+20h] [rbp-58h]
  char v22[24]; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v23; // [rsp+80h] [rbp+8h] BYREF

  v23 = 0LL;
  v9 = (_QWORD *)*a1;
  if ( !a1[1] )
  {
    std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
      a1,
      a2,
      1,
      v9,
      v21,
      a5);
    return a2;
  }
  if ( a3 == *v9 )
  {
    if ( memcmp_0(a4, (const void *)(a3 + 32), 0x10uLL) < 0 )
    {
      std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
        a1,
        a2,
        1,
        (_QWORD *)a3,
        v21,
        a5);
      return a2;
    }
    goto LABEL_32;
  }
  if ( (_QWORD *)a3 == v9 )
  {
    v12 = (_QWORD *)v9[2];
    if ( memcmp_0(v12 + 4, a4, 0x10uLL) < 0 )
    {
      std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
        a1,
        a2,
        0,
        v12,
        v21,
        a5);
      return a2;
    }
    goto LABEL_32;
  }
  if ( memcmp_0(a4, (const void *)(a3 + 32), 0x10uLL) >= 0
    || (v23 = (__int64 *)a3,
        v13 = std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v23),
        memcmp_0(*v13 + 4, a4, 0x10uLL) >= 0) )
  {
    v14 = memcmp_0((const void *)(a3 + 32), a4, 0x10uLL);
    v11 = 0LL;
    if ( v14 >= 0 )
      goto LABEL_32;
    v15 = a3;
    v23 = (__int64 *)a3;
    v16 = (_QWORD *)a3;
    if ( !*(_BYTE *)(a3 + 25) )
    {
      v15 = *(_QWORD *)(a3 + 16);
      if ( *(_BYTE *)(v15 + 25) )
      {
        v15 = *(_QWORD *)(a3 + 8);
        if ( !*(_BYTE *)(v15 + 25) )
        {
          v18 = a3;
          do
          {
            v19 = v15;
            if ( v18 != *(_QWORD *)(v15 + 16) )
              break;
            v23 = (__int64 *)v15;
            v15 = *(_QWORD *)(v15 + 8);
            v18 = v19;
          }
          while ( !*(_BYTE *)(v15 + 25) );
        }
      }
      else
      {
        for ( i = *(_QWORD *)v15; !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
          v15 = i;
      }
      v16 = (_QWORD *)v15;
      v23 = (__int64 *)v15;
    }
    if ( v16 != v9 )
    {
      v20 = memcmp_0(a4, v16 + 4, 0x10uLL);
      v11 = 0LL;
      if ( v20 >= 0 )
      {
LABEL_32:
        *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_nohint<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
                           a1,
                           v22,
                           v11,
                           a4,
                           a5);
        return a2;
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
      std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
        a1,
        a2,
        0,
        (_QWORD *)a3,
        v21,
        a5);
    else
      std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
        a1,
        a2,
        1,
        (_QWORD *)v15,
        v21,
        a5);
    return a2;
  }
  else
  {
    if ( *(_BYTE *)(v23[2] + 25) )
      std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
        a1,
        a2,
        0,
        v23,
        v21,
        a5);
    else
      std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
        a1,
        a2,
        1,
        (_QWORD *)a3,
        v21,
        a5);
    return a2;
  }
}

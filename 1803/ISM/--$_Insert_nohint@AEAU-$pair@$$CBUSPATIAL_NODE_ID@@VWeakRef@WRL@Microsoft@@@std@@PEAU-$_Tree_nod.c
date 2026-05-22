/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1800D0DF8
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1800CFCB8 (--$_Insert_hint@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU-$_Tree_node@.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x180008DF4 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE_ID@@VWeak.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@1@1@Z @ 0x18009A250 (--$_Insert_at@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU-$_Tree_node@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     memcmp_0 @ 0x1800E3211 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_nohint<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        void *Block)
{
  void *v5; // rax
  _QWORD *v8; // rsi
  __int64 **v9; // r15
  __int64 *v10; // r14
  int v11; // eax
  char v12; // r13
  __int64 v13; // rbx
  __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 *v19; // [rsp+70h] [rbp+8h] BYREF
  void *Buf2; // [rsp+88h] [rbp+20h]

  Buf2 = a4;
  v5 = a4;
  try
  {
    v8 = Block;
    v9 = (__int64 **)*a1;
    v13 = (*a1)[1];
    v10 = *a1;
    v12 = 1;
    while ( !*(_BYTE *)(v13 + 25) )
    {
      v10 = (__int64 *)v13;
      v11 = memcmp_0(v5, (const void *)(v13 + 32), 0x10uLL);
      v12 = v11 < 0;
      if ( v11 >= 0 )
        v13 = *(_QWORD *)(v13 + 16);
      else
        v13 = *(_QWORD *)v13;
      v5 = Buf2;
    }
    v14 = v10;
    v19 = v10;
    if ( v12 )
    {
      if ( v10 == *v9 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
                           a1,
                           &v19,
                           1,
                           v10,
                           v18,
                           v8);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v19);
      v14 = v19;
    }
    if ( memcmp_0(v14 + 4, Buf2, 0x10uLL) >= 0 )
    {
      v17 = v8[6];
      if ( v17 )
      {
        v8[6] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      operator delete(v8);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
                         a1,
                         &v19,
                         v12,
                         v10,
                         v18,
                         v8);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Destroy_if_node(
      v15,
      Block);
    throw;
  }
  return result;
}

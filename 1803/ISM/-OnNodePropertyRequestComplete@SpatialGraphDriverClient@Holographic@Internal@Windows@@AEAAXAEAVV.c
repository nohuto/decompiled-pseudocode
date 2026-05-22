/*
 * XREFs of ?OnNodePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV2NodePropertyRequest@234@J@Z @ 0x1800C2D50
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?NodePropertyRequestFailed_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0J@Z @ 0x1800BDE1C (-NodePropertyRequestFailed_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0.c)
 *     ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x1800C1284 (-SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUSPATIAL_NODE_ID@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@USPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@USpatialNodeIdComp@345@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUSPATIAL_NODE_ID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800CF6CC (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBUSPATIAL_NODE_ID@@@2@V-$tuple@$$V@2@@-$_T.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@USpatialNodeIdComp@345@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@PEAX@1@@Z @ 0x1800CF708 (--$_Insert_hint@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Int.c)
 *     memcmp_0 @ 0x1800E3211 (memcmp_0.c)
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::OnNodePropertyRequestComplete(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct _GUID *a2,
        int a3,
        const char *a4)
{
  char v4; // di
  const char *v7; // r9
  unsigned __int64 v8; // rcx
  size_t v9; // rdx
  const struct _GUID *v10; // rbp
  __int64 v11; // rdx
  int v12; // r15d
  const struct _GUID *v13; // rbx
  const struct _GUID *v14; // r14
  const struct _GUID *v15; // rdi
  __int64 v16; // rax
  _DWORD *v17; // rcx
  HolographicDriverClientTrace *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  const struct _GUID *v20; // [rsp+68h] [rbp+20h] BYREF

  v4 = a3;
  if ( a3 < 0 )
  {
    v17 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v17 && *v17 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::NodePropertyRequestFailed_(
        v18,
        (const struct _GUID *)this + 5,
        (const struct SPATIAL_NODE_ID *)&a2[9],
        a2 + 8,
        v4);
    }
  }
  else
  {
    if ( *(_DWORD *)a2[6].Data4 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xEB,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
        a4);
      __debugbreak();
    }
    v7 = *(const char **)&a2[5].Data1;
    v8 = *(_QWORD *)a2[5].Data4 - (_QWORD)v7;
    if ( v8 < 0xC )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x37,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
        v7);
      __debugbreak();
    }
    v9 = *(unsigned int *)v7;
    if ( v8 != v9 + 12 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xEF,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
        v7);
      __debugbreak();
    }
    v10 = a2 + 9;
    if ( Windows::Internal::Holographic::NodePropertyCache::SetValue(
           (struct _GUID *)((char *)this + 264),
           (const struct SPATIAL_NODE_ID *)&a2[9],
           a2 + 8,
           (void *)(v7 + 12),
           v9) )
    {
      v12 = *(_DWORD *)&a2[3].Data2;
      v13 = (const struct _GUID *)*((_QWORD *)this + 46);
      v14 = v13;
      v15 = *(const struct _GUID **)v13->Data4;
      while ( !v15[1].Data4[1] )
      {
        if ( memcmp_0(&v15[1].Data4[4], v10, 0x10uLL) >= 0 )
        {
          v13 = v15;
          v15 = *(const struct _GUID **)&v15->Data1;
        }
        else
        {
          v15 = *(const struct _GUID **)&v15[1].Data1;
        }
      }
      if ( v13 == v14 || memcmp_0(v10, &v13[1].Data4[4], 0x10uLL) < 0 )
      {
        v20 = v10;
        v16 = std::_Tree_comp_alloc<std::_Tmap_traits<SPATIAL_NODE_ID,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<SPATIAL_NODE_ID const &>,std::tuple<>>(
                (char *)this + 368,
                v11,
                &v20);
        std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>,0>>::_Insert_hint<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>,void *> *>(
          (char *)this + 368,
          &v20,
          v13,
          v16 + 28,
          v16);
        v13 = v20;
      }
      *(_DWORD *)&v13[2].Data4[4] |= v12;
    }
  }
}

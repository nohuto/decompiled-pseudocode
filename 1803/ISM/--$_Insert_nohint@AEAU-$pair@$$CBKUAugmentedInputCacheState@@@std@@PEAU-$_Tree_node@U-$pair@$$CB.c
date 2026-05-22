/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUAugmentedInputCacheState@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@1@@Z @ 0x18006D4A4
 * Callers:
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18006CCA0 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@USpatialNodeIdComp@345@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@PEAX@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@1@1@Z @ 0x18006D5DC (--$_Insert_at@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Inter.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Insert_nohint<std::pair<unsigned long const,AugmentedInputCacheState> &,std::_Tree_node<std::pair<unsigned long const,AugmentedInputCacheState>,void *> *>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        void *Block)
{
  int v7; // r11d
  __int64 *v8; // rax
  __int64 *v9; // r9
  bool v10; // r10
  unsigned int v11; // r8d
  __int64 *v12; // rbx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rcx
  char v18; // [rsp+50h] [rbp+8h] BYREF

  v7 = (int)a1;
  try
  {
    v8 = (__int64 *)(*a1)[1];
    v9 = *a1;
    v10 = 1;
    if ( !*((_BYTE *)v8 + 25) )
    {
      v11 = *a4;
      do
      {
        v9 = v8;
        v10 = v11 < *((_DWORD *)v8 + 7);
        if ( v11 >= *((_DWORD *)v8 + 7) )
          v8 = (__int64 *)v8[2];
        else
          v8 = (__int64 *)*v8;
      }
      while ( !*((_BYTE *)v8 + 25) );
    }
    v12 = v9;
    if ( v10 )
    {
      if ( v9 == (__int64 *)**a1 )
      {
        *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>,void *> *>(
                                     (_DWORD)a1,
                                     (unsigned int)&v18,
                                     1,
                                     (_DWORD)v9);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v9 + 25) )
      {
        v12 = (__int64 *)v9[2];
      }
      else
      {
        v15 = (__int64 *)*v9;
        if ( *(_BYTE *)(*v9 + 25) )
        {
          v16 = (__int64 *)v9[1];
          if ( !*((_BYTE *)v16 + 25) )
          {
            v17 = v9;
            do
            {
              if ( v17 != (__int64 *)*v16 )
                break;
              v12 = v16;
              v16 = (__int64 *)v16[1];
              v17 = v12;
            }
            while ( !*((_BYTE *)v16 + 25) );
          }
          if ( !*((_BYTE *)v12 + 25) )
            v12 = v16;
        }
        else
        {
          do
          {
            v12 = v15;
            v15 = (__int64 *)v15[2];
          }
          while ( !*((_BYTE *)v15 + 25) );
        }
      }
    }
    if ( *((_DWORD *)v12 + 7) >= *a4 )
    {
      operator delete(Block);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>,void *> *>(
                                   v7,
                                   (unsigned int)&v18,
                                   v10,
                                   (_DWORD)v9);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
      v13,
      Block);
    throw;
  }
  return result;
}

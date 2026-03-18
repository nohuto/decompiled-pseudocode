/*
 * XREFs of ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$unordered_map@PEAVCVisual@@UShadowIntermediates@CDropShadow@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@5@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x180188B7C
 * Callers:
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180189050 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180140A3C (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ??$_Insert@AEAU?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@1@@Z @ 0x1801889A0 (--$_Insert@AEAU-$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V-$_List_unchecked_it.c)
 *     ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCVisual@@@2@V?$tuple@$$V@2@@?$list@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCVisual@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180188AC8 (--$_Insert@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCVisual@@@2@V-$tuple@$$V@2@@-$list@U-$.c)
 */

__int64 __fastcall std::unordered_map<CVisual *,CDropShadow::ShadowIntermediates>::_Try_emplace<CVisual * const &,>(
        _QWORD *a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 v6; // r11
  __int64 **v7; // rax
  __int64 v8; // r8
  __int64 *v9; // r10
  __int64 ***v10; // rdi
  __int64 *v11; // rdx
  __int64 v12; // rdx
  const unsigned __int8 *v14; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1[6] & std::_Hash_bytes(a3, 8uLL);
  while ( 1 )
  {
    v7 = (__int64 **)std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
                       (__int64)a1,
                       &v14,
                       v6);
    if ( v9 == *v7 )
      break;
    if ( v9[2] == *(_QWORD *)a3 )
    {
      v10 = (__int64 ***)(a1 + 1);
      v11 = (__int64 *)a1[1];
      goto LABEL_6;
    }
  }
  v10 = (__int64 ***)(a1 + 1);
  v9 = (__int64 *)a1[1];
  v11 = v9;
LABEL_6:
  if ( v9 == v11 )
  {
    v12 = *v11;
    v14 = a3;
    std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::_Insert<std::piecewise_construct_t const &,std::tuple<CVisual * const &>,std::tuple<>>(
      (__int64)v10,
      v12,
      v8,
      (_QWORD **)&v14);
    std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Insert<std::pair<CVisual * const,CDropShadow::ShadowIntermediates> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>>>(
      a1,
      a2,
      (const unsigned __int8 *)**v10 + 16,
      **v10);
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}

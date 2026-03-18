/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@Z @ 0x1801619A0
 * Callers:
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x180160FD4 (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?_Hashval@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEBA_KAEBQEAVCVisual@@@Z @ 0x180161474 (-_Hashval@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_compa.c)
 *     ?erase@?$list@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@Z @ 0x180161A28 (-erase@-$list@U-$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V-$allocator@U-$pair@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r9

  v6 = std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Hashval(
         (__int64)a1,
         (const unsigned __int8 *)(a3 + 16));
  v7 = a1[2];
  if ( *(_QWORD *)(v7 + 16 * v6 + 8) == a3 )
  {
    if ( *(_QWORD *)(v7 + 16 * v6) == a3 )
    {
      *(_QWORD *)(v7 + 16 * v6) = *a1;
      *(_QWORD *)(a1[2] + 16 * v6 + 8) = *a1;
    }
    else
    {
      *(_QWORD *)(v7 + 16 * v6 + 8) = *(_QWORD *)(a3 + 8);
    }
  }
  else if ( *(_QWORD *)(v7 + 16 * v6) == a3 )
  {
    *(_QWORD *)(v7 + 16 * v6) = *(_QWORD *)a3;
  }
  std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::erase(a1, a2, a3);
  return a2;
}

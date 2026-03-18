/*
 * XREFs of ?_End@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@_K@Z @ 0x180161450
 * Callers:
 *     ??$_Insert@AEAU?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@1@@Z @ 0x18015F138 (--$_Insert@AEAU-$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V-$_List_unchecked_it.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@AEBQEAVCVisual@@@Z @ 0x180161A98 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_co.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_End(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r8

  v3 = a1[2];
  v4 = 2 * a3;
  if ( *(_QWORD *)(v3 + 8 * v4) == *a1 )
    *a2 = *a1;
  else
    *a2 = **(_QWORD **)(v3 + 8 * v4 + 8);
  return a2;
}

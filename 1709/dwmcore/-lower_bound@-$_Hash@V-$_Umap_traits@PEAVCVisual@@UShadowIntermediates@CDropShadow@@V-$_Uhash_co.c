/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@AEBQEAVCVisual@@@Z @ 0x180161A98
 * Callers:
 *     ??A?$unordered_map@PEAVCVisual@@UShadowIntermediates@CDropShadow@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@5@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@@std@@QEAAAEAUShadowIntermediates@CDropShadow@@AEBQEAVCVisual@@@Z @ 0x18015F5D4 (--A-$unordered_map@PEAVCVisual@@UShadowIntermediates@CDropShadow@@U-$hash@PEAVCVisual@@@std@@U-$.c)
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x180160FD4 (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@_K@Z @ 0x180161450 (-_End@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_compare@P.c)
 *     ?_Hashval@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEBA_KAEBQEAVCVisual@@@Z @ 0x180161474 (-_Hashval@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_compa.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  unsigned __int64 v6; // r11
  _QWORD *v7; // rax
  __int64 v8; // r10
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v6 = std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Hashval(
         (__int64)a1,
         a3);
  while ( 1 )
  {
    v7 = std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_End(
           a1,
           &v10,
           v6);
    if ( v8 == *v7 )
      break;
    if ( *(_QWORD *)(v8 + 16) == *(_QWORD *)a3 )
    {
      *a2 = v8;
      return a2;
    }
  }
  *a2 = *a1;
  return a2;
}

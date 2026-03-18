/*
 * XREFs of ?GetEffectiveMaskBrushNoRef@CDropShadow@@AEBAPEAVCSpriteVisualContent@@PEAVCVisual@@@Z @ 0x1801609CC
 * Callers:
 *     ?IsReadyToDraw@CDropShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180160D90 (-IsReadyToDraw@CDropShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z @ 0x180160E0C (-IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z.c)
 * Callees:
 *     ?CanUseVisualBrushAsMaskBrush@CDropShadow@@AEBA_NXZ @ 0x18015F720 (-CanUseVisualBrushAsMaskBrush@CDropShadow@@AEBA_NXZ.c)
 *     ?_Hashval@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEBA_KAEBQEAVCVisual@@@Z @ 0x180161474 (-_Hashval@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_compa.c)
 */

struct CSpriteVisualContent *__fastcall CDropShadow::GetEffectiveMaskBrushNoRef(CDropShadow *this, struct CVisual *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 **v5; // rsi
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // r9
  __int64 *i; // rcx
  __int64 *v11; // rax
  struct CVisual *v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  v4 = 0LL;
  if ( !CDropShadow::CanUseVisualBrushAsMaskBrush(this) )
    return *(struct CSpriteVisualContent **)(v3 + 200);
  v5 = (__int64 **)(v3 + 80);
  v6 = std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Hashval(
         v3 + 80,
         &v13);
  v7 = v5[2];
  v8 = 2 * v6;
  v9 = (__int64 *)v7[2 * v6];
  for ( i = v9; ; i = (__int64 *)*i )
  {
    v11 = v9 == *v5 ? *v5 : *(__int64 **)v7[v8 + 1];
    if ( i == v11 )
      break;
    if ( a2 == (struct CVisual *)i[2] )
      goto LABEL_11;
  }
  i = *v5;
LABEL_11:
  if ( i != *v5 )
    return (struct CSpriteVisualContent *)i[3];
  return (struct CSpriteVisualContent *)v4;
}

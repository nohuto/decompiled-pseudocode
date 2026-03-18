/*
 * XREFs of ??A?$unordered_map@PEAVCVisual@@UShadowIntermediates@CDropShadow@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@5@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@@std@@QEAAAEAUShadowIntermediates@CDropShadow@@AEBQEAVCVisual@@@Z @ 0x18015F5D4
 * Callers:
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015F810 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ??$insert@U?$pair@PEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@PEAVCVisual@@UShadowIntermediates@CDropShadow@@@1@@Z @ 0x18015F2EC (--$insert@U-$pair@PEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@-$_Hash@V-$_Umap_traits@.c)
 *     ??0ShadowIntermediates@CDropShadow@@QEAA@$$QEAU01@@Z @ 0x18015F474 (--0ShadowIntermediates@CDropShadow@@QEAA@$$QEAU01@@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@AEBQEAVCVisual@@@Z @ 0x180161A98 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_co.c)
 */

__int64 *__fastcall std::unordered_map<CVisual *,CDropShadow::ShadowIntermediates>::operator[](
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v4; // rbx
  char v6[16]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v7; // [rsp+30h] [rbp-50h] BYREF
  __int128 v8; // [rsp+40h] [rbp-40h] BYREF
  __int64 v9; // [rsp+50h] [rbp-30h] BYREF
  __int64 v10; // [rsp+58h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp-20h] BYREF
  __int64 v12[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 *v13; // [rsp+90h] [rbp+10h] BYREF

  std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::lower_bound(
    a1,
    &v13,
    a2);
  v4 = v13;
  if ( v13 == *a1 )
  {
    memset_0(&v7, 0, 0x20uLL);
    v9 = *a2;
    v7 = 0LL;
    v8 = 0LL;
    CDropShadow::ShadowIntermediates::ShadowIntermediates(&v10, &v7);
    v4 = *(__int64 **)std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::insert<std::pair<CVisual *,CDropShadow::ShadowIntermediates>>(
                        a1,
                        (__int64)v6,
                        &v9);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v12);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v8);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v7 + 1);
  }
  return v4 + 3;
}

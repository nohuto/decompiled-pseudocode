/*
 * XREFs of ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x18015F3A0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180160C7C (-InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@$0A@U?$_List_base_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@PEAX@2@PEAU32@0@Z @ 0x1801613FC (-_Buynode0@-$_List_alloc@$0A@U-$_List_base_types@U-$pair@QEAVCVisual@@UShadowIntermediates@CDrop.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801614B0 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_compare@.c)
 */

CDropShadow *__fastcall CDropShadow::CDropShadow(CDropShadow *this, struct CComposition *a2)
{
  char *v2; // rbx
  CDropShadow *result; // rax

  *((_QWORD *)this + 2) = a2;
  v2 = (char *)this + 80;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &CDropShadow::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CCompositionSkyBoxBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = std::_List_alloc<0,std::_List_base_types<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>>::_Buynode0(
                             this,
                             0LL,
                             0LL);
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_DWORD *)v2 + 14) = 1065353216;
  std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Init(
    v2,
    8LL);
  result = this;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 40) = 1091567616;
  *((_DWORD *)this + 41) = 1065353216;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 39) = 1065353216;
  return result;
}

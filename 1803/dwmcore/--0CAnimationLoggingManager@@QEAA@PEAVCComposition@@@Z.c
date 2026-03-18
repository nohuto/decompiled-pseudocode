/*
 * XREFs of ??0CAnimationLoggingManager@@QEAA@PEAVCComposition@@@Z @ 0x18017FA98
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x18016BDE4 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_compare@.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@2@PEAU32@0@Z @ 0x18018137C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@QEAVCResource@@UResourceDebugInfo@CAnimatio.c)
 */

CAnimationLoggingManager *__fastcall CAnimationLoggingManager::CAnimationLoggingManager(
        CAnimationLoggingManager *this,
        struct CComposition *a2)
{
  char *v2; // rbx
  CAnimationLoggingManager *result; // rax

  *((_QWORD *)this + 2) = a2;
  v2 = (char *)this + 88;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CAnimationLoggingManager::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 12) = std::_List_alloc<std::_List_base_types<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>>::_Buynode0(
                             this,
                             0LL,
                             0LL);
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Init(
    (__int64)v2,
    8LL);
  result = this;
  *((_DWORD *)this + 40) = 0;
  return result;
}

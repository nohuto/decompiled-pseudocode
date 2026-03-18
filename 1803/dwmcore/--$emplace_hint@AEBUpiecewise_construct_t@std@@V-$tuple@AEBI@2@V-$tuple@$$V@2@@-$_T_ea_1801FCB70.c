/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IPEAVCHolographicInteropTexture@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801FCB70
 * Callers:
 *     ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1801FCD40 (-RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTe.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEAVCHolographicInteropTexture@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIPEAVCHolographicInteropTexture@@@1@PEAU?$_Tree_node@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@PEAX@1@@Z @ 0x1801FC5C0 (--$_Insert_hint@AEAU-$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@PEAU-$_Tree_node@U-$pair@$.c)
 */

char **__fastcall std::_Tree<std::_Tmap_traits<unsigned int,CHolographicInteropTexture *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,CHolographicInteropTexture *>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        _QWORD *a1,
        char **a2,
        __int64 a3,
        __int64 a4,
        _DWORD **a5)
{
  unsigned __int64 v8; // rax

  v8 = std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x30uLL);
  *(_QWORD *)v8 = *a1;
  *(_QWORD *)(v8 + 8) = *a1;
  *(_QWORD *)(v8 + 16) = *a1;
  *(_WORD *)(v8 + 24) = 0;
  *(_DWORD *)(v8 + 32) = **a5;
  *(_QWORD *)(v8 + 40) = 0LL;
  std::_Tree<std::_Tmap_traits<unsigned int,CHolographicInteropTexture *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,CHolographicInteropTexture *>>,0>>::_Insert_hint<std::pair<unsigned int const,CHolographicInteropTexture *> &,std::_Tree_node<std::pair<unsigned int const,CHolographicInteropTexture *>,void *> *>(
    a1,
    a2,
    a3,
    (unsigned int *)(v8 + 32),
    (char *)v8);
  return a2;
}

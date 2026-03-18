/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801FCBEC
 * Callers:
 *     ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1801FCD40 (-RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTe.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUStereoscopicTransformInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAX@1@@Z @ 0x1801FC7A8 (--$_Insert_hint@AEAU-$pair@$$CBIUStereoscopicTransformInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBI.c)
 *     ??0StereoscopicTransformInfo@@QEAA@XZ @ 0x1801FCC94 (--0StereoscopicTransformInfo@@QEAA@XZ.c)
 */

char **__fastcall std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicTransformInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicTransformInfo>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        _QWORD *a1,
        char **a2,
        __int64 a3,
        __int64 a4,
        _DWORD **a5)
{
  unsigned __int64 v8; // r14

  v8 = std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0xF0uLL);
  *(_QWORD *)v8 = *a1;
  *(_QWORD *)(v8 + 8) = *a1;
  *(_QWORD *)(v8 + 16) = *a1;
  *(_WORD *)(v8 + 24) = 0;
  *(_DWORD *)(v8 + 28) = **a5;
  memset_0((void *)(v8 + 32), 0, 0xCCuLL);
  StereoscopicTransformInfo::StereoscopicTransformInfo((StereoscopicTransformInfo *)(v8 + 32));
  std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicTransformInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicTransformInfo>>,0>>::_Insert_hint<std::pair<unsigned int const,StereoscopicTransformInfo> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicTransformInfo>,void *> *>(
    a1,
    a2,
    a3,
    (unsigned int *)(v8 + 28),
    (char *)v8);
  return a2;
}

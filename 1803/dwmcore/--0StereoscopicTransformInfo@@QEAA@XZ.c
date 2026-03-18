/*
 * XREFs of ??0StereoscopicTransformInfo@@QEAA@XZ @ 0x1801FCC94
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801FCBEC (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_1801FCBEC.c)
 *     ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1801FCD40 (-RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTe.c)
 * Callees:
 *     <none>
 */

StereoscopicTransformInfo *__fastcall StereoscopicTransformInfo::StereoscopicTransformInfo(
        StereoscopicTransformInfo *this)
{
  StereoscopicTransformInfo *result; // rax

  *((_WORD *)this + 32) = 32085;
  result = this;
  *(_OWORD *)this = _xmm;
  *((_OWORD *)this + 1) = _xmm;
  *((_OWORD *)this + 2) = _xmm;
  *((_OWORD *)this + 3) = _xmm;
  *((_WORD *)this + 66) = 32085;
  *(_OWORD *)((char *)this + 68) = _xmm;
  *(_OWORD *)((char *)this + 84) = _xmm;
  *(_OWORD *)((char *)this + 100) = _xmm;
  *(_OWORD *)((char *)this + 116) = _xmm;
  *((_WORD *)this + 100) = 32085;
  *(_OWORD *)((char *)this + 136) = _xmm;
  *(_OWORD *)((char *)this + 152) = _xmm;
  *(_OWORD *)((char *)this + 168) = _xmm;
  *(_OWORD *)((char *)this + 184) = _xmm;
  return result;
}

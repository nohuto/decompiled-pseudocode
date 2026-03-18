/*
 * XREFs of ?AssociateWindowBackgroundTreatment@CHwDisplayRenderTarget@@UEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18000C8F0
 * Callers:
 *     ?AssociateWindowBackgroundTreatment@CHwDisplayRenderTarget@@WNI@EAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x1800DDF70 (-AssociateWindowBackgroundTreatment@CHwDisplayRenderTarget@@WNI@EAAXPEAVCWindowBackgroundTreatme.c)
 * Callees:
 *     ??$_Insert_nohint@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@std@@_N@1@_NAEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@1@@Z @ 0x18001A2A4 (--$_Insert_nohint@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_tra.c)
 */

void __fastcall CHwDisplayRenderTarget::AssociateWindowBackgroundTreatment(
        CHwDisplayRenderTarget *this,
        struct CWindowBackgroundTreatment *a2,
        __int64 a3)
{
  char v3; // [rsp+20h] [rbp-28h]
  _BYTE v4[24]; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowBackgroundTreatment *v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = a2;
  v3 = (char)a2;
  std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::_Insert_nohint<CWindowBackgroundTreatment * const &,std::_Not_a_node_tag>(
    (char *)this + 144,
    v4,
    a3,
    &v5,
    v3);
}

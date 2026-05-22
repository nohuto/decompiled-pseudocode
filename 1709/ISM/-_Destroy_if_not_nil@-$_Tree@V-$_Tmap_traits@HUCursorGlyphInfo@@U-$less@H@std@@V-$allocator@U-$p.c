/*
 * XREFs of ?_Destroy_if_not_nil@?$_Tree@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@@Z @ 0x180029960
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@1@AEAU?$pair@$$CBHUCursorGlyphInfo@@@1@1@Z @ 0x180029980 (--$_Insert_at@AEAU-$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBHUCursorGlyph.c)
 *     _std::_Tree_std::_Tmap_traits_int_CursorGlyphInfo_std::less_int__std::allocator_std::pair_int_const__CursorGlyphInfo____0___::_Insert_hint_std::pair_int_const__CursorGlyphInfo__&___ptr64_std::_Tree_node_std::pair_int_const__CursorGlyphInfo__void_____ptr64______ptr64__::_1_::catch$117 @ 0x1800CDD06 (_std--_Tree_std--_Tmap_traits_int_CursorGlyphInfo_std--less_int__std--allocator_std--pair_int_co.c)
 *     _std::_Tree_std::_Tmap_traits_int_CursorGlyphInfo_std::less_int__std::allocator_std::pair_int_const__CursorGlyphInfo____0___::_Insert_nohint_std::pair_int_const__CursorGlyphInfo__&___ptr64_std::_Tree_node_std::pair_int_const__CursorGlyphInfo__void_____ptr64______ptr64__::_1_::catch$52 @ 0x1800CDD49 (_std--_Tree_std--_Tmap_traits_int_CursorGlyphInfo_std--less_int__std--allocator_std_ea_1800CDD49.c)
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180028C1C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        unsigned __int64 *a2)
{
  std::string::~string(a2 + 5);
  operator delete(a2);
}

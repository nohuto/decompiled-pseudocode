/*
 * XREFs of ?_Tidy@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAXXZ @ 0x180076AC0
 * Callers:
 *     _std::_Tree_std::_Tmap_traits_unsigned_short_const_____ptr64__WNF_STATE_NAME_const_____ptr64_CreativeFramework::Triggers::less_std::allocator_std::pair_unsigned_short_const_____ptr64_const__WNF_STATE_NAME_const_____ptr64____0___::_Tree_std::_Tmap_traits_unsigned_short_const_____ptr64__WNF_STATE_NAME_const_____ptr64_CreativeFramework::Triggers::less_std::allocator_std::pair_unsigned_short_const_____ptr64_const__WNF_STATE_NAME_const_____ptr64____0____::_1_::catch$3 @ 0x1800C66BB (_std--_Tree_std--_Tmap_traits_unsigned_short_const_____ptr64__WNF_STATE_NAME_const__ea_1800C66BB.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@Z @ 0x180076BE8 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$al.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Tidy(
        _QWORD *a1)
{
  __int64 v1; // rax
  _BYTE *v3; // rsi
  _BYTE *v4; // rdi
  __int64 result; // rax

  v1 = *a1;
  v3 = *(_BYTE **)(*a1 + 8LL);
  v4 = v3;
  if ( !v3[25] )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Erase(
        a1,
        *((_QWORD *)v4 + 2));
      v4 = *(_BYTE **)v4;
      operator delete(v3);
      v3 = v4;
    }
    while ( !v4[25] );
    v1 = *a1;
  }
  *(_QWORD *)(v1 + 8) = v1;
  *(_QWORD *)*a1 = *a1;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = *a1;
  a1[1] = 0LL;
  return result;
}

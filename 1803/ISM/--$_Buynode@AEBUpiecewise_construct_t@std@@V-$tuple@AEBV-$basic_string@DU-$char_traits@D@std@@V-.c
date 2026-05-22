/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800433F8
 * Callers:
 *     ??A?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAAAEAV?$variant@K_NM@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x180041F70 (--A-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$variant@K_NM@2@U-$less.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@PEAX@2@XZ @ 0x18004296C (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocato.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180043FE8 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::string,std::variant<unsigned long,bool,float>,std::less<std::string>,std::allocator<std::pair<std::string const,std::variant<unsigned long,bool,float>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::string const &>,std::tuple<>>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 *v9; // [rsp+68h] [rbp+20h]

  v4 = std::_Tree_comp_alloc<std::_Tmap_traits<std::string,std::variant<unsigned long,bool,float>,std::less<std::string>,std::allocator<std::pair<std::string const,std::variant<unsigned long,bool,float>>>,0>>::_Buynode0(a1);
  v5 = v4;
  v9 = v4;
  *((_WORD *)v4 + 12) = 0;
  try
  {
    v6 = v4 + 4;
    std::string::string(v4 + 4, *a3);
    *((_DWORD *)v6 + 8) = 0;
    *((_BYTE *)v6 + 36) = 0;
  }
  catch ( ... )
  {
    std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
      v7,
      v9);
    throw;
  }
  return v5;
}

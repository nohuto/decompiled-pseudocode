/*
 * XREFs of ??$_Buynode@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$_List_buy@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAX@1@PEAU21@0AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800939E0
 * Callers:
 *     ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U_Nil@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@U_Nil@1@@Z @ 0x180093428 (--$_Insert@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@U_Nil@2@@-$_Hash@.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180062B1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Buynode0@?$_List_alloc@$0A@U?$_List_base_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAX@2@PEAU32@0@Z @ 0x180083C60 (-_Buynode0@-$_List_alloc@$0A@U-$_List_base_types@V-$basic_string@_WU-$char_traits@_W@std@@V-$all.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall std::_List_buy<std::wstring>::_Buynode<std::wstring const &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        void **a4)
{
  void **v5; // rax
  void **v6; // rbx
  __int64 v7; // rcx
  void **v9; // [rsp+50h] [rbp+8h]

  v5 = (void **)std::_List_alloc<0,std::_List_base_types<std::wstring>>::_Buynode0(a1, a2, a3);
  v6 = v5;
  v9 = v5;
  try
  {
    v5[5] = (void *)7;
    v5[4] = 0LL;
    *((_WORD *)v5 + 8) = 0;
    std::wstring::assign(v5 + 2, a4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      v7,
      v9);
    throw;
  }
  return v6;
}

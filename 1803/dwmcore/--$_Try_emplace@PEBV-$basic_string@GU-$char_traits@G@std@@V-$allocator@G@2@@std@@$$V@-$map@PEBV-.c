/*
 * XREFs of ??$_Try_emplace@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@std@@_N@1@$$QEAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180147138
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800D1C28 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Insert_hint@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@1@AEAU?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@1@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@1@@Z @ 0x1801468FC (--$_Insert_hint@AEAU-$pair@QEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@I@st.c)
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@XZ @ 0x180147670 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@PEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 */

__int64 __fastcall std::map<std::wstring const *,unsigned int>::_Try_emplace<std::wstring const *,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  char *v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = *a1;
  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 8);
  while ( !*(_BYTE *)(v8 + 25) )
  {
    v9 = *(_QWORD *)(v8 + 32);
    v10 = v8;
    if ( v9 >= *a3 )
      v8 = *(_QWORD *)v8;
    else
      v8 = *(_QWORD *)(v8 + 16);
    if ( v9 >= *a3 )
      v7 = v10;
  }
  if ( v7 == v5 || *a3 < *(_QWORD *)(v7 + 32) )
  {
    v11 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Buynode0(a1);
    *(_WORD *)(v11 + 24) = 0;
    v12 = *a3;
    *(_DWORD *)(v11 + 40) = 0;
    *(_QWORD *)(v11 + 32) = v12;
    std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Insert_hint<std::pair<std::wstring const * const,unsigned int> &,std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *> *>(
      a1,
      &v14,
      v7,
      (unsigned __int64 *)(v11 + 32),
      (char *)v11);
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}

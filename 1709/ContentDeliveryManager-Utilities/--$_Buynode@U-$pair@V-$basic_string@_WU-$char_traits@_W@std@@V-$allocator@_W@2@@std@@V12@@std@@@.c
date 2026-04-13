/*
 * XREFs of ??$_Buynode@U?$pair@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@1@$$QEAU?$pair@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@1@@Z @ 0x180086B60
 * Callers:
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x1800867B4 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180033540 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Buynode0@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@XZ @ 0x180071D1C (-_Buynode0@-$_Tree_buy@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 */

_QWORD *__fastcall std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<std::pair<std::wstring,std::wstring>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  void *v8; // [rsp+50h] [rbp+18h]

  v3 = std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode0(a1);
  v5 = v3;
  v8 = v3;
  *((_WORD *)v3 + 12) = 0;
  try
  {
    v6 = v3 + 4;
    if ( v3 != (_QWORD *)-32LL )
    {
      v3[7] = 7LL;
      v3[6] = 0LL;
      *(_WORD *)v6 = 0;
      std::wstring::_Assign_rv(v3 + 4, a2);
      v6[7] = 7LL;
      v6[6] = 0LL;
      *((_WORD *)v6 + 16) = 0;
      std::wstring::_Assign_rv(v6 + 4, a2 + 4);
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      v4,
      v8);
    throw;
  }
  return v5;
}

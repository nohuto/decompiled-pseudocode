/*
 * XREFs of ??$_Buynode@U?$pair@PEBGPEBG@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@$$QEAU?$pair@PEBGPEBG@1@@Z @ 0x180055710
 * Callers:
 *     ?RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4ActionServices@Actions@CreativeFramework@@AEBUActionContext@78@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x1800527BC (-RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Wind.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180037C48 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?_Buynode0@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@XZ @ 0x18004851C (-_Buynode0@-$_Tree_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$alloca_ea_18004851C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<std::pair<unsigned short const *,unsigned short const *>>(
        _QWORD *a1,
        char **a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // r14
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rdi
  char *v7; // rdx
  __int64 v8; // rsi
  unsigned __int64 v9; // r8
  char *v10; // rdx
  __int64 v11; // rcx
  void *v13; // [rsp+68h] [rbp+10h]

  v3 = std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode0(a1);
  v4 = v3;
  v13 = v3;
  v5 = 0LL;
  *((_WORD *)v3 + 12) = 0;
  try
  {
    v6 = v3 + 4;
    v7 = *a2;
    v3[7] = 7LL;
    v3[6] = 0LL;
    *((_WORD *)v3 + 16) = 0;
    v8 = -1LL;
    if ( *(_WORD *)v7 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)&v7[2 * v9] );
    }
    else
    {
      v9 = 0LL;
    }
    std::wstring::assign(v3 + 4, v7, v9);
    v10 = a2[1];
    v6[7] = 7LL;
    v6[6] = 0LL;
    *((_WORD *)v6 + 16) = 0;
    if ( *(_WORD *)v10 )
    {
      do
        ++v8;
      while ( *(_WORD *)&v10[2 * v8] );
      v5 = v8;
    }
    std::wstring::assign(v6 + 4, v10, v5);
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      v11,
      v13);
    throw;
  }
  return v4;
}

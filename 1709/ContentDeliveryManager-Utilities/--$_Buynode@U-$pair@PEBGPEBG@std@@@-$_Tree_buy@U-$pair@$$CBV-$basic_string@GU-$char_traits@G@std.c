/*
 * XREFs of ??$_Buynode@U?$pair@PEBGPEBG@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@$$QEAU?$pair@PEBGPEBG@1@@Z @ 0x1800518C0
 * Callers:
 *     ?RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4ActionServices@Actions@CreativeFramework@@AEBUActionContext@78@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x18004E93C (-RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Wind.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180034944 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?_Buynode0@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@XZ @ 0x180044840 (-_Buynode0@-$_Tree_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$alloca_ea_180044840.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<std::pair<unsigned short const *,unsigned short const *>>(
        _QWORD *a1,
        char **a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // r14
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rdi
  char *v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // r8
  char *v11; // rdx
  void *v13; // [rsp+60h] [rbp+18h]

  v3 = std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode0(a1);
  v5 = v3;
  v13 = v3;
  v6 = 0LL;
  *((_WORD *)v3 + 12) = 0;
  try
  {
    v7 = v3 + 4;
    if ( v3 != (_QWORD *)-32LL )
    {
      v8 = *a2;
      v3[7] = 7LL;
      v3[6] = 0LL;
      *(_WORD *)v7 = 0;
      v9 = -1LL;
      if ( *(_WORD *)v8 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( *(_WORD *)&v8[2 * v10] );
      }
      else
      {
        v10 = 0LL;
      }
      std::wstring::assign(v3 + 4, v8, v10);
      v11 = a2[1];
      v7[7] = 7LL;
      v7[6] = 0LL;
      *((_WORD *)v7 + 16) = 0;
      if ( *(_WORD *)v11 )
      {
        do
          ++v9;
        while ( *(_WORD *)&v11[2 * v9] );
        v6 = v9;
      }
      std::wstring::assign(v7 + 4, v11, v6);
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      v4,
      v13);
    throw;
  }
  return v5;
}

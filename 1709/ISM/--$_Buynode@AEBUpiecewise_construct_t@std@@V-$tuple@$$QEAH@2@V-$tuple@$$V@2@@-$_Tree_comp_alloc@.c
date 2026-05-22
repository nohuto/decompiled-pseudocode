/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAH@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAH@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180029678
 * Callers:
 *     ??A?$map@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@@std@@QEAAAEAUCursorGlyphInfo@@$$QEAH@Z @ 0x180028B90 (--A-$map@HUCursorGlyphInfo@@U-$less@H@std@@V-$allocator@U-$pair@$$CBHUCursorGlyphInfo@@@std@@@3@.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@XZ @ 0x180029908 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@HUCursorGlyphInfo@@U-$less@H@std@@V-$allocator@U-$.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<int &&>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        _DWORD **a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  void *v9; // [rsp+58h] [rbp+20h]

  v4 = std::_Tree_comp_alloc<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Buynode0(a1);
  v6 = v4;
  v9 = (void *)v4;
  *(_WORD *)(v4 + 24) = 0;
  try
  {
    v7 = v4 + 32;
    if ( v4 != -32 )
    {
      *(_DWORD *)v7 = **a3;
      memset((void *)(v4 + 40), 0, 0x28uLL);
      *(_QWORD *)(v7 + 24) = 0LL;
      *(_QWORD *)(v7 + 32) = 15LL;
      *(_BYTE *)(v7 + 8) = 0;
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      v5,
      v9);
    throw;
  }
  return v6;
}

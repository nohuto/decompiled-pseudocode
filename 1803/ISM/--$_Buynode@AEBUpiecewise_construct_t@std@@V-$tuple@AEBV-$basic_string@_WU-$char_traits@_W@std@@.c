/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18009BD88
 * Callers:
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAAAEAUSpatialInteractionSnapshot@Holographic@Internal@Windows@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x18009C570 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@USpatialInteractionSna.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800696F4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@XZ @ 0x18009BD4C (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$alloca.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring const &>,std::tuple<>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 *v9; // [rsp+68h] [rbp+20h]

  v4 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>,0>>::_Buynode0(a1);
  v5 = v4;
  v9 = v4;
  *((_WORD *)v4 + 12) = 0;
  try
  {
    v6 = v4 + 4;
    std::wstring::wstring(v4 + 4, *a3);
    memset_0(v6 + 4, 0, 0xA0uLL);
    v6[6] = 0LL;
    v6[7] = 7LL;
    *((_WORD *)v6 + 16) = 0;
    v6[8] = 0LL;
    v6[9] = 0LL;
    v6[10] = 0LL;
    v6[11] = 0LL;
    v6[12] = 0LL;
    v6[13] = 0LL;
    v6[14] = 0LL;
    v6[15] = 0LL;
    *((_DWORD *)v6 + 32) = 0;
    v6[17] = 0LL;
    *((_DWORD *)v6 + 36) = 0;
    v6[19] = 0LL;
    *((_DWORD *)v6 + 40) = 0;
    v6[21] = 0LL;
    *((_DWORD *)v6 + 44) = 0;
    v6[23] = 0LL;
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

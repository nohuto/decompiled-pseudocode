/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800D1B50
 * Callers:
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAAAEAUTrackedDeviceSnapshot@Holographic@Internal@Windows@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800CE260 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UTrackedDeviceSnapshot.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800696F4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@XZ @ 0x1800D2300 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@s_ea_1800D2300.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::TrackedDeviceSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  void *v9; // [rsp+68h] [rbp+20h]

  v4 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::TrackedDeviceSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>>,0>>::_Buynode0(a1);
  v5 = v4;
  v9 = (void *)v4;
  *(_WORD *)(v4 + 24) = 0;
  try
  {
    v6 = v4 + 32;
    std::wstring::wstring((_QWORD *)(v4 + 32), *a3);
    memset_0((void *)(v6 + 32), 0, 0x128uLL);
    *(_QWORD *)(v6 + 48) = 0LL;
    *(_QWORD *)(v6 + 56) = 7LL;
    *(_WORD *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_QWORD *)(v6 + 88) = 0LL;
    *(_QWORD *)(v6 + 96) = 7LL;
    *(_WORD *)(v6 + 72) = 0;
    *(_QWORD *)(v6 + 104) = 0LL;
    *(_QWORD *)(v6 + 112) = 0LL;
    *(_QWORD *)(v6 + 120) = 0LL;
    *(_DWORD *)(v6 + 128) = 0;
    *(_QWORD *)(v6 + 136) = 0LL;
    memset_0((void *)(v6 + 144), 0, 0xA0uLL);
    *(_QWORD *)(v6 + 304) = 0LL;
    *(_DWORD *)(v6 + 312) = 0;
    *(_QWORD *)(v6 + 320) = 0LL;
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

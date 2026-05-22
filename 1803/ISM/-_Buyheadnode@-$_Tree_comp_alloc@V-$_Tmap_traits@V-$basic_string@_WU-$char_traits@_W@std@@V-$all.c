/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@XZ @ 0x18009C6E0
 * Callers:
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x18009D08C (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::TrackedDeviceSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>>,0>>::_Buyheadnode()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  result = operator new(0x168uLL);
  try
  {
    *result = result;
    result[1] = result;
    result[2] = result;
  }
  catch ( ... )
  {
    std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
      v1,
      result);
    throw;
  }
  *((_WORD *)result + 12) = 257;
  return result;
}

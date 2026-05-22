/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@2@XZ @ 0x180028CF4
 * Callers:
 *     ??0DWMHardwareCursor@@IEAA@PEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@W4InputType@@UCursorId@@@Z @ 0x18002733C (--0DWMHardwareCursor@@IEAA@PEAVDWMCursorBroker@@V-$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@.c)
 *     ??0MPCManager@@QEAA@XZ @ 0x18005D4B8 (--0MPCManager@@QEAA@XZ.c)
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800771F0 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

_WORD *std::_Tree_comp_alloc<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Buyheadnode()
{
  _WORD *result; // rax
  _QWORD *v1; // rcx

  result = operator new(0x50uLL);
  try
  {
    if ( result )
      *(_QWORD *)result = result;
    if ( result != (_WORD *)-8LL )
      *((_QWORD *)result + 1) = result;
    v1 = result + 8;
    if ( result != (_WORD *)-16LL )
      *v1 = result;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      (__int64)v1,
      result);
    throw;
  }
  result[12] = 257;
  return result;
}

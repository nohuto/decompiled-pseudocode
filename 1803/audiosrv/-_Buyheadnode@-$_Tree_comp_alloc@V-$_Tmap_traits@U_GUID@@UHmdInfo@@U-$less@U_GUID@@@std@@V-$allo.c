/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@XZ @ 0x1800F5078
 * Callers:
 *     ??0CExclusiveModeListener@@QEAA@XZ @ 0x1800F1C2C (--0CExclusiveModeListener@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

unsigned __int64 std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Buyheadnode()
{
  unsigned __int64 result; // rax

  result = std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x48uLL);
  try
  {
    *(_QWORD *)result = result;
    *(_QWORD *)(result + 8) = result;
    *(_QWORD *)(result + 16) = result;
  }
  catch ( ... )
  {
    std::_Deallocate((_QWORD *)result, 1uLL, 0x48uLL);
    throw;
  }
  *(_WORD *)(result + 24) = 257;
  return result;
}

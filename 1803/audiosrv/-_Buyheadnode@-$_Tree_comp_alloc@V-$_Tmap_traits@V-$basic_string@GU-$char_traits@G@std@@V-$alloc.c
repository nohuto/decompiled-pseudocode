/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@XZ @ 0x180059454
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180059134 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??0CAudioResourceManager@@QEAA@XZ @ 0x180059490 (--0CAudioResourceManager@@QEAA@XZ.c)
 *     ??0CDeviceGraphStore@@QEAA@XZ @ 0x18005E454 (--0CDeviceGraphStore@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

unsigned __int64 std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Buyheadnode()
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

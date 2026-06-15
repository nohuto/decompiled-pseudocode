/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@XZ @ 0x180059340
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180059134 (--0CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

unsigned __int64 std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Buyheadnode()
{
  unsigned __int64 result; // rax

  result = std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x28uLL);
  try
  {
    *(_QWORD *)result = result;
    *(_QWORD *)(result + 8) = result;
    *(_QWORD *)(result + 16) = result;
  }
  catch ( ... )
  {
    std::_Deallocate((_QWORD *)result, 1uLL, 0x28uLL);
    throw;
  }
  *(_WORD *)(result + 24) = 257;
  return result;
}

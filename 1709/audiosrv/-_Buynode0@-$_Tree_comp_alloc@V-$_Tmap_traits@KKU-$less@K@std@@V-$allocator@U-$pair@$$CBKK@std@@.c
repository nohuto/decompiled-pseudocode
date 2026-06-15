/*
 * XREFs of ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x18000F19C
 * Callers:
 *     ??$_Buynode@U?$pair@KH@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@$$QEAU?$pair@KH@1@@Z @ 0x18000F204 (--$_Buynode@U-$pair@KH@std@@@-$_Tree_comp_alloc@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buynode0(
        _QWORD *a1)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rcx

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x28uLL);
  if ( !v3 )
  {
    _o__invalid_parameter_noinfo_noreturn(v4);
    JUMPOUT(0x18000F203LL);
  }
  try
  {
    *v3 = *a1;
    if ( v3 != (_QWORD *)-8LL )
      v3[1] = *a1;
    if ( v3 != (_QWORD *)-16LL )
      v3[2] = *a1;
  }
  catch ( ... )
  {
    std::_Deallocate(v3, 1uLL, 0x28uLL);
    throw;
  }
  return v3;
}

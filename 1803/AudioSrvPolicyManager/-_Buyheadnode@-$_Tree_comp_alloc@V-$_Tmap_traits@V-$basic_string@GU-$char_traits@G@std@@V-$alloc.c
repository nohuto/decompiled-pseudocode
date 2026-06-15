/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x1800172CC
 * Callers:
 *     ??0CApplication@@IEAA@K@Z @ 0x1800105D8 (--0CApplication@@IEAA@K@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180019750 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

_QWORD *std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>::_Buyheadnode()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  result = (_QWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(1LL);
  try
  {
    *result = result;
    result[1] = result;
    result[2] = result;
  }
  catch ( ... )
  {
    std::allocator<std::_Tree_node<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>,void *>>::deallocate(
      v1,
      result);
    throw;
  }
  *((_WORD *)result + 12) = 257;
  return result;
}

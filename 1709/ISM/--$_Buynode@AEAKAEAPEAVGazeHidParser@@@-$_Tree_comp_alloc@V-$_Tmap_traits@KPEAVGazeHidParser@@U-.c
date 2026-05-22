/*
 * XREFs of ??$_Buynode@AEAKAEAPEAVGazeHidParser@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KPEAVGazeHidParser@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKPEAVGazeHidParser@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKPEAVGazeHidParser@@@std@@PEAX@1@AEAKAEAPEAVGazeHidParser@@@Z @ 0x18009C264
 * Callers:
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B740 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x18005C408 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_p.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,GazeHidParser *,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,GazeHidParser *>>,0>>::_Buynode<unsigned long &,GazeHidParser * &>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 *a3)
{
  _QWORD *result; // rax
  __int64 v6; // rcx

  result = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::_Buynode0(a1);
  *((_WORD *)result + 12) = 0;
  try
  {
    if ( result != (_QWORD *)-32LL )
    {
      *((_DWORD *)result + 8) = *a2;
      v6 = *a3;
      result[5] = *a3;
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      v6,
      result);
    throw;
  }
  return result;
}

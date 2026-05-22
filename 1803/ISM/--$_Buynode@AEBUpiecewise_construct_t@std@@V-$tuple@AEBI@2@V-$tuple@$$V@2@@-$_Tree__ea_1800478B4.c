/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800478B4
 * Callers:
 *     ?PopulateDetectedOrLostReport@MPCProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z @ 0x180045ED0 (-PopulateDetectedOrLostReport@MPCProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@XZ @ 0x1800475F0 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@IUInputData@MPCProcessor@@U-$less@I@std@@V-$alloca.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

__int64 *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        __int64 *a1,
        __int64 a2,
        _DWORD **a3)
{
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 *v8; // [rsp+58h] [rbp+20h]

  v4 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode0(a1);
  v5 = v4;
  v8 = v4;
  *((_WORD *)v4 + 12) = 0;
  try
  {
    *((_DWORD *)v4 + 8) = **a3;
    memset_0(v4 + 5, 0, 0x6D0uLL);
    memset_0(v5 + 5, 0, 0x6C8uLL);
    *((_DWORD *)v5 + 16) = 1736;
  }
  catch ( ... )
  {
    std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
      v6,
      v8);
    throw;
  }
  return v5;
}

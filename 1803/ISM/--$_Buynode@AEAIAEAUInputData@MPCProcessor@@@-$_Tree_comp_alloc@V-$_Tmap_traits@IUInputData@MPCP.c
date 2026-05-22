/*
 * XREFs of ??$_Buynode@AEAIAEAUInputData@MPCProcessor@@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@AEAIAEAUInputData@MPCProcessor@@@Z @ 0x180047420
 * Callers:
 *     ?CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z @ 0x180045BCC (-CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@XZ @ 0x1800475F0 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@IUInputData@MPCProcessor@@U-$less@I@std@@V-$alloca.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode<unsigned int &,MPCProcessor::InputData &>(
        __int64 a1,
        _DWORD *a2,
        _OWORD *a3)
{
  __int64 result; // rax
  _OWORD *v6; // rcx
  __int64 v7; // rdx

  result = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode0(a1);
  *(_WORD *)(result + 24) = 0;
  try
  {
    *(_DWORD *)(result + 32) = *a2;
    v6 = (_OWORD *)(result + 40);
    v7 = 13LL;
    do
    {
      *v6 = *a3;
      v6[1] = a3[1];
      v6[2] = a3[2];
      v6[3] = a3[3];
      v6[4] = a3[4];
      v6[5] = a3[5];
      v6[6] = a3[6];
      v6 += 8;
      *(v6 - 1) = a3[7];
      a3 += 8;
      --v7;
    }
    while ( v7 );
    *v6 = *a3;
    v6[1] = a3[1];
    v6[2] = a3[2];
    v6[3] = a3[3];
    v6[4] = a3[4];
  }
  catch ( ... )
  {
    std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
      (__int64)v6,
      (void *)result);
    throw;
  }
  return result;
}

/*
 * XREFs of ??$_Buynode@AEAIAEAUInputData@MPCProcessor@@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@AEAIAEAUInputData@MPCProcessor@@@Z @ 0x180053D9C
 * Callers:
 *     ?CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z @ 0x180052E8C (-CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@XZ @ 0x180053F68 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@IUInputData@MPCProcessor@@U-$less@I@std@@V-$alloca.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode<unsigned int &,MPCProcessor::InputData &>(
        __int64 a1,
        _DWORD *a2,
        _OWORD *a3)
{
  __int64 v5; // rax
  _OWORD *v6; // rcx
  __int64 v7; // r8
  _DWORD *v8; // rax
  __int64 v9; // rax
  void *v11; // [rsp+40h] [rbp+8h]

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode0(a1);
  v7 = v5;
  v11 = (void *)v5;
  *(_WORD *)(v5 + 24) = 0;
  try
  {
    v8 = (_DWORD *)(v5 + 32);
    if ( v8 )
    {
      *v8 = *a2;
      v6 = v8 + 2;
      v9 = 22LL;
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
        --v9;
      }
      while ( v9 );
      *v6 = *a3;
      v6[1] = a3[1];
      *((_QWORD *)v6 + 4) = *((_QWORD *)a3 + 4);
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      (__int64)v6,
      v11);
    throw;
  }
  return v7;
}

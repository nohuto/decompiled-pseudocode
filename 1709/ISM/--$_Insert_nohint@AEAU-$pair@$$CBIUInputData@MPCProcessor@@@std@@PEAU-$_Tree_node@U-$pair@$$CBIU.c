/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUInputData@MPCProcessor@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@@Z @ 0x180053E4C
 * Callers:
 *     ?CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z @ 0x180052E8C (-CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@1@1@Z @ 0x180053FC0 (--$_Insert_at@AEAU-$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUInpu.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_nohint<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        void *Block)
{
  __int64 *v7; // rax
  __int64 *v8; // r9
  bool v9; // r10
  unsigned int v10; // r8d
  __int64 *v11; // rbx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 *v14; // rax
  __int64 *i; // rax
  char v16; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v7 = (__int64 *)(*a1)[1];
    v8 = *a1;
    v9 = 1;
    if ( !*((_BYTE *)v7 + 25) )
    {
      v10 = *a4;
      do
      {
        v8 = v7;
        v9 = v10 < *((_DWORD *)v7 + 8);
        if ( v10 >= *((_DWORD *)v7 + 8) )
          v7 = (__int64 *)v7[2];
        else
          v7 = (__int64 *)*v7;
      }
      while ( !*((_BYTE *)v7 + 25) );
    }
    v11 = v8;
    if ( v9 )
    {
      if ( v8 == (__int64 *)**a1 )
      {
        *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_at<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
                                     (_DWORD)a1,
                                     (unsigned int)&v16,
                                     1,
                                     (_DWORD)v8);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v8 + 25) )
      {
        v11 = (__int64 *)v8[2];
      }
      else
      {
        v14 = (__int64 *)*v8;
        if ( *(_BYTE *)(*v8 + 25) )
        {
          for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25) && v11 == (__int64 *)*i; i = (__int64 *)i[1] )
            v11 = i;
          if ( !*((_BYTE *)v11 + 25) )
            v11 = i;
        }
        else
        {
          do
          {
            v11 = v14;
            v14 = (__int64 *)v14[2];
          }
          while ( !*((_BYTE *)v14 + 25) );
        }
      }
    }
    if ( *((_DWORD *)v11 + 8) >= *a4 )
    {
      operator delete(Block);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_at<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
                                   (_DWORD)a1,
                                   (unsigned int)&v16,
                                   v9,
                                   (_DWORD)v8);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      v12,
      Block);
    throw;
  }
  return result;
}

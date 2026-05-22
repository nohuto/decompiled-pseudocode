/*
 * XREFs of ?CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z @ 0x180045BCC
 * Callers:
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800457C0 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process2DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180045BB0 (-Process2DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@@Z @ 0x180046E00 (-erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$.c)
 *     ??$_Buynode@AEAIAEAUInputData@MPCProcessor@@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@AEAIAEAUInputData@MPCProcessor@@@Z @ 0x180047420 (--$_Buynode@AEAIAEAUInputData@MPCProcessor@@@-$_Tree_comp_alloc@V-$_Tmap_traits@IUInputData@MPCP.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUInputData@MPCProcessor@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@@Z @ 0x1800474D8 (--$_Insert_nohint@AEAU-$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIU.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

void __fastcall MPCProcessor::CacheHandInput(MPCProcessor *this, struct InputInfo *a2, bool *a3)
{
  struct InputInfo *v3; // rdi
  int v4; // esi
  unsigned int v5; // edx
  char *v6; // r14
  __int64 *v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // rax
  _OWORD *v10; // rdx
  __int64 v11; // r9
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  void *Block; // rax
  int v24; // r8d
  __int64 v25; // r9
  _OWORD *v26; // rcx
  __int64 v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  char v39; // al
  _OWORD *v40; // rbx
  _OWORD *v41; // rax
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  int v53; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v54[1736]; // [rsp+48h] [rbp-C0h] BYREF
  char v55; // [rsp+710h] [rbp+608h]
  unsigned int v56; // [rsp+740h] [rbp+638h] BYREF

  v3 = a2;
  *a3 = 0;
  v4 = *((_DWORD *)a2 + 130);
  if ( (unsigned int)(v4 - 2) <= 4 && *((_DWORD *)a2 + 286) && *(_DWORD *)a2 == 512 )
  {
    v5 = *((_DWORD *)a2 + 287);
    v6 = (char *)this + 2296;
    v7 = (__int64 *)*((_QWORD *)this + 287);
    v56 = v5;
    v8 = v7;
    v9 = (__int64 *)v7[1];
    if ( *((_BYTE *)v9 + 25) )
      goto LABEL_11;
    do
    {
      if ( *((_DWORD *)v9 + 8) >= v5 )
      {
        v8 = v9;
        v9 = (__int64 *)*v9;
      }
      else
      {
        v9 = (__int64 *)v9[2];
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
    if ( v8 == v7 || v5 < *((_DWORD *)v8 + 8) )
LABEL_11:
      v8 = v7;
    if ( v8 == v7 )
    {
      if ( v4 == 5 )
      {
        memset_0(v54, 0, 0x6D0uLL);
        v10 = v54;
        v11 = 13LL;
        do
        {
          v12 = *((_OWORD *)v3 + 1);
          *v10 = *(_OWORD *)v3;
          v13 = *((_OWORD *)v3 + 2);
          v10[1] = v12;
          v14 = *((_OWORD *)v3 + 3);
          v10[2] = v13;
          v15 = *((_OWORD *)v3 + 4);
          v10[3] = v14;
          v16 = *((_OWORD *)v3 + 5);
          v10[4] = v15;
          v17 = *((_OWORD *)v3 + 6);
          v10[5] = v16;
          v18 = *((_OWORD *)v3 + 7);
          v3 = (struct InputInfo *)((char *)v3 + 128);
          v10[6] = v17;
          v10 += 8;
          *(v10 - 1) = v18;
          --v11;
        }
        while ( v11 );
        v19 = *((_QWORD *)v3 + 8);
        v20 = *((_OWORD *)v3 + 1);
        *v10 = *(_OWORD *)v3;
        v21 = *((_OWORD *)v3 + 2);
        v10[1] = v20;
        v22 = *((_OWORD *)v3 + 3);
        v10[2] = v21;
        v10[3] = v22;
        *((_QWORD *)v10 + 8) = v19;
        v55 = 0;
        Block = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode<unsigned int &,MPCProcessor::InputData &>(
                          v6,
                          &v56,
                          v54);
        std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_nohint<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
          (int)v6,
          (int)&v53,
          v24,
          (_DWORD)Block + 32,
          Block);
      }
      else
      {
        *a3 = 1;
      }
    }
    else if ( v4 == 4 )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::erase(
        v6,
        &v56,
        v8);
    }
    else
    {
      memset_0(v54, 0, 0x6D0uLL);
      v25 = 13LL;
      v26 = v54;
      v27 = 13LL;
      do
      {
        v28 = *((_OWORD *)v3 + 1);
        *v26 = *(_OWORD *)v3;
        v29 = *((_OWORD *)v3 + 2);
        v26[1] = v28;
        v30 = *((_OWORD *)v3 + 3);
        v26[2] = v29;
        v31 = *((_OWORD *)v3 + 4);
        v26[3] = v30;
        v32 = *((_OWORD *)v3 + 5);
        v26[4] = v31;
        v33 = *((_OWORD *)v3 + 6);
        v26[5] = v32;
        v34 = *((_OWORD *)v3 + 7);
        v3 = (struct InputInfo *)((char *)v3 + 128);
        v26[6] = v33;
        v26 += 8;
        *(v26 - 1) = v34;
        --v27;
      }
      while ( v27 );
      v35 = *((_QWORD *)v3 + 8);
      v36 = *((_OWORD *)v3 + 1);
      *v26 = *(_OWORD *)v3;
      v37 = *((_OWORD *)v3 + 2);
      v26[1] = v36;
      v38 = *((_OWORD *)v3 + 3);
      v26[2] = v37;
      v26[3] = v38;
      *((_QWORD *)v26 + 8) = v35;
      if ( v4 == 2 )
      {
        v55 = 1;
      }
      else
      {
        v39 = *((_BYTE *)v8 + 1776);
        if ( v4 == 3 )
          v39 = 0;
        v55 = v39;
      }
      v40 = v8 + 5;
      v41 = v54;
      do
      {
        v42 = v41[1];
        *v40 = *v41;
        v43 = v41[2];
        v40[1] = v42;
        v44 = v41[3];
        v40[2] = v43;
        v45 = v41[4];
        v40[3] = v44;
        v46 = v41[5];
        v40[4] = v45;
        v47 = v41[6];
        v40[5] = v46;
        v48 = v41[7];
        v41 += 8;
        v40[6] = v47;
        v40 += 8;
        *(v40 - 1) = v48;
        --v25;
      }
      while ( v25 );
      v49 = v41[1];
      *v40 = *v41;
      v50 = v41[2];
      v40[1] = v49;
      v51 = v41[3];
      v40[2] = v50;
      v52 = v41[4];
      v40[3] = v51;
      v40[4] = v52;
    }
  }
}

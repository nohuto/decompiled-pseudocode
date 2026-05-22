/*
 * XREFs of ?CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z @ 0x180052E8C
 * Callers:
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180052A90 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process2DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180052E70 (-Process2DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@@Z @ 0x18001E5B8 (-erase@-$_Tree@V-$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V.c)
 *     ??$_Buynode@AEAIAEAUInputData@MPCProcessor@@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@AEAIAEAUInputData@MPCProcessor@@@Z @ 0x180053D9C (--$_Buynode@AEAIAEAUInputData@MPCProcessor@@@-$_Tree_comp_alloc@V-$_Tmap_traits@IUInputData@MPCP.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUInputData@MPCProcessor@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@@Z @ 0x180053E4C (--$_Insert_nohint@AEAU-$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIU.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

void __fastcall MPCProcessor::CacheHandInput(MPCProcessor *this, struct InputInfo *a2, bool *a3)
{
  struct InputInfo *v3; // rdi
  int v4; // esi
  unsigned int v5; // edx
  _QWORD *v6; // r14
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rdx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  void *Block; // rax
  int v21; // r8d
  __int64 v22; // rdx
  _OWORD *v23; // rax
  __int64 v24; // r8
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm1
  char v33; // al
  _OWORD *v34; // rbx
  _OWORD *v35; // rax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int64 v45; // rax
  int v46; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v47[2864]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v48; // [rsp+BA0h] [rbp+A98h] BYREF

  v3 = a2;
  *a3 = 0;
  v4 = *((_DWORD *)a2 + 174);
  if ( (unsigned int)(v4 - 2) <= 4 && *((_DWORD *)a2 + 330) && *(_DWORD *)a2 == 512 )
  {
    v5 = *((_DWORD *)a2 + 331);
    v6 = (_QWORD *)((char *)this + 568);
    v7 = (__int64 *)*((_QWORD *)this + 71);
    LODWORD(v48) = v5;
    v8 = v7;
    v9 = (__int64 *)v7[1];
    while ( !*((_BYTE *)v9 + 25) )
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
    if ( v8 == v7 || v5 < *((_DWORD *)v8 + 8) )
      v8 = v7;
    if ( v8 == v7 )
    {
      if ( v4 == 5 )
      {
        memset(v47, 0, 0xB28uLL);
        v10 = v47;
        v11 = 22LL;
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
        v19 = *((_OWORD *)v3 + 1);
        *v10 = *(_OWORD *)v3;
        v10[1] = v19;
        v47[2848] = 0;
        Block = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode<unsigned int &,MPCProcessor::InputData &>(
                          v6,
                          &v48,
                          v47);
        std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_nohint<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
          (int)v6,
          (int)&v46,
          v21,
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
      std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::erase(
        v6,
        &v48,
        v8);
    }
    else
    {
      memset(v47, 0, 0xB28uLL);
      v22 = 22LL;
      v23 = v47;
      v24 = 22LL;
      do
      {
        v25 = *((_OWORD *)v3 + 1);
        *v23 = *(_OWORD *)v3;
        v26 = *((_OWORD *)v3 + 2);
        v23[1] = v25;
        v27 = *((_OWORD *)v3 + 3);
        v23[2] = v26;
        v28 = *((_OWORD *)v3 + 4);
        v23[3] = v27;
        v29 = *((_OWORD *)v3 + 5);
        v23[4] = v28;
        v30 = *((_OWORD *)v3 + 6);
        v23[5] = v29;
        v31 = *((_OWORD *)v3 + 7);
        v3 = (struct InputInfo *)((char *)v3 + 128);
        v23[6] = v30;
        v23 += 8;
        *(v23 - 1) = v31;
        --v24;
      }
      while ( v24 );
      v32 = *((_OWORD *)v3 + 1);
      *v23 = *(_OWORD *)v3;
      v23[1] = v32;
      if ( v4 == 2 )
      {
        v47[2848] = 1;
      }
      else
      {
        v33 = *((_BYTE *)v8 + 2888);
        if ( v4 == 3 )
          v33 = 0;
        v47[2848] = v33;
      }
      v34 = v8 + 5;
      v35 = v47;
      do
      {
        v36 = v35[1];
        *v34 = *v35;
        v37 = v35[2];
        v34[1] = v36;
        v38 = v35[3];
        v34[2] = v37;
        v39 = v35[4];
        v34[3] = v38;
        v40 = v35[5];
        v34[4] = v39;
        v41 = v35[6];
        v34[5] = v40;
        v42 = v35[7];
        v35 += 8;
        v34[6] = v41;
        v34 += 8;
        *(v34 - 1) = v42;
        --v22;
      }
      while ( v22 );
      v43 = *v35;
      v44 = v35[1];
      v45 = *((_QWORD *)v35 + 4);
      *v34 = v43;
      v34[1] = v44;
      *((_QWORD *)v34 + 4) = v45;
    }
  }
}

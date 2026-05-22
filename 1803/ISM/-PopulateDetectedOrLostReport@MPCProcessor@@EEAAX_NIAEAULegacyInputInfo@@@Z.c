/*
 * XREFs of ?PopulateDetectedOrLostReport@MPCProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z @ 0x180045ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800478B4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree__ea_1800478B4.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@@Z @ 0x180047920 (--$_Insert_hint@AEAU-$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUIn.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x18005F0B0 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 */

void __fastcall MPCProcessor::PopulateDetectedOrLostReport(
        MPCProcessor *this,
        unsigned __int8 a2,
        unsigned int a3,
        struct LegacyInputInfo *a4)
{
  int v4; // r14d
  char *v5; // rsi
  __int64 v6; // rdx
  int v7; // r14d
  unsigned int *v10; // rbx
  __int64 *v11; // rax
  void *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  unsigned int *v15; // rbx
  __int64 *v16; // rax
  void *v17; // rax
  __int64 v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int *v22; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v23; // [rsp+70h] [rbp+40h] BYREF

  v23 = a3;
  v4 = a2;
  v5 = (char *)this + 2296;
  v6 = *((_QWORD *)this + 287);
  v7 = v4 ^ 1;
  v10 = (unsigned int *)v6;
  v11 = *(__int64 **)(v6 + 8);
  if ( *((_BYTE *)v11 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v11 + 8) >= a3 )
    {
      v10 = (unsigned int *)v11;
      v11 = (__int64 *)*v11;
    }
    else
    {
      v11 = (__int64 *)v11[2];
    }
  }
  while ( !*((_BYTE *)v11 + 25) );
  if ( v10 == (unsigned int *)v6 || a3 < v10[8] )
  {
LABEL_8:
    v22 = &v23;
    v12 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                    (char *)this + 2296,
                    v6,
                    &v22);
    std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_hint<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
      (int)v5,
      v12);
    v10 = v22;
  }
  v13 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(
          0LL,
          (unsigned int)(v7 + 4),
          512LL,
          **((unsigned int **)this + 6),
          v10 + 10);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x117,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
      (const char *)(unsigned int)v13);
    JUMPOUT(0x180046092LL);
  }
  v15 = *(unsigned int **)v5;
  v16 = *(__int64 **)(*(_QWORD *)v5 + 8LL);
  if ( *((_BYTE *)v16 + 25) )
    goto LABEL_18;
  v14 = v23;
  do
  {
    if ( *((_DWORD *)v16 + 8) >= v23 )
    {
      v15 = (unsigned int *)v16;
      v16 = (__int64 *)*v16;
    }
    else
    {
      v16 = (__int64 *)v16[2];
    }
  }
  while ( !*((_BYTE *)v16 + 25) );
  if ( v15 == *(unsigned int **)v5 || v23 < v15[8] )
  {
LABEL_18:
    v22 = &v23;
    v17 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                    v5,
                    v14,
                    &v22);
    std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_hint<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
      (int)v5,
      v17);
    v15 = v22;
  }
  v18 = 13LL;
  v19 = v15 + 10;
  do
  {
    *(_OWORD *)a4 = *v19;
    *((_OWORD *)a4 + 1) = v19[1];
    *((_OWORD *)a4 + 2) = v19[2];
    *((_OWORD *)a4 + 3) = v19[3];
    *((_OWORD *)a4 + 4) = v19[4];
    *((_OWORD *)a4 + 5) = v19[5];
    *((_OWORD *)a4 + 6) = v19[6];
    a4 = (struct LegacyInputInfo *)((char *)a4 + 128);
    v20 = v19[7];
    v19 += 8;
    *((_OWORD *)a4 - 1) = v20;
    --v18;
  }
  while ( v18 );
  *(_OWORD *)a4 = *v19;
  *((_OWORD *)a4 + 1) = v19[1];
  *((_OWORD *)a4 + 2) = v19[2];
  *((_OWORD *)a4 + 3) = v19[3];
  *((_QWORD *)a4 + 8) = *((_QWORD *)v19 + 8);
}

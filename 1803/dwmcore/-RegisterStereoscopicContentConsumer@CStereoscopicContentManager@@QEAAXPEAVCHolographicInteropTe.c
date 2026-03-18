/*
 * XREFs of ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1801FCD40
 * Callers:
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1801F7F90 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IPEAVCHolographicInteropTexture@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801FCB70 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_1801FCB70.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801FCBEC (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_1801FCBEC.c)
 *     ??0StereoscopicTransformInfo@@QEAA@XZ @ 0x1801FCC94 (--0StereoscopicTransformInfo@@QEAA@XZ.c)
 */

void __fastcall CStereoscopicContentManager::RegisterStereoscopicContentConsumer(
        CStereoscopicContentManager *this,
        struct CHolographicInteropTexture *a2)
{
  __int64 v4; // r9
  char *v5; // rax
  char *v6; // r11
  char *v7; // r8
  char *v8; // rdx
  char v9; // cl
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rax
  char v14; // r8
  StereoscopicTransformInfo *v15; // rax
  __int64 v16; // rdx
  _BYTE v17[224]; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v18; // [rsp+120h] [rbp+67h] BYREF
  __int64 v19; // [rsp+128h] [rbp+6Fh] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+130h] [rbp+77h] BYREF
  char *v21; // [rsp+138h] [rbp+7Fh] BYREF

  v20 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v4 = *((unsigned int *)a2 + 30);
  v5 = (char *)*((_QWORD *)this + 19);
  v18 = *((_DWORD *)a2 + 30);
  v6 = v5;
  v7 = (char *)*((_QWORD *)v5 + 1);
  while ( !v7[25] )
  {
    v8 = v7;
    if ( *((_DWORD *)v7 + 8) >= (unsigned int)v4 )
    {
      v7 = *(char **)v7;
      v9 = 0;
    }
    else
    {
      v7 = (char *)*((_QWORD *)v7 + 2);
      v9 = 1;
    }
    if ( !v9 )
      v5 = v8;
  }
  if ( v5 == v6 || (unsigned int)v4 < *((_DWORD *)v5 + 8) )
  {
    v19 = (__int64)&v18;
    v5 = *std::_Tree<std::_Tmap_traits<unsigned int,CHolographicInteropTexture *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,CHolographicInteropTexture *>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
            (_QWORD *)this + 19,
            &v21,
            (__int64)v5,
            v4,
            (_DWORD **)&v19);
  }
  *((_QWORD *)v5 + 5) = a2;
  memset_0(v17, 0, 0xCCuLL);
  v11 = *((_QWORD *)this + 21);
  v12 = v11;
  v13 = *(_QWORD *)(v11 + 8);
  while ( !*(_BYTE *)(v13 + 25) )
  {
    v10 = v13;
    if ( *(_DWORD *)(v13 + 28) >= v18 )
    {
      v13 = *(_QWORD *)v13;
      v14 = 0;
    }
    else
    {
      v13 = *(_QWORD *)(v13 + 16);
      v14 = 1;
    }
    if ( !v14 )
      v11 = v10;
  }
  if ( v11 == v12 || v18 < *(_DWORD *)(v11 + 28) )
  {
    v19 = (__int64)&v18;
    std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicTransformInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicTransformInfo>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
      (_QWORD *)this + 21,
      &v21,
      v11,
      v10,
      (_DWORD **)&v19);
  }
  v15 = StereoscopicTransformInfo::StereoscopicTransformInfo((StereoscopicTransformInfo *)v17);
  v16 += 32LL;
  *(_OWORD *)v16 = *(_OWORD *)v15;
  *(_OWORD *)(v16 + 16) = *((_OWORD *)v15 + 1);
  *(_OWORD *)(v16 + 32) = *((_OWORD *)v15 + 2);
  *(_OWORD *)(v16 + 48) = *((_OWORD *)v15 + 3);
  *(_OWORD *)(v16 + 64) = *((_OWORD *)v15 + 4);
  *(_OWORD *)(v16 + 80) = *((_OWORD *)v15 + 5);
  *(_OWORD *)(v16 + 96) = *((_OWORD *)v15 + 6);
  v16 += 128LL;
  *(_OWORD *)(v16 - 16) = *((_OWORD *)v15 + 7);
  *(_OWORD *)v16 = *((_OWORD *)v15 + 8);
  *(_OWORD *)(v16 + 16) = *((_OWORD *)v15 + 9);
  *(_OWORD *)(v16 + 32) = *((_OWORD *)v15 + 10);
  *(_OWORD *)(v16 + 48) = *((_OWORD *)v15 + 11);
  *(_QWORD *)(v16 + 64) = *((_QWORD *)v15 + 24);
  *(_DWORD *)(v16 + 72) = *((_DWORD *)v15 + 50);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v20);
}

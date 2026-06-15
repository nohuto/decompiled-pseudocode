/*
 * XREFs of ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@@Z @ 0x1800F81B0
 * Callers:
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x1800F89C0 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x1800F8C40 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 * Callees:
 *     memcmp_0 @ 0x1800657A9 (memcmp_0.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800F7968 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBU_GUID@@@2@V-$tuple@$$V@2@@-$_Tree_comp_a.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@@Z @ 0x1800F7C98 (--$_Insert_hint@AEAU-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_GUID@@UHmd.c)
 */

__int64 __fastcall std::map<_GUID,HmdInfo>::_Try_emplace<_GUID const &,>(__int64 ***a1, __int64 a2, _OWORD *a3)
{
  __int64 **v3; // r14
  __int64 **v7; // rbx
  __int64 *v8; // rsi
  __int64 *v9; // r13
  char v10; // al
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 Buf2; // [rsp+30h] [rbp-20h] BYREF
  __int128 Buf1; // [rsp+40h] [rbp-10h] BYREF
  _OWORD *v16; // [rsp+80h] [rbp+30h] BYREF

  v3 = *a1;
  v7 = *a1;
  v8 = (*a1)[1];
  if ( *((_BYTE *)v8 + 25) )
    goto LABEL_12;
  Buf2 = *a3;
  do
  {
    v9 = v8;
    Buf1 = *((_OWORD *)v8 + 2);
    if ( memcmp_0(&Buf1, &Buf2, 0x10uLL) >= 0 )
    {
      v8 = (__int64 *)*v8;
      v10 = 0;
    }
    else
    {
      v8 = (__int64 *)v8[2];
      v10 = 1;
    }
    if ( !v10 )
      v7 = (__int64 **)v9;
  }
  while ( !*((_BYTE *)v8 + 25) );
  if ( v7 == v3 || (v11 = *a3, Buf1 = *((_OWORD *)v7 + 2), Buf2 = v11, memcmp_0(&Buf2, &Buf1, 0x10uLL) < 0) )
  {
LABEL_12:
    v16 = a3;
    v12 = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<_GUID const &>,std::tuple<>>(
            (__int64)a1,
            a2,
            &v16);
    std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_hint<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
      a1,
      (__int64 *)&v16,
      (__int64 *)v7,
      (__int128 *)(v12 + 32),
      v12);
    *(_QWORD *)a2 = v16;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}

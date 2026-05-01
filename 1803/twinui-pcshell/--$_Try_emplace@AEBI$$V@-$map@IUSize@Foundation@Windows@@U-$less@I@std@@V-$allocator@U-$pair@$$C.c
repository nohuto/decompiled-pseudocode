/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18025151C
 * Callers:
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x180251CB0 (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@I@Z @ 0x180252AA8 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windo.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180253660 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802509A8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree__ea_1802509A8.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUSize@Foundation@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@@Z @ 0x180250FC8 (--$_Insert_hint@AEAU-$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUS.c)
 */

__int64 __fastcall std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // r10
  __int64 v10; // rax
  _DWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = a2;
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 8);
  if ( *(_BYTE *)(v7 + 25) )
    goto LABEL_12;
  a2 = (unsigned int)*a3;
  do
  {
    v8 = *(_DWORD *)(v7 + 28);
    v9 = v7;
    if ( v8 >= (unsigned int)a2 )
      v7 = *(_QWORD *)v7;
    else
      v7 = *(_QWORD *)(v7 + 16);
    if ( v8 >= (unsigned int)a2 )
      v6 = v9;
  }
  while ( !*(_BYTE *)(v7 + 25) );
  if ( v6 == v3 || (unsigned int)a2 < *(_DWORD *)(v6 + 28) )
  {
LABEL_12:
    v12 = a3;
    v10 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
            (__int64)a1,
            a2,
            &v12);
    std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_hint<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
      a1,
      (char **)&v12,
      v6,
      (unsigned int *)(v10 + 28),
      (char *)v10);
    *(_QWORD *)v4 = v12;
    *(_BYTE *)(v4 + 8) = 1;
  }
  else
  {
    *(_QWORD *)v4 = v6;
    *(_BYTE *)(v4 + 8) = 0;
  }
  return v4;
}

/*
 * XREFs of _lambda_bc2aba7ba829d575f491599aa9d39211_::_lambda_invoker_cdecl_ @ 0x180008240
 * Callers:
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x180007BD0 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 * Callees:
 *     ??$_Insert_nohint@AEBIU_Nil@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Nil@1@@Z @ 0x180009B5C (--$_Insert_nohint@AEBIU_Nil@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@.c)
 */

__int64 __fastcall lambda_bc2aba7ba829d575f491599aa9d39211_::_lambda_invoker_cdecl_(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  int v8; // [rsp+20h] [rbp-28h]
  char v9; // [rsp+20h] [rbp-28h]
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+20h] BYREF

  if ( (a4 & 0x1A) != 0 )
  {
    v11 = a2;
    v9 = byte_180272788;
    std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_nohint<unsigned int const &,std::_Nil>(
      &unk_18026EE38,
      v10,
      a3,
      &v11,
      v9);
  }
  if ( (a4 & 4) != 0 )
  {
    LOBYTE(v8) = byte_180272788;
    v11 = a2;
    std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_nohint<unsigned int const &,std::_Nil>(
      &unk_18026EE48,
      v10,
      a3,
      &v11,
      v8);
  }
  return anonymous_namespace_::FramesReport::UpdateResourceCountersForPid(*((_QWORD *)qword_180272758 + 5), a2, a5);
}

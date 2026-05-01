/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAV?$shared_ptr@UKBViewInfo@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800EC498
 * Callers:
 *     ??$emplace_back@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x1800EBC30 (--$emplace_back@AEBV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeoplePaneV.c)
 *     ??$emplace_back@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x180117074 (--$emplace_back@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeoplePaneView.c)
 *     ??$emplace_back@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x18019E9C0 (--$emplace_back@V-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$a.c)
 *     ??$emplace@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@$$QEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x18019ECF0 (--$emplace@V-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$alloca.c)
 * Callees:
 *     <none>
 */

volatile signed __int32 **__fastcall std::_Uninitialized_move_al_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2,
        volatile signed __int32 **a3)
{
  volatile signed __int32 **v4; // [rsp+50h] [rbp+18h]
  volatile signed __int32 **v5; // [rsp+58h] [rbp+20h]

  v4 = a3;
  v5 = a3;
  try
  {
    while ( a1 != a2 )
    {
      if ( a3 )
      {
        *a3 = *a1;
        a3[1] = a1[1];
        *a1 = 0LL;
        a1[1] = 0LL;
      }
      a3 += 2;
      v4 = a3;
      a1 += 2;
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>,std::shared_ptr<PenWorkspace::Discover::AppUsageData> *>(
      v5,
      v4);
    throw;
  }
  return a3;
}

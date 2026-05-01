/*
 * XREFs of ?GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z @ 0x1801C2940
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801C1D98 (-FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewIn.c)
 */

__int64 __fastcall PeoplePaneViewManager::GetViewDesiredSize(RTL_SRWLOCK *this, int a2, struct tagSIZE *a3)
{
  int ViewInfoByApplicationViewId; // eax
  unsigned int v5; // ebx
  std::_Ref_count_base *v7[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  *(_OWORD *)v7 = 0LL;
  ViewInfoByApplicationViewId = PeoplePaneViewManager::FindViewInfoByApplicationViewId(this - 11, a2, v7);
  v5 = ViewInfoByApplicationViewId;
  if ( ViewInfoByApplicationViewId >= 0 )
  {
    v5 = 0;
    *a3 = *(struct tagSIZE *)((char *)v7[0] + 64);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x200,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)ViewInfoByApplicationViewId);
  }
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  return v5;
}

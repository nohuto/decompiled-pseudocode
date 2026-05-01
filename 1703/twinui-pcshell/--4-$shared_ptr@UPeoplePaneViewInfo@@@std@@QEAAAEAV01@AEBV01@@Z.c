/*
 * XREFs of ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EBCD4
 * Callers:
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1800E8600 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 *     ?PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1800E9200 (-PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800E9CC4 (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800E9E00 (-FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewIn.c)
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800E9F60 (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::shared_ptr<PeoplePaneViewInfo>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rdx
  volatile signed __int32 *v7; // [rsp+28h] [rbp-10h]

  v2 = a2[1];
  v4 = *a2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  v5 = (volatile signed __int32 *)a1[1];
  a1[1] = v2;
  v7 = v5;
  *a1 = v4;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return a1;
}

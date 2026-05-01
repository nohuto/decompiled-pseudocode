/*
 * XREFs of ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EB420
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEAU_FILETIME@@@Z @ 0x1800E8E48 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEAU_FILETIME@@@Z.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1800EA15C (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1801121C0 (-PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18011315C (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18011324C (-FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewIn.c)
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801133B8 (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 *     ?OnClientWindowReadyForPresentationChanged@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18019CA00 (-OnClientWindowReadyForPresentationChanged@TouchKeyboardExperienceManager@@AEAAJPEAUIClientWindo.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18019DB1C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 * Callees:
 *     ??0?$shared_ptr@I@std@@QEAA@AEBV01@@Z @ 0x1800EB52C (--0-$shared_ptr@I@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall std::shared_ptr<PeoplePaneViewInfo>::operator=(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  volatile signed __int32 *v6; // rbx
  _BYTE v8[8]; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+28h] [rbp-10h]

  v3 = (__int64 *)std::shared_ptr<unsigned int>::shared_ptr<unsigned int>(v8, a2);
  v4 = v3[1];
  v3[1] = a1[1];
  a1[1] = v4;
  v5 = *v3;
  *v3 = *a1;
  v6 = v9;
  *a1 = v5;
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a1;
}

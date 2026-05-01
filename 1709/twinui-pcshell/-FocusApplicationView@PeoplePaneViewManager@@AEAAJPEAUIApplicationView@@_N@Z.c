/*
 * XREFs of ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180112E24
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180112800 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801133B8 (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180113B94 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::FocusApplicationView(
        PeoplePaneViewManager *this,
        struct IApplicationView *a2,
        unsigned __int8 a3)
{
  __int64 v5; // r8
  __int64 v6; // rbx
  __int128 v8; // [rsp+28h] [rbp-20h] BYREF

  v8 = 0LL;
  if ( (int)PeoplePaneViewManager::FindViewInfoByApplicationView(this, a2, &v8) >= 0 && *(_BYTE *)(v8 + 56) == 1 )
  {
    v5 = v8;
    if ( *(_QWORD *)(v8 + 24) >= 8uLL )
      v5 = *(_QWORD *)v8;
    PeoplePaneViewManager::NotifyListeners(this, (a3 ^ 1u) + 2, v5, *(unsigned int *)(v8 + 40));
  }
  if ( *((_QWORD *)&v8 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v6 = *((_QWORD *)&v8 + 1);
      (***((void (__fastcall ****)(_QWORD))&v8 + 1))(*((_QWORD *)&v8 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v8 + 1) + 8LL))(*((_QWORD *)&v8 + 1));
    }
  }
  return 0LL;
}

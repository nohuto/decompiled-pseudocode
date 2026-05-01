/*
 * XREFs of ?RemovePendingView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801C4428
 * Callers:
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801C29C0 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?erase@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1801C558C (-erase@-$vector@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIApplicatio.c)
 */

__int64 __fastcall PeoplePaneViewManager::RemovePendingView(PeoplePaneViewManager *this, struct IApplicationView *a2)
{
  CWinRTApplicationView **v2; // rbp
  char *v3; // r14
  CWinRTApplicationView **i; // rdi
  struct IApplicationView *v7; // rbx
  CWinRTApplicationView *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CWinRTApplicationView **)*((_QWORD *)this + 22);
  v3 = (char *)this + 168;
  for ( i = (CWinRTApplicationView **)*((_QWORD *)this + 21); i != v2; ++i )
  {
    v9 = *i;
    v7 = v9;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v9);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
    if ( v7 == a2 )
      break;
  }
  if ( i == *((CWinRTApplicationView ***)this + 22) )
    return 2147942487LL;
  std::vector<Microsoft::WRL::ComPtr<IApplicationView>>::erase(v3, &v9, i);
  return 0LL;
}

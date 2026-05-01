/*
 * XREFs of std::_Find_if_unchecked_std::shared_ptr_PeoplePaneViewInfo__const_____ptr64_std::_Ref_fn__lambda_8b7f561eeecd700a6a36bc0a9fbde639_____ @ 0x1801BFB98
 * Callers:
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801C1CD0 (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Find_if_unchecked_std::shared_ptr_PeoplePaneViewInfo__const_____ptr64_std::_Ref_fn__lambda_8b7f561eeecd700a6a36bc0a9fbde639_____(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rsi
  __int64 v6; // rdi
  bool v7; // di
  CWinRTApplicationView *v9; // [rsp+40h] [rbp+8h] BYREF

  for ( i = a1; i != a2; i += 16LL )
  {
    if ( *(_QWORD *)(*(_QWORD *)i + 48LL) )
    {
      v9 = 0LL;
      v6 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 336LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
      (*(void (__fastcall **)(__int64, _QWORD, CWinRTApplicationView **))(*(_QWORD *)v6 + 48LL))(
        v6,
        *(_QWORD *)(*(_QWORD *)i + 48LL),
        &v9);
      v7 = v9 == *(CWinRTApplicationView **)a3;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
    }
    else
    {
      v7 = 0;
    }
    if ( v7 )
      break;
  }
  return i;
}

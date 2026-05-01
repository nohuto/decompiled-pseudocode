/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@UPeoplePaneViewInfo@@@std@@EEAAXXZ @ 0x1801C53F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Ref_count_obj<PeoplePaneViewInfo>::_Destroy(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 16;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)(a1 + 88));
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)(v1 + 32));
  return std::wstring::_Tidy_deallocate(v1);
}

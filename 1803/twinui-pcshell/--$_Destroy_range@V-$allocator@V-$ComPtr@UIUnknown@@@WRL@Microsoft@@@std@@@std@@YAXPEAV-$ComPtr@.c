/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@0@@Z @ 0x180190E00
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_IUnknown______ptr64_Microsoft::WRL::ComPtr_IUnknown______ptr64_std::allocator_Microsoft::WRL::ComPtr_IUnknown______::_1_::catch$2 @ 0x180190E7F (_std--_Uninitialized_move_al_unchecked_Microsoft--WRL--ComPtr_IUnknown______ptr64_Microsoft--WRL.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IUnknown>>>(
        CWinRTApplicationView **a1,
        CWinRTApplicationView **a2)
{
  CWinRTApplicationView **v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}

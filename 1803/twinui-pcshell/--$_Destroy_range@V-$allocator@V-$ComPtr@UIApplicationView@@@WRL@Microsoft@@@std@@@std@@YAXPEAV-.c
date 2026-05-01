/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@0@@Z @ 0x1801BFB2C
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_IApplicationView______ptr64_Microsoft::WRL::ComPtr_IApplicationView______ptr64_std::allocator_Microsoft::WRL::ComPtr_IApplicationView______::_1_::catch$2 @ 0x1801BFC9B (_std--_Uninitialized_move_al_unchecked_Microsoft--WRL--ComPtr_IApplicationView______ptr64_Micros.c)
 * Callees:
 *     ??_G?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18013AEC8 (--_G-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

CWinRTApplicationView **__fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(
        CWinRTApplicationView **a1,
        CWinRTApplicationView **a2)
{
  CWinRTApplicationView **v3; // rbx
  CWinRTApplicationView **result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<IApplicationView>::`scalar deleting destructor'(v3++);
    while ( v3 != a2 );
  }
  return result;
}
